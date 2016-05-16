#include "login.h"
#include "ui_login.h"
#include <QFileDialog>               //include qfile to select images
#include <QMessageBox>
#include "QInputDialog"
#include <opencv2/opencv.hpp>                            //Include OpenCv Libraries
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/core.hpp>
#include "asmopencv.h"                         //Include asmopencv header to use it to convert images from mat to Pixmap
#include <QPixmap>
#include "camera.h"

using namespace cv;                      //Include cv namespace as global use to remove the redundancy
using namespace std;                     //Include std namespace as global use to remove the redundancy

LogIn::LogIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:olive ;");                                // Set the colors
        ui->label->setStyleSheet("background-color: olive;");
        ui->label_2->setStyleSheet("background-color: olive;");
        ui->label_3->setStyleSheet("background-color: olive;");
        ui->pushButton_2->setStyleSheet("background-color: silver  ;");
        ui->pushButton->setStyleSheet("background-color: silver  ;");
        ui->pushButton_3->setStyleSheet("background-color: silver  ;");
        ui->pushButton_5->setStyleSheet("background-color: silver  ;");
        ui->Hist->setStyleSheet("background-color: silver  ;");
        ui->CD->setStyleSheet("background-color: silver  ;");
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_pushButton_5_clicked()
{
    close();
}

void LogIn::on_pushButton_clicked()                       //open button
{
    QString filename=QFileDialog::getOpenFileName(                                                        //Open Window to select an Image
                this,
                tr("Open File"),
                "Home://",
                "All files(*.*)"
                );
    QPixmap pic1(filename);                                                                           // read the image
    ui->Image->setPixmap(pic1);                                                                       // show the image in Image label
    ui->Image->setScaledContents(true);                                                               //scale it to fit in the image lablel

    imageInput = imread(filename.toStdString());                                               //Read the Input Image and assign it to global mat

        if(filename == 0)
        {
            QMessageBox msgBox;
            msgBox.setText("You didn't select image.");
            msgBox.exec();
        }
}

Mat Hist(Mat I){                          //histogram function

    Mat src;

    // Load image
    src = I;

    // Separate the image in 3 places ( B, G and R )
    vector<Mat> bgr_planes;
    split( src, bgr_planes );

    // Establish the number of bins
    int histSize = 256;

    // Set the ranges ( for B,G,R) )
    float range[] = { 0, 256 } ;
    const float* histRange = { range };

    bool uniform = true; bool accumulate = false;

    Mat b_hist, g_hist, r_hist;

    // Compute the histograms:
    calcHist( &bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, &histRange, uniform, accumulate );
    calcHist( &bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, &histRange, uniform, accumulate );
    calcHist( &bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, &histRange, uniform, accumulate );

    // Draw the histograms for B, G and R
    int hist_w = 512; int hist_h = 400;
    int bin_w = cvRound( (double) hist_w/histSize );

    Mat histImage( hist_h, hist_w, CV_8UC3, Scalar( 0,0,0) );      //convert the color scale

    // Normalize the result to [ 0, histImage.rows ]
    normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat() );
    normalize(g_hist, g_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat() );
    normalize(r_hist, r_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat() );

    // Draw for each channel
    for( int i = 1; i < histSize; i++ )
    {
        line( histImage, Point( bin_w*(i-1), hist_h - cvRound(b_hist.at<float>(i-1)) ) ,
                         Point( bin_w*(i), hist_h - cvRound(b_hist.at<float>(i)) ),
                         Scalar( 255, 0, 0), 2, 8, 0  );
        line( histImage, Point( bin_w*(i-1), hist_h - cvRound(g_hist.at<float>(i-1)) ) ,
                         Point( bin_w*(i), hist_h - cvRound(g_hist.at<float>(i)) ),
                         Scalar( 0, 255, 0), 2, 8, 0  );
        line( histImage, Point( bin_w*(i-1), hist_h - cvRound(r_hist.at<float>(i-1)) ) ,
                         Point( bin_w*(i), hist_h - cvRound(r_hist.at<float>(i)) ),
                         Scalar( 0, 0, 255), 2, 8, 0  );
    }

    src=histImage;
    return src;                  //return the histogram image

}

