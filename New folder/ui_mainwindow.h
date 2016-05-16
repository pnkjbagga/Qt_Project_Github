/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *CD;
    QLabel *label;
    QLineEdit *Pass;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *Close;
    QLabel *label2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(805, 468);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 10, 541, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 60, 711, 341));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        CD = new QLabel(groupBox);
        CD->setObjectName(QStringLiteral("CD"));
        CD->setGeometry(QRect(330, 30, 351, 271));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(43, 90, 91, 32));
        Pass = new QLineEdit(groupBox);
        Pass->setObjectName(QStringLiteral("Pass"));
        Pass->setGeometry(QRect(140, 90, 120, 32));
        Pass->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 140, 121, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setAutoDefault(false);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 240, 111, 41));
        pushButton_3->setFont(font2);
        Close = new QPushButton(groupBox);
        Close->setObjectName(QStringLiteral("Close"));
        Close->setGeometry(QRect(150, 240, 111, 41));
        Close->setFont(font2);
        label2 = new QLabel(groupBox);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(60, 180, 201, 31));
        QFont font3;
        font3.setPointSize(10);
        label2->setFont(font3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 805, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("MainWindow", "COLOR BASED IMAGE RETRIEVAL AND TRACKING", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "LogIn", 0));
        CD->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Password", 0));
        pushButton->setText(QApplication::translate("MainWindow", "LogIn", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "About", 0));
        Close->setText(QApplication::translate("MainWindow", "Exit", 0));
        label2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
