#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <opencv2/opencv.hpp>  // Single include for all OpenCV functions
#include <QLabel>
#include <utility> // For std::pair

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startButton_clicked();
    void on_stopButton_clicked();
    void showNextImage();
    void showStartTime();
    void on_clearData_clicked();

    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QStringList imagePaths;
    int currentImageIndex;
    QImage cvMatToQImage(const cv::Mat& mat);
    void loadImagePaths(const QString &directoryPath);
    void displayPixmap(const QPixmap &pixmap, QLabel *label);

private:
    int result = 0; // Global result variable

private:
    QStringList resultHistory;  // To store the last 4 results

private:
    int totalImagesRead = 0;        // Counter for all images processed
    int imagesWithColorDefect = 0;     // Counter for images with color defect
    int imagesWithSpoilDefect = 0;     // Counter for images with spoil defect
    int imagesWithCrackDefect = 0;     // Counter for images with crack defect
    int counterDefect = 0;     // Counter of defects
    int controlActivation = 0;     // Active/deactive
    int colorControlActivation = 0;     // Active/deactive
    int crackControlActivation = 0;     // Active/deactive
    int spoilControlActivation = 0;     // Active/deactive

private:
    QPixmap currentPixmap;
    QPixmap previousPixmap;
    QPixmap olderPixmap;

public:
    std::pair<int, std::vector<std::vector<cv::Point>>> countRegionsInGrayImage(const cv::Mat &inputImage);

};

#endif // MAINWINDOW_H