void LogIn::on_Hist_clicked() //histogram button
{
    Mat A=imageInput;                      // read the global image
    histogram=Hist(A);                     // sen the global image to histogram function and the return mat is the histogram mat

    QPixmap pic1=ASM::cvMatToQPixmap(histogram);                       //call ASM function to convert the image from mat to pixmap to show it in Histogram label
    ui->Out->setPixmap(pic1);                                          //show the image in Histogram label
     ui->Out->setScaledContents(true);                                 //scale it to fit in the Histogram lablel



}

void LogIn::on_pushButton_2_clicked()         //matching button
{
    int a =0;                                //intilize a counter to count the number of matched images
    bool ok;
    double threshold = QInputDialog::getInt(0, QObject::tr("Threshold "),
                                         QObject::tr("Please enter the Threshold value from 0 to 100"), 1,
                                         1, 10000, 1, &ok);
    double threshold1=threshold/100;
    for(int i=1;i<16;i++){

        Mat src_base, hsv_base;
        Mat src_test1, hsv_test1;
        Mat hsv_half_down;

    src_base = imageInput;            //call the global input image
    char filename[50];
    sprintf( filename, "Data Base/%d.jpg", i );    //read the name of the image inside the database folder
    src_test1 = imread(filename);

    cvtColor( src_base, hsv_base, COLOR_BGR2HSV );          //change the color space to get high accurate results
    cvtColor( src_test1, hsv_test1, COLOR_BGR2HSV );

    int h_bins = 50; int s_bins = 60;
    int histSize[] = { h_bins, s_bins };

    // hue varies from 0 to 179, saturation from 0 to 255
    float h_ranges[] = { 0, 180 };
    float s_ranges[] = { 0, 256 };

    const float* ranges[] = { h_ranges, s_ranges };

    // Use the 0-th and 1-st channels
    int channels[] = { 0, 1 };

    MatND hist_base;
    MatND hist_test1;

    // calculate the histogram of the input image
    calcHist( &hsv_base, 1, channels, Mat(), hist_base, 2, histSize, ranges, true, false );
    normalize( hist_base, hist_base, 0, 1, NORM_MINMAX, -1, Mat() );

     // calculate the histogram of the test image
    calcHist( &hsv_test1, 1, channels, Mat(), hist_test1, 2, histSize, ranges, true, false );
    normalize( hist_test1, hist_test1, 0, 1, NORM_MINMAX, -1, Mat() );

    // compare the histogram of the input image and the test image and reture the percent of matching
        double base_base = compareHist( hist_base, hist_test1, 0 );

         printf( " Percent of matching, %f \n", 100*base_base );

     if (base_base >=threshold1){                   // if the percent of matching bigger than our input threshold
         imshow("matched image",src_test1);         // show the matched image
         cvWaitKey(3000);                           // pause for 2 sec
         a=a+1;

     }
    }

        QMessageBox msgBox;                        //msg to show how many matched images
        char filename[50];
        sprintf( filename, "The number of matched images :%d", a );
        msgBox.setText(filename);
        msgBox.exec();
}

void LogIn::on_pushButton_3_clicked()       //Help button
{
    QMessageBox::information(this,tr("Introduction"),tr("Welcome to Main window                            \n"
                                                        "                                                                            \n"
                                                        "Open: To Select the input image \n"
                                                        "                                                                            \n"
                                                        "The Aim : Using C++ Principle with OpenCV Library to Implement Color       \n"
                                                        "based images retrieval and tracking.  \n"
                                                        "                                                                            \n"
                                                        "                     The Code Created by:            \n"
                                                        "                      Pankaj Bagga                                                             \n"
                                                 "                                                                                         \n"
                                                 "                                                                                         \n"
                                                 " Email:pnkjbagga@gmail.com                                                                                \n"
                                                 "           \n"));
}



void LogIn::on_CD_clicked()                   //Camera button
{
    this->hide();                                                     //Hide the Main Window
    Camera login;                                                     //Open the Camera Window
    login.setModal(true);
    login.exec();
}
