/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QLabel *label_7;
    QLabel *label_5;
    QPushButton *pushBtn_2;
    QLabel *label_3;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_6;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QScrollBar *horizontalScrollBar;
    QScrollBar *horizontalScrollBar_2;
    QScrollBar *horizontalScrollBar_3;
    QScrollBar *horizontalScrollBar_4;
    QScrollBar *horizontalScrollBar_5;
    QScrollBar *horizontalScrollBar_6;
    QLabel *label_4;
    QPushButton *pushBtn;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_8;

    void setupUi(QDialog *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QStringLiteral("Camera"));
        Camera->resize(1006, 673);
        label_7 = new QLabel(Camera);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(660, 60, 301, 291));
        label_7->setAutoFillBackground(true);
        label_7->setFrameShape(QFrame::Box);
        label_5 = new QLabel(Camera);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 480, 91, 41));
        pushBtn_2 = new QPushButton(Camera);
        pushBtn_2->setObjectName(QStringLiteral("pushBtn_2"));
        pushBtn_2->setGeometry(QRect(770, 370, 75, 23));
        QFont font;
        font.setFamily(QStringLiteral("MV Boli"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushBtn_2->setFont(font);
        label_3 = new QLabel(Camera);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(530, 450, 151, 16));
        label_1 = new QLabel(Camera);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(41, 61, 301, 291));
        label_1->setAutoFillBackground(true);
        label_1->setFrameShape(QFrame::Box);
        label_2 = new QLabel(Camera);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 60, 301, 291));
        label_2->setAutoFillBackground(true);
        label_2->setFrameShape(QFrame::Box);
        label = new QLabel(Camera);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 450, 151, 16));
        label_6 = new QLabel(Camera);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 510, 91, 41));
        layoutWidget = new QWidget(Camera);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 470, 711, 91));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalScrollBar = new QScrollBar(layoutWidget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar, 0, 0, 1, 1);

        horizontalScrollBar_2 = new QScrollBar(layoutWidget);
        horizontalScrollBar_2->setObjectName(QStringLiteral("horizontalScrollBar_2"));
        horizontalScrollBar_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar_2, 0, 1, 1, 1);

        horizontalScrollBar_3 = new QScrollBar(layoutWidget);
        horizontalScrollBar_3->setObjectName(QStringLiteral("horizontalScrollBar_3"));
        horizontalScrollBar_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar_3, 0, 2, 1, 1);

        horizontalScrollBar_4 = new QScrollBar(layoutWidget);
        horizontalScrollBar_4->setObjectName(QStringLiteral("horizontalScrollBar_4"));
        horizontalScrollBar_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar_4, 1, 0, 1, 1);

        horizontalScrollBar_5 = new QScrollBar(layoutWidget);
        horizontalScrollBar_5->setObjectName(QStringLiteral("horizontalScrollBar_5"));
        horizontalScrollBar_5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar_5, 1, 1, 1, 1);

        horizontalScrollBar_6 = new QScrollBar(layoutWidget);
        horizontalScrollBar_6->setObjectName(QStringLiteral("horizontalScrollBar_6"));
        horizontalScrollBar_6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar_6, 1, 2, 1, 1);

        label_4 = new QLabel(Camera);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(770, 450, 151, 16));
        pushBtn = new QPushButton(Camera);
        pushBtn->setObjectName(QStringLiteral("pushBtn"));
        pushBtn->setGeometry(QRect(20, 500, 75, 23));
        pushBtn->setFont(font);
        pushButton = new QPushButton(Camera);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 370, 75, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("MV Boli"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(Camera);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 600, 91, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setItalic(true);
        pushButton_2->setFont(font2);
        label_8 = new QLabel(Camera);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(450, 10, 331, 16));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_8->setFont(font3);

        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QDialog *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "Dialog", 0));
        label_7->setText(QString());
        label_5->setText(QApplication::translate("Camera", "HIGH THRESHOLD", 0));
        pushBtn_2->setText(QApplication::translate("Camera", "Capture", 0));
        label_3->setText(QApplication::translate("Camera", "GREEN CHANNEL", 0));
        label_1->setText(QString());
        label_2->setText(QString());
        label->setText(QApplication::translate("Camera", "RED CHANNEL", 0));
        label_6->setText(QApplication::translate("Camera", "LOW THRESHOLD", 0));
#ifndef QT_NO_TOOLTIP
        horizontalScrollBar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("Camera", "BLUE CHANNEL", 0));
        pushBtn->setText(QApplication::translate("Camera", "Pause", 0));
        pushButton->setText(QApplication::translate("Camera", "Capture", 0));
        pushButton_2->setText(QApplication::translate("Camera", "Back", 0));
        label_8->setText(QApplication::translate("Camera", "Camera", 0));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
