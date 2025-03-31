#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QDebug>
#include <QDateTime>
#include <QString>
#include <QLabel>
#include <QMessageBox>
#include <iostream>
#include <vector>
#include <utility>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer(new QTimer(this))
    , currentImageIndex(0)

{
    ui->setupUi(this);

    // Set a logo
    ui->logoLabel->setPixmap(QPixmap("C:/Users/Vahid/Documents/Qt/prg_pill_quality/pill_quality/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/debug/exemple-logo.png"));
    ui->logoLabel->setScaledContents(true); // Scale to fit

    // Initialize pixmaps as null
    currentPixmap = QPixmap();
    previousPixmap = QPixmap();
    olderPixmap = QPixmap();

    showStartTime(); // Call the function to display the control start time

    // Configure image windows
    ui->imageLabel->setScaledContents(true);
    ui->imageLabel2->setScaledContents(true);
    ui->imageLabel3->setScaledContents(true);

    // Set up timer
    timer->setInterval(1000); // 1 second delay (as if every second one product passes in front of the camera)
    connect(timer, &QTimer::timeout, this, &MainWindow::showNextImage);

    // Load image path
    loadImagePaths("C:/Users/Vahid/Documents/Qt/prg_pill_quality/pill_quality/images/");
}

void MainWindow::showStartTime() {
    // Get the current date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();
    // Format the current date and time
    QString formattedDate = currentDateTime.toString("yyyy-MM-dd"); // Format for date
    QString formattedTime = currentDateTime.toString("HH:mm:ss"); // Format for time

    // Set the text of the QLabels for date and time
    ui->startDate->setText(formattedDate);
    ui->startTime->setText(formattedTime);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadImagePaths(const QString &directoryPath)
{
    QDir directory(directoryPath);
    QStringList filters;
    filters << "*.png" << "*.jpg" << "*.jpeg" << "*.bmp"; // Acceptable image formats
    imagePaths = directory.entryList(filters, QDir::Files);

    // Add full path
    for (QString &path : imagePaths) {
        path = directoryPath + path;
    }

    if (imagePaths.isEmpty()) {
        ui->sizeLabel->setText("No images found in directory.");
    }
}

void MainWindow::on_startButton_clicked()
{
    if (!imagePaths.isEmpty()) {
        currentImageIndex = 0;
        showNextImage(); // Show first image immediately
        timer->start(); // Start the slideshow
    }
}

void MainWindow::on_stopButton_clicked()
{
    timer->stop();
}

void MainWindow::showNextImage()
{
    if (imagePaths.isEmpty()) return;

    // Reset "result" variable at the start of each image processing (Piece OK: result == 0, Piece NOK: result == 1)
    result = 0;
    // Increment total controlled images counter
    totalImagesRead++;
    ui->counter_image->setText(QString::number(totalImagesRead));

    // Shift images back for the display of previous images (current becomes previous, previous becomes older)
    olderPixmap = previousPixmap;
    previousPixmap = currentPixmap;

    // Load and process current image
    cv::Mat currentImage = cv::imread(imagePaths[currentImageIndex].toStdString(), 1);
    if (currentImage.empty()) {
        qDebug() << "Failed to load:" << imagePaths[currentImageIndex];
        return;
    }

    // Create a mask for the pill to remove the background and put it to absolute 0
    cv::Mat maskPill = cv::Mat::zeros(currentImage.size(), CV_8UC1);

    // Define the center of the elipses (the pill is centered in the image)
    cv::Point center(400, 400);

    // Dimensions for the elipse (just a bit smaller than the pill)
    int large_a = 342; // semi-major axis (half of diameter)
    int large_b = 228; // semi-minor axis (half of diameter)

    // Create the mask
    cv::ellipse(maskPill, center, cv::Size(large_a, large_b), 0, 0, 360, cv::Scalar(255), -1);

    // Create output image to store the extracted area
    cv::Mat output_im;
    currentImage.copyTo(output_im, maskPill);


    // ////////  Impurity: yellow detection          . . . . . . . . . . . . . . . . . . . . . . . . .

    // Convert the image from BGR to HSV
    cv::Mat hsvImage;
    cv::cvtColor(output_im, hsvImage, cv::COLOR_BGR2HSV);

    // Define the range for yellow color in HSV
    cv::Scalar lowerYellow(20, 80, 170); // Lower bound of yellow in HSV
    cv::Scalar upperYellow(40, 120, 210); // Upper bound of yellow in HSV

    // Threshold the HSV image to get only yellow colors
    cv::Mat yellowMask;
    cv::inRange(hsvImage, lowerYellow, upperYellow, yellowMask);

    // Find contours of the yellow areas
    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(yellowMask, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    if (controlActivation == 0 && colorControlActivation == 0){
        // Draw rectangles around detected yellow areas
        for (const auto& contour : contours) {
            if (cv::contourArea(contour) > 10) { // Adjust threshold as needed
                cv::Rect boundingBox = cv::boundingRect(contour);
                cv::rectangle(currentImage, boundingBox, cv::Scalar(0, 255, 0), 2); // Green color for rectangle
                result = 1; // Update result variable if contours are found
            }
        }
    }

    // ////////  Impurity: blue detection          . . . . . . . . . . . . . . . . . . . . . . . . .

    // Define the range for blue color in HSV
    cv::Scalar lowerBlue(65, 100, 50); // Lower bound of blue in HSV
    cv::Scalar upperBlue(180, 190, 130); // Upper bound of blue in HSV

    // Threshold the HSV image to get only blue colors
    cv::Mat blueMask;
    cv::inRange(hsvImage, lowerBlue, upperBlue, blueMask);

    // Find contours of the blue areas
    std::vector<std::vector<cv::Point>> contours2;
    cv::findContours(blueMask, contours2, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    if (controlActivation == 0 && colorControlActivation == 0){
        // Draw rectangles around detected blue areas
        for (const auto& contour : contours2) {
            if (cv::contourArea(contour) > 10) { // Adjust threshold as needed
                cv::Rect boundingBox = cv::boundingRect(contour);
                cv::rectangle(currentImage, boundingBox, cv::Scalar(0, 255, 0), 2); // Green color for rectangle
                result = 1; // Update result variable if contours are found
            }
        }
    }


    // ////////  Impurity: pink detection          . . . . . . . . . . . . . . . . . . . . . . . . .

    // Define the range for pink color in HSV
    cv::Scalar lowerPink(0, 110, 145); // Lower bound of pink in HSV
    cv::Scalar upperPink(190, 190, 250); // Upper bound of pink in HSV

    // Threshold the HSV image to get only pink colors
    cv::Mat pinkMask;
    cv::inRange(hsvImage, lowerPink, upperPink, pinkMask);

    // Find contours of the pink areas
    std::vector<std::vector<cv::Point>> contours3;
    cv::findContours(pinkMask, contours3, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    if (controlActivation == 0 && colorControlActivation == 0){
        // Draw rectangles around detected pink areas
        for (const auto& contour : contours3) {
            if (cv::contourArea(contour) > 10) { // Adjust threshold as needed
                cv::Rect boundingBox = cv::boundingRect(contour);
                cv::rectangle(currentImage, boundingBox, cv::Scalar(0, 255, 0), 2); // Green color for rectangle
                result = 1; // Update result variable if contours are found
            }
        }
    }


    // ////////  Spoilled pill detection          . . . . . . . . . . . . . . . . . . . . . . . . .

    // Convert to grayscale
    cv::Mat Gray;
    cv::cvtColor(output_im, Gray, cv::COLOR_BGR2GRAY);  // Use BGR to Gray conversion

    // Define threshold values
    int lowerThreshold = 50;
    int upperThreshold = 140;

    // Create a mask for pixels within the threshold band
    cv::Mat mask;
    inRange(Gray, lowerThreshold, upperThreshold, mask);

    cv::Mat labels;
    int numberOfObjects = cv::connectedComponents(mask, labels); // Count number of white objects

    if (controlActivation == 0 && spoilControlActivation == 0){
        if (numberOfObjects > 150) { // Adjust threshold as needed
            imagesWithSpoilDefect++;
            result = 1; // Update result variable if contours are found
        }
    }


    // ////////  Crack detection          . . . . . . . . . . . . . . . . . . . . . . . . .

    auto Outcome = countRegionsInGrayImage(currentImage);
    int nRegions = Outcome.first;

    std::vector<std::vector<cv::Point>> contours4 = Outcome.second;

    if (controlActivation == 0 && crackControlActivation == 0){
        // Draw rectangles around detected areas
        for (const auto& contour : contours4) {
            if (cv::contourArea(contour) > 0) { // Adjust threshold as needed
                cv::Rect boundingBox = cv::boundingRect(contour);
                cv::rectangle(currentImage, boundingBox, cv::Scalar(0, 255, 0), 2); // Green color for rectangle
                imagesWithCrackDefect++;
                result = 1; // Update result variable if contours are found
            }
        }
    }

    // ////////  Decision  . . . . . . . . . . . . . .. . . . . . . . . . . . . . . . . .

    // Update color defect counter based on contour detection
    if (!contours.empty() || !contours2.empty() || !contours3.empty()) {
        imagesWithColorDefect++;  // Increment only if contours were found
    }

    ui->counter_color->setText(QString::number(imagesWithColorDefect));
    ui->counter_crack->setText(QString::number(imagesWithCrackDefect));
    ui->counter_spoil->setText(QString::number(imagesWithSpoilDefect));

    // Change the result button color based on the "result" variable
    if (result == 1) {
        ui->resultButton->setText("Non conforme");
        ui->resultButton->setStyleSheet("background-color: rgb(190, 0, 30); color: black; font-size: 14px;");

    } else {
        ui->resultButton->setText("Conforme");
        ui->resultButton->setStyleSheet("background-color: rgb(110, 150, 0); color: black; font-size: 14px;");
    }

    // Counter of total defects
    counterDefect = imagesWithColorDefect + imagesWithSpoilDefect + imagesWithCrackDefect;
    ui->counterTotal->setText(QString::number(counterDefect));

    // Update control history window
    QString resultText = QString("Pill %1 .. %2 ..")
                             .arg(currentImageIndex + 1)
                             .arg(result == 1 ? " ...  NON CONFORME  ..." : " ...  CONFORME  ...");

    resultHistory.append(resultText);

    // Keep only the last 11 results
    while (resultHistory.size() > 11) {
        resultHistory.removeFirst();
    }

    // Update the history display
    QString historyText;
    for (const QString &entry : resultHistory) {
        historyText += entry + "\n";
    }
    ui->historyLabel->setText(historyText);

    // Convert to QPixmap for display
    QImage qImg = cvMatToQImage(currentImage);
    currentPixmap = QPixmap::fromImage(qImg);

    // Display all three images
    displayPixmap(currentPixmap, ui->imageLabel);
    if (!previousPixmap.isNull()) {
        displayPixmap(previousPixmap, ui->imageLabel2);
    }
    if (!olderPixmap.isNull()) {
        displayPixmap(olderPixmap, ui->imageLabel3);
    }

    // Update info label
    QString infoText = QString("Image %1/%2: %3x%4 - %5")
                           .arg(currentImageIndex + 1)
                           .arg(imagePaths.size())
                           .arg(currentImage.cols)
                           .arg(currentImage.rows)
                           .arg(QFileInfo(imagePaths[currentImageIndex]).fileName());
    ui->sizeLabel->setText(infoText);

    // Move to next image (with wrap-around)
    currentImageIndex = (currentImageIndex + 1) % imagePaths.size();
}

// Helper function to display pixmaps
void MainWindow::displayPixmap(const QPixmap &pixmap, QLabel *label)
{
    QPixmap scaled = pixmap.scaled(label->size(),
                                   Qt::KeepAspectRatio,
                                   Qt::SmoothTransformation);
    label->setPixmap(scaled);
}

QImage MainWindow::cvMatToQImage(const cv::Mat& mat)
{
    if (mat.type() == CV_8UC3) {
        cv::Mat rgb;
        cv::cvtColor(mat, rgb, cv::COLOR_BGR2RGB);
        QImage img(rgb.cols, rgb.rows, QImage::Format_RGB888);
        for (int y = 0; y < rgb.rows; y++) {
            memcpy(img.scanLine(y), rgb.ptr(y), rgb.cols * 3);
        }
        return img;
    } else if (mat.type() == CV_8UC1) {
        QImage img(mat.cols, mat.rows, QImage::Format_Grayscale8);
        for (int y = 0; y < mat.rows; y++) {
            memcpy(img.scanLine(y), mat.ptr(y), mat.cols);
        }
        return img;
    }
    return QImage();
}

std::pair<int, std::vector<std::vector<cv::Point>>> MainWindow::countRegionsInGrayImage(const cv::Mat &inputImage)
{
    cv::Mat gray;
    cv::cvtColor(inputImage, gray, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(gray, gray, cv::Size(5, 5), 0.5);

    // Create a mask for the image
    cv::Mat mask = cv::Mat::zeros(gray.size(), CV_8UC1);

    // Define the center of the elipses
    cv::Point center(400, 400);

    // Dimensions for the first elipse (smaller)
    int small_a = 320; // semi-major axis (half of diameter)
    int small_b = 200; // semi-minor axis (half of diameter)

    // Dimensions for the second elipse (larger)
    int large_a = 342; // semi-major axis (half of diameter)
    int large_b = 228; // semi-minor axis (half of diameter)

    // Create the larger elipse mask
    cv::ellipse(mask, center, cv::Size(large_a, large_b), 0, 0, 360, cv::Scalar(255), -1);

    // Create the smaller elipse mask
    cv::Mat small_mask = cv::Mat::zeros(gray.size(), CV_8UC1);
    cv::ellipse(small_mask, center, cv::Size(small_a, small_b), 0, 0, 360, cv::Scalar(255), -1);

    // Subtract smaller elipse from the larger one (mask region between)
    cv::Mat region_between = mask - small_mask;

    // Create output image to store the extracted area
    cv::Mat output_image;
    gray.copyTo(output_image, region_between);

    // Create mask for values between 20 and 100
    cv::Mat binaryImage;
    cv::inRange(output_image, 20, 100, binaryImage);

    // Define a kernel for the morphological operations
    cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));

    // Apply Morphological Closing
    cv::Mat closingImage;
    cv::morphologyEx(binaryImage, closingImage, cv::MORPH_CLOSE, kernel);

    // Apply Morphological Opening
    cv::Mat openingImage;
    cv::morphologyEx(closingImage, openingImage, cv::MORPH_OPEN, kernel);

    // Use connectedComponents to label each component
    cv::Mat labels;
    int numLabels = connectedComponents(openingImage, labels, 8); // 8-connectivity

    // Find contours of the white areas
    std::vector<std::vector<cv::Point>> contours4;
    cv::findContours(openingImage, contours4, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    int numWhiteObjects = numLabels - 1;
    // Subtract 1 to exclude background
    return std::make_pair(numWhiteObjects, contours4);
}

void MainWindow::on_clearData_clicked()
{
    // Show a confirmation message box
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to clear the control data?",
                                  QMessageBox::Yes | QMessageBox::No);

    // Check the user's response
    if (reply == QMessageBox::Yes) {
        // User clicked Yes, perform the desired action
        totalImagesRead = 0;
        imagesWithColorDefect = 0;
        counterDefect = 0;
        ui->counter_image->setText(QString::number(totalImagesRead));
        ui->counter_color->setText(QString::number(imagesWithColorDefect));
        ui->counterTotal->setText(QString::number(counterDefect));
    } else {
        // User clicked No, do nothing
        // Optionally: You might want to show a message or log the action
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    // Toggle the controlActivation variable
    if (controlActivation == 0) {
        // Change button color to light blue
        ui->pushButton_4->setStyleSheet("background-color: lightblue;");
        controlActivation = 1; // Set controlActivation to 1
    } else {
        // Reset button color to default
        ui->pushButton_4->setStyleSheet(""); // Resets to default style
        controlActivation = 0; // Set controlActivation to 0
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    // Toggle the controlActivation variable
    if (crackControlActivation == 0) {
        // Change button color to light blue
        ui->pushButton_5->setStyleSheet("background-color: lightblue;");
        crackControlActivation = 1;
    } else {
        // Reset button color to default
        ui->pushButton_5->setStyleSheet(""); // Resets to default style
        crackControlActivation = 0;
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    // Toggle the controlActivation variable
    if (colorControlActivation == 0) {
        // Change button color to light blue
        ui->pushButton_7->setStyleSheet("background-color: lightblue;");
        colorControlActivation = 1;
    } else {
        // Reset button color to default
        ui->pushButton_7->setStyleSheet(""); // Resets to default style
        colorControlActivation = 0;
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    // Toggle the controlActivation variable
    if (spoilControlActivation == 0) {
        // Change button color to light blue
        ui->pushButton_6->setStyleSheet("background-color: lightblue;");
        spoilControlActivation = 1;
    } else {
        // Reset button color to default
        ui->pushButton_6->setStyleSheet(""); // Resets to default style
        spoilControlActivation = 0;
    }
}

