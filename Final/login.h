#ifndef LOGIN_H
#define LOGIN_H
#include <opencv2/opencv.hpp>                            //Include OpenCv Library
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/core.hpp>
#include <QDialog>

namespace Ui {
class LogIn;
}

class LogIn : public QDialog
{
    Q_OBJECT

public:
    explicit LogIn(QWidget *parent = 0);
    cv::Mat imageInput;                                         // intialize a global input mat to access from any where in the class
    cv::Mat histogram;                                          // intialize a global Histogram mat to access from any where in the class
    ~LogIn();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_Hist_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_CD_clicked();

private:
    Ui::LogIn *ui;
};

#endif // LOGIN_H
