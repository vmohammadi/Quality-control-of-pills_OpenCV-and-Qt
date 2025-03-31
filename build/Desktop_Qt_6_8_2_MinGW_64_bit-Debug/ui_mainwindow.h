/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame_2;
    QFrame *frame;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *clearData;
    QPushButton *pushButton_3;
    QFrame *frame_6;
    QPushButton *startButton_8;
    QLabel *counter_image;
    QLabel *counterTotal;
    QPushButton *startButton_10;
    QLabel *counter_color;
    QPushButton *startButton_11;
    QLabel *counter_crack;
    QPushButton *startButton_12;
    QLabel *counter_spoil;
    QPushButton *startButton_13;
    QLabel *label_9;
    QLabel *startTime;
    QLabel *startDate;
    QPushButton *startButton_14;
    QPushButton *startButton_15;
    QLabel *logoLabel;
    QFrame *frame_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLabel *label_10;
    QPushButton *pushButton_7;
    QFrame *frame_3;
    QLabel *imageLabel3;
    QLabel *imageLabel2;
    QPushButton *resultButton;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *historyLabel;
    QFrame *frame_5;
    QLabel *imageLabel;
    QLabel *label;
    QLabel *sizeLabel;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_16;
    QLabel *label_19;
    QPushButton *startButton_16;
    QLabel *label_20;
    QPushButton *startButton_17;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *startButton_18;
    QPushButton *startButton_19;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *startButton_20;
    QLabel *label_25;
    QPushButton *startButton_21;
    QPushButton *startButton_22;
    QLabel *label_26;
    QPushButton *startButton_23;
    QLabel *label_27;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1030);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(1410, 10, 511, 971));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {  \n"
"    border: 1px solid rgb(0, 0, 0);  /* Border color and width */  \n"
"    \n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame = new QFrame(frame_2);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 481, 201));
        frame->setStyleSheet(QString::fromUtf8("QFrame {  \n"
"    border: 1px solid rgb(0, 0, 0); /* Dark gray border */  \n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        startButton = new QPushButton(frame);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(10, 10, 231, 41));
        startButton->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(110, 150, 0); /* Green background */  \n"
"    color: white;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        stopButton = new QPushButton(frame);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(250, 10, 221, 41));
        stopButton->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(190, 0, 30); /* Red background */  \n"
"    color: white;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 70, 301, 51));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 70, 151, 51));
        QFont font;
        font.setPointSize(11);
        pushButton->setFont(font);
        clearData = new QPushButton(frame);
        clearData->setObjectName("clearData");
        clearData->setGeometry(QRect(10, 130, 231, 51));
        clearData->setFont(font);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 130, 221, 51));
        pushButton_3->setFont(font);
        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(10, 420, 481, 541));
        frame_6->setStyleSheet(QString::fromUtf8("QFrame {  \n"
"    border: 1px solid rgb(0, 0, 0); /* Dark gray border */  \n"
"}"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        startButton_8 = new QPushButton(frame_6);
        startButton_8->setObjectName("startButton_8");
        startButton_8->setGeometry(QRect(10, 40, 231, 41));
        startButton_8->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        counter_image = new QLabel(frame_6);
        counter_image->setObjectName("counter_image");
        counter_image->setGeometry(QRect(250, 40, 221, 41));
        counter_image->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        counterTotal = new QLabel(frame_6);
        counterTotal->setObjectName("counterTotal");
        counterTotal->setGeometry(QRect(250, 90, 221, 41));
        counterTotal->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_10 = new QPushButton(frame_6);
        startButton_10->setObjectName("startButton_10");
        startButton_10->setGeometry(QRect(10, 90, 231, 41));
        startButton_10->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        counter_color = new QLabel(frame_6);
        counter_color->setObjectName("counter_color");
        counter_color->setGeometry(QRect(250, 140, 221, 41));
        counter_color->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_11 = new QPushButton(frame_6);
        startButton_11->setObjectName("startButton_11");
        startButton_11->setGeometry(QRect(10, 140, 231, 41));
        startButton_11->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        counter_crack = new QLabel(frame_6);
        counter_crack->setObjectName("counter_crack");
        counter_crack->setGeometry(QRect(250, 190, 221, 41));
        counter_crack->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_12 = new QPushButton(frame_6);
        startButton_12->setObjectName("startButton_12");
        startButton_12->setGeometry(QRect(10, 190, 231, 41));
        startButton_12->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        counter_spoil = new QLabel(frame_6);
        counter_spoil->setObjectName("counter_spoil");
        counter_spoil->setGeometry(QRect(250, 240, 221, 41));
        counter_spoil->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_13 = new QPushButton(frame_6);
        startButton_13->setObjectName("startButton_13");
        startButton_13->setGeometry(QRect(10, 240, 231, 41));
        startButton_13->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: white;              /* White text */  \n"
"   color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_9 = new QLabel(frame_6);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 0, 111, 41));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        startTime = new QLabel(frame_6);
        startTime->setObjectName("startTime");
        startTime->setGeometry(QRect(250, 290, 221, 41));
        startTime->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startDate = new QLabel(frame_6);
        startDate->setObjectName("startDate");
        startDate->setGeometry(QRect(250, 340, 221, 41));
        startDate->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_14 = new QPushButton(frame_6);
        startButton_14->setObjectName("startButton_14");
        startButton_14->setGeometry(QRect(10, 290, 231, 41));
        startButton_14->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        startButton_15 = new QPushButton(frame_6);
        startButton_15->setObjectName("startButton_15");
        startButton_15->setGeometry(QRect(10, 340, 231, 41));
        startButton_15->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        logoLabel = new QLabel(frame_6);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setGeometry(QRect(140, 390, 211, 141));
        logoLabel->setStyleSheet(QString::fromUtf8("QLabel {    \n"
"    border: none;              /* No border */   \n"
"}"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(10, 210, 481, 211));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_6 = new QPushButton(frame_4);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(250, 120, 221, 51));
        pushButton_6->setFont(font);
        pushButton_5 = new QPushButton(frame_4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(250, 60, 221, 51));
        pushButton_5->setFont(font);
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 60, 231, 51));
        pushButton_4->setFont(font);
        label_10 = new QLabel(frame_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 0, 221, 41));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        pushButton_7 = new QPushButton(frame_4);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 120, 231, 51));
        pushButton_7->setFont(font);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 10, 401, 971));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame {  \n"
"    border: 1px solid rgb(0, 0, 0);  /* Border color and width */  \n"
"    \n"
"}"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        imageLabel3 = new QLabel(frame_3);
        imageLabel3->setObjectName("imageLabel3");
        imageLabel3->setGeometry(QRect(20, 430, 361, 261));
        imageLabel3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 1px solid rgb(0, 0, 0);\n"
"\n"
"}"));
        imageLabel2 = new QLabel(frame_3);
        imageLabel2->setObjectName("imageLabel2");
        imageLabel2->setGeometry(QRect(20, 170, 361, 251));
        imageLabel2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 1px solid rgb(0, 0, 0); /*background-color: rgb(30, 30, 30); */\n"
