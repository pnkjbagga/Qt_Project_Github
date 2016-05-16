#ifndef CAMERA_H
#define CAMERA_H
#include<opencv2/core/core.hpp>                              //Include OpenCv Libraries
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include <QDialog>

namespace Ui {
class Camera;
}

class Camera : public QDialog
{
    Q_OBJECT

public:
    explicit Camera(QWidget *parent = 0);
    ~Camera();

private:
    Ui::Camera *ui;
    cv::VideoCapture capwebcam;           // initlize the webcam
    cv::Mat label_4;
    cv::Mat label_5;
    int  sl1 = 255;                  //range of channels for the first label channel-0 as defult
    int sl2 = 90;                    //range of channels for the first label channel-1 as defult
    int sl3 = 90;                    //range of channels for the first label channel-2 as defult
    int sl4 = 90;                    //range of channels for the second label channel-0 as defult
    int sl5 = 0;                     //range of channels for the second label channel-1 as defult
    int sl6 = 0;                     //range of channels for the second label channel-2 as defult
    cv::Mat label_1;                 // glabal input image
    cv::Mat label_2;                 // glabal second image
    cv::Mat label_3;                 // glabal third image

    QImage qImg1;                     // qimage for input image
    QImage qImg2;                     // qimage for second image
    QImage qImg3;                     // qimage for second image

   QTimer* tmrTimer;                 // initialize a timmer

   public slots:
   void processFrameAndupdateGUI();                                      // the process function

private slots:
   void on_pushBtn_clicked();
   void on_horizontalScrollBar_actionTriggered(int value);                 // initialize the value of the slider
   void on_horizontalScrollBar_4_actionTriggered(int value);               // initialize the value of the slider
   void on_horizontalScrollBar_2_actionTriggered(int value);               // initialize the value of the slider
   void on_horizontalScrollBar_5_actionTriggered(int value);               // initialize the value of the slider
   void on_horizontalScrollBar_3_actionTriggered(int value);               // initialize the value of the slider
   void on_horizontalScrollBar_6_actionTriggered(int value);               // initialize the value of the slider
   void on_pushBtn_2_clicked();
   void on_pushButton_2_clicked();
   void on_pushButton_clicked();
};

#endif // CAMERA_H
