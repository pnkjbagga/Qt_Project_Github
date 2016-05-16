#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"   // include the main project window
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:olive ;");                    // Set the colors
        ui->groupBox->setStyleSheet("background-color: teal  ;");
        ui->label_2->setStyleSheet("background-color: olive;");
        ui->Pass->setStyleSheet("background-color: gray  ;");
        ui->pushButton->setStyleSheet("background-color: gray  ;");
        ui->pushButton_3->setStyleSheet("background-color: gray  ;");
        ui->Close->setStyleSheet("background-color: gray  ;");

        QPixmap picb("RGB_illumination.jpg");                             //set Project Image
        ui->CD->setPixmap(picb);                                   //show it in CD label
        ui->CD->setScaledContents(true);                           //scale it to fit in the CD lablel
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Close_clicked()
{
    close();
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this,tr("Introduction"),tr("Welcome to COLOR BASED IMAGE RETRIEVAL AND TRACKING                             \n"
                                                        "                                                                            \n"
                                                        "Objective: To use QT to track and retrieve images based on color \n"
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

void MainWindow::on_pushButton_clicked()
{
    QString Password;                                                     //Initialize the Password
    Password=ui->Pass->text();

    if(Password=="bagga")
    {
        ui->label2->setText("Password is Correct");                       //If the Password is correct go to the Main Window
        this->hide();                                                     //Hide the Introduction Window
        LogIn login;                                                     //Open the Main Window
        login.setModal(true);
        login.exec();}
    else
        ui->label2->setText("Password is Incorrect");                     //If the Password is Incorrect write Incorrect Password
}
