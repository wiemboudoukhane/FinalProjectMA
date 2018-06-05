/********************************************************************************
** Form generated from reading UI file 'Canny.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANNY_H
#define UI_CANNY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form4
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_3;
    QGraphicsView *graphicsView_2;

    void setupUi(QWidget *Form4)
    {
        if (Form4->objectName().isEmpty())
            Form4->setObjectName(QStringLiteral("Form4"));
        Form4->resize(1246, 859);
        pushButton_2 = new QPushButton(Form4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 60, 71, 31));
        pushButton_3 = new QPushButton(Form4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1010, 60, 81, 31));
        graphicsView = new QGraphicsView(Form4);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(40, 160, 561, 561));
        pushButton = new QPushButton(Form4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 60, 101, 31));
        horizontalSlider = new QSlider(Form4);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(350, 780, 501, 41));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(Form4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 70, 551, 21));
        label = new QLabel(Form4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 130, 64, 15));
        label_2 = new QLabel(Form4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(900, 130, 51, 16));
        line = new QFrame(Form4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(610, 130, 20, 601));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(Form4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(640, 160, 64, 15));
        graphicsView_2 = new QGraphicsView(Form4);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(640, 160, 561, 561));

        retranslateUi(Form4);
        QObject::connect(pushButton, SIGNAL(clicked()), Form4, SLOT(Select_Image()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form4, SLOT(Exit()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Form4, SLOT(Save()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), Form4, SLOT(Slider(int)));

        QMetaObject::connectSlotsByName(Form4);
    } // setupUi

    void retranslateUi(QWidget *Form4)
    {
        Form4->setWindowTitle(QApplication::translate("Form4", "Form", nullptr));
        pushButton_2->setText(QApplication::translate("Form4", "EXIT", nullptr));
        pushButton_3->setText(QApplication::translate("Form4", "SAVE", nullptr));
        pushButton->setText(QApplication::translate("Form4", "Select Image", nullptr));
        label->setText(QApplication::translate("Form4", "BEFORE", nullptr));
        label_2->setText(QApplication::translate("Form4", "AFTER", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form4: public Ui_Form4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANNY_H