"\n"
"}"));
        resultButton = new QPushButton(frame_3);
        resultButton->setObjectName("resultButton");
        resultButton->setGeometry(QRect(20, 60, 361, 101));
        resultButton->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(110, 150, 0); /* Green background */  \n"
"    color: white;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 361, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    border:1px solid rgb(0,0,0);\n"
"    \n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox = new QGroupBox(frame_3);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 700, 361, 261));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"                               border: 1px solid rgb(0, 0, 0);\n"
"                               padding: 10px;\n"
"                               }\n"
"\n"
"QGroupBox::title { \n"
"                               color: black;\n"
"                               font-size: 14px;\n"
"                               subcontrol-origin: margin;\n"
"                               left: 10px;\n"
"}\n"
""));
        historyLabel = new QLabel(groupBox);
        historyLabel->setObjectName("historyLabel");
        historyLabel->setGeometry(QRect(0, 30, 361, 231));
        historyLabel->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    border:1px solid rgb(0,0,0);\n"
"    \n"
"}"));
        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(400, 10, 1011, 971));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame {  \n"
"    border: 1px solid rgb(0, 0, 0);  /* Border color and width */  \n"
"    /*background-color: rgb(220, 220, 220);      Fill color */  \n"
"}"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        imageLabel = new QLabel(frame_5);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(10, 10, 991, 681));
        imageLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid rgb(68, 68, 68);\n"
