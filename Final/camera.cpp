#include "camera.h"
#include "ui_camera.h"
#include <opencv2/core/core.hpp>                            //Include OpenCv Libraries
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/video/video.hpp>
#include <iostream>                                         //include iostream library
#include <QDialog>
#include<QtCore>
#include <QFileDialog>
#include <QMessageBox>
#include "login.h"

Camera::Camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Camera)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:olive ;");                             // Set the colors
    ui->label->setStyleSheet("background-color: olive;");
    ui->label_3->setStyleSheet("background-color: olive;");
    ui->label_4->setStyleSheet("background-color: olive;");
    ui->label_5->setStyleSheet("background-color: olive;");
    ui->label_6->setStyleSheet("background-color: olive;");
    ui->label_8->setStyleSheet("background-color: olive;");
    ui->pushButton_2->setStyleSheet("background-color: silver  ;");
    ui->pushButton->setStyleSheet("background-color: silver  ;");
    ui->pushBtn->setStyleSheet("background-color: silver  ;");
    ui->pushBtn_2->setStyleSheet("background-color: silver  ;");


    capwebcam.open(0);                                                          //open the Camera

    // If webcam not Connected
    ui->horizontalScrollBar_6->setMaximum(255);
    ui->horizontalScrollBar_6->setMinimum(0);
    ui->horizontalScrollBar->setMaximum(255);
    ui->horizontalScrollBar->setMinimum(0);
    ui->horizontalScrollBar_2->setMaximum(255);
    ui->horizontalScrollBar_2->setMinimum(0);
    ui->horizontalScrollBar_3->setMaximum(255);
    ui->horizontalScrollBar_3->setMinimum(0);
    ui->horizontalScrollBar_4->setMaximum(255);
    ui->horizontalScrollBar_4->setMinimum(0);
    ui->horizontalScrollBar_5->setMaximum(255);
    ui->horizontalScrollBar_5->setMinimum(0);
    ui->horizontalScrollBar->setValue(255);
    ui->horizontalScrollBar_2->setValue(90);
    ui->horizontalScrollBar_3->setValue(90);
    ui->horizontalScrollBar_4->setValue(90);
    ui->horizontalScrollBar_5->setValue(0);
    ui->horizontalScrollBar_6->setValue(0);

    //creat a timmer to open the camera frame by frame
    tmrTimer = new QTimer(this);
    connect(tmrTimer,SIGNAL(timeout()),this , SLOT(processFrameAndupdateGUI()));
    tmrTimer->start(20);

}

Camera::~Camera()
{
    delete ui;
}

void Camera::processFrameAndupdateGUI()          // process on the frames
{
    capwebcam.read(label_1);                   //read the frame

    if(label_1.empty() == true)  return;          //if the frame is empty return

    cv::inRange(label_1, cv::Scalar(sl6,sl5,sl4), cv::Scalar(sl3,sl2,sl1), label_2);

    cv::cvtColor(label_1, label_1, CV_BGR2RGB);          //change the colors to RGB
    cv::cvtColor(label_2,label_2, CV_GRAY2RGB);          //change the colors to RGB

    label_3 = label_2/255;
    label_3 = label_1.mul(label_3);


// convert the image from mat to Qimage
QImage qImg1((uchar*) label_1.data , label_1.cols , label_1.rows , label_1.step , QImage::Format_RGB888);
QImage qImg2((uchar*) label_2.data , label_2.cols , label_2.rows , label_2.step , QImage::Format_RGB888);
QImage qImg3((uchar*) label_3.data , label_3.cols , label_3.rows , label_3.step , QImage::Format_RGB888);

ui->label_1->setPixmap(QPixmap::fromImage(qImg1));   // show the first image on label 1
ui->label_1->setScaledContents(true);

ui->label_2->setPixmap(QPixmap::fromImage(qImg2)); // show the second image on label 2
ui->label_2->setScaledContents(true);


ui->label_7->setPixmap(QPixmap::fromImage(qImg3)); // show the third image on label 3
ui->label_7->setScaledContents(true);

}

void Camera::on_pushBtn_clicked()   //Pause button
{
    if(tmrTimer->isActive()==true)               // when you press if the camera is on make it off
    {
        tmrTimer->stop();
        ui->pushBtn->setText("Resume");
    }

    else                                          // when you press if the camera is off make it on
    {
        tmrTimer->start(20);
        ui->pushBtn->setText("Pause");
    }
}



void Camera::on_horizontalScrollBar_actionTriggered(int value)
{
    sl1 = value;                 // to change the s11 value from the the scroll bar
}

void Camera::on_horizontalScrollBar_4_actionTriggered(int value)
{
    sl2 = value;                // to change the s12 value from the the scroll bar
}

void Camera::on_horizontalScrollBar_2_actionTriggered(int value)
{
    sl3 = value;                // to change the s13 value from the the scroll bar
}

void Camera::on_horizontalScrollBar_5_actionTriggered(int value)
{
    sl4 = value;                // to change the s14 value from the the scroll bar
}

void Camera::on_horizontalScrollBar_3_actionTriggered(int value)
{
    sl5 = value;                  // to change the s15 value from the the scroll bar
}

void Camera::on_horizontalScrollBar_6_actionTriggered(int value)
{
    sl6 = value;                  // to change the s16 value from the the scroll bar
}

void Camera::on_pushBtn_2_clicked()           // save the segmented image
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    "Save File",
                                                     QDir::homePath().append("/untitled.png"),
                                                    "Image Files (*.png *.jpg *.jpeg *.bmp)");


    if(!fileName.isEmpty()){
        cv::cvtColor(this->label_3, label_4, cv::COLOR_BGR2RGB);
        cv::imwrite(fileName.toStdString(), label_4);}
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Can't save image.");
        msgBox.exec();
        return;
    }
}

void Camera::on_pushButton_2_clicked()          // Back to the Main Window
{
    this->hide();                                                     //Hide the Camera Window
    LogIn login;                                                     //Open the Main Window
    login.setModal(true);
    login.exec();
}

void Camera::on_pushButton_clicked()             // save the original image
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    "Save File",
                                                     QDir::homePath().append("/untitled.png"),
                                                    "Image Files (*.png *.jpg *.jpeg *.bmp)");


    if(!fileName.isEmpty()){
        cv::cvtColor(this->label_1, label_5, cv::COLOR_BGR2RGB);
        cv::imwrite(fileName.toStdString(), label_5);}
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Can't save image.");
        msgBox.exec();
        return;
    }
}
