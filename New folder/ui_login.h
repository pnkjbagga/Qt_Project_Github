/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QPushButton *Hist;
    QLabel *Out;
    QLabel *Image;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *CD;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName(QStringLiteral("LogIn"));
        LogIn->resize(1077, 448);
        Hist = new QPushButton(LogIn);
        Hist->setObjectName(QStringLiteral("Hist"));
        Hist->setGeometry(QRect(20, 150, 121, 61));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        Hist->setFont(font);
        Out = new QLabel(LogIn);
        Out->setObjectName(QStringLiteral("Out"));
        Out->setGeometry(QRect(620, 80, 441, 271));
        Out->setFrameShape(QFrame::Box);
        Image = new QLabel(LogIn);
        Image->setObjectName(QStringLiteral("Image"));
        Image->setGeometry(QRect(170, 80, 441, 271));
        Image->setFrameShape(QFrame::Box);
        pushButton_5 = new QPushButton(LogIn);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(940, 370, 121, 61));
        QFont font1;
        font1.setPointSize(14);
        font1.setItalic(true);
        pushButton_5->setFont(font1);
        pushButton_2 = new QPushButton(LogIn);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 220, 121, 61));
        pushButton_2->setFont(font);
        CD = new QPushButton(LogIn);
        CD->setObjectName(QStringLiteral("CD"));
        CD->setGeometry(QRect(20, 290, 121, 61));
        CD->setFont(font);
        pushButton = new QPushButton(LogIn);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 80, 121, 61));
        pushButton->setFont(font);
        pushButton_3 = new QPushButton(LogIn);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(800, 370, 121, 61));
        pushButton_3->setFont(font1);
        label = new QLabel(LogIn);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 20, 321, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label->setFont(font2);
        label_2 = new QLabel(LogIn);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 60, 81, 16));
        label_3 = new QLabel(LogIn);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(620, 60, 61, 16));

        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QDialog *LogIn)
    {
        LogIn->setWindowTitle(QApplication::translate("LogIn", "Dialog", 0));
        Hist->setText(QApplication::translate("LogIn", "Histogram", 0));
        Out->setText(QString());
        Image->setText(QString());
        pushButton_5->setText(QApplication::translate("LogIn", "Exit", 0));
        pushButton_2->setText(QApplication::translate("LogIn", "Matching", 0));
        CD->setText(QApplication::translate("LogIn", "Camera", 0));
        pushButton->setText(QApplication::translate("LogIn", "Open", 0));
        pushButton_3->setText(QApplication::translate("LogIn", "Help", 0));
        label->setText(QApplication::translate("LogIn", "Bagga", 0));
        label_2->setText(QApplication::translate("LogIn", "Input Image", 0));
        label_3->setText(QApplication::translate("LogIn", "Histogram", 0));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