"}"));
        label = new QLabel(frame_5);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 690, 171, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    border:1px solid rgb(0,0,0);\n"
"}"));
        sizeLabel = new QLabel(frame_5);
        sizeLabel->setObjectName("sizeLabel");
        sizeLabel->setGeometry(QRect(190, 690, 811, 41));
        sizeLabel->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    border:1px solid rgb(0,0,0);\n"
"}"));
        label_12 = new QLabel(frame_5);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(190, 740, 191, 191));
        QFont font1;
        font1.setKerning(false);
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    background-color: rgb(144, 238, 144); /* Green background */  \n"
"    color:  rgb(0, 0, 0);              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 136px;           /* Text size */  \n"
"}(144, 238, 144)"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_13 = new QLabel(frame_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 740, 111, 41));
        label_13->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_14 = new QLabel(frame_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 780, 111, 41));
        label_14->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 12px;           /* Text size */  \n"
"}"));
        label_15 = new QLabel(frame_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 810, 111, 41));
        label_15->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 12px;           /* Text size */  \n"
"}"));
        label_17 = new QLabel(frame_5);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(80, 790, 21, 21));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    background-color: rgb(144, 238, 144); /* Green background */  \n"
"    color:  rgb(0, 0, 0);              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 136px;           /* Text size */  \n"
"}(144, 238, 144)"));
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_18 = new QLabel(frame_5);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(80, 820, 21, 21));
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    background-color: rgb(194, 0, 0); /* Green background */  \n"
"    color:  rgb(0, 0, 0);              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 136px;           /* Text size */  \n"
"}(144, 238, 144)"));
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_16 = new QLabel(frame_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 930, 111, 31));
        label_16->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 12px;           /* Text size */  \n"
"}"));
        label_19 = new QLabel(frame_5);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(80, 930, 281, 31));
        label_19->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black;              /* White text */  \n"
"    border: none;              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 12px;           /* Text size */  \n"
"}"));
        startButton_16 = new QPushButton(frame_5);
        startButton_16->setObjectName("startButton_16");
        startButton_16->setGeometry(QRect(400, 740, 141, 41));
        startButton_16->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_20 = new QLabel(frame_5);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(550, 740, 131, 41));
        label_20->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_17 = new QPushButton(frame_5);
        startButton_17->setObjectName("startButton_17");
        startButton_17->setGeometry(QRect(400, 790, 141, 41));
        startButton_17->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_21 = new QLabel(frame_5);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(550, 790, 131, 41));
        label_21->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        label_22 = new QLabel(frame_5);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(550, 840, 131, 41));
        label_22->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_18 = new QPushButton(frame_5);
        startButton_18->setObjectName("startButton_18");
        startButton_18->setGeometry(QRect(400, 840, 141, 41));
        startButton_18->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        startButton_19 = new QPushButton(frame_5);
        startButton_19->setObjectName("startButton_19");
        startButton_19->setGeometry(QRect(400, 890, 141, 41));
        startButton_19->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_23 = new QLabel(frame_5);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(550, 890, 131, 41));
        label_23->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        label_24 = new QLabel(frame_5);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(860, 790, 131, 41));
        label_24->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_20 = new QPushButton(frame_5);
        startButton_20->setObjectName("startButton_20");
        startButton_20->setGeometry(QRect(710, 740, 141, 41));
        startButton_20->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_25 = new QLabel(frame_5);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(860, 890, 131, 41));
        label_25->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_21 = new QPushButton(frame_5);
        startButton_21->setObjectName("startButton_21");
        startButton_21->setGeometry(QRect(710, 840, 141, 41));
        startButton_21->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        startButton_22 = new QPushButton(frame_5);
        startButton_22->setObjectName("startButton_22");
        startButton_22->setGeometry(QRect(710, 890, 141, 41));
        startButton_22->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_26 = new QLabel(frame_5);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(860, 840, 131, 41));
        label_26->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        startButton_23 = new QPushButton(frame_5);
        startButton_23->setObjectName("startButton_23");
        startButton_23->setGeometry(QRect(710, 790, 141, 41));
        startButton_23->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgb(255, 255, 255); /* Green background */  \n"
"    color: black;              /* White text */  \n"
"    border: 1px solid rgb(0, 0, 0);              /* No border */  \n"
"    padding: 10px;             /* Padding around the text */  \n"
"    font-size: 16px;           /* Text size */  \n"
"}"));
        label_27 = new QLabel(frame_5);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(860, 740, 131, 41));
        label_27->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: black; /* White text color */  \n"
"    font-size: 14px;\n"
"    background-color: rgb(255, 255, 255); \n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "PN XX-XXXX-XXXX-XX", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Set/Change OF", nullptr));
        clearData->setText(QCoreApplication::translate("MainWindow", "Clear Data", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Record Image", nullptr));
        startButton_8->setText(QCoreApplication::translate("MainWindow", "N\302\260 images controlled", nullptr));
        counter_image->setText(QString());
        counterTotal->setText(QString());
        startButton_10->setText(QCoreApplication::translate("MainWindow", "N\302\260 ejection", nullptr));
        counter_color->setText(QString());
        startButton_11->setText(QCoreApplication::translate("MainWindow", "N\302\260 color defects", nullptr));
        counter_crack->setText(QString());
        startButton_12->setText(QCoreApplication::translate("MainWindow", "N\302\260 crack defects", nullptr));
        counter_spoil->setText(QString());
        startButton_13->setText(QCoreApplication::translate("MainWindow", "N\302\260 spoil defects", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Control", nullptr));
        startTime->setText(QString());
        startDate->setText(QString());
        startButton_14->setText(QCoreApplication::translate("MainWindow", "Control start time", nullptr));
        startButton_15->setText(QCoreApplication::translate("MainWindow", "Control start date", nullptr));
        logoLabel->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Deactivate Spoil Defect", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Deactivate Crack Defect", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Deactivate Control", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Activate/Deactivate control", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Deactivate Color Defect", nullptr));
        imageLabel3->setText(QString());
        imageLabel2->setText(QString());
        resultButton->setText(QCoreApplication::translate("MainWindow", "Conforme", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Result ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Control History", nullptr));
        historyLabel->setText(QString());
        imageLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Image infos :", nullptr));
        sizeLabel->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "!", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "System state", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Danger", nullptr));
        label_17->setText(QString());
        label_18->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "Message : ", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "System functions correctly.", nullptr));
        startButton_16->setText(QCoreApplication::translate("MainWindow", "Product", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Pill", nullptr));
        startButton_17->setText(QCoreApplication::translate("MainWindow", "Form", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Oval", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "White/Red", nullptr));
        startButton_18->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        startButton_19->setText(QCoreApplication::translate("MainWindow", "Dimensions", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "8 * 4.5 mm", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "3A56", nullptr));
        startButton_20->setText(QCoreApplication::translate("MainWindow", "Dose", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "1000/hour", nullptr));
        startButton_21->setText(QCoreApplication::translate("MainWindow", "Order", nullptr));
        startButton_22->setText(QCoreApplication::translate("MainWindow", "Cadence", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "0012A67Q", nullptr));
        startButton_23->setText(QCoreApplication::translate("MainWindow", "Package", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "247mg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
