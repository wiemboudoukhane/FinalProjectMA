/********************************************************************************
** Form generated from reading UI file 'Resize.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIZE_H
#define UI_RESIZE_H

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

class Ui_Form2
{
public:
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QStringLiteral("Form2"));
        Form2->resize(1247, 861);
        horizontalSlider = new QSlider(Form2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(350, 770, 501, 41));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(Form2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 60, 551, 21));
        pushButton_3 = new QPushButton(Form2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1010, 50, 81, 31));
        pushButton_2 = new QPushButton(Form2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 50, 71, 31));
        pushButton = new QPushButton(Form2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 50, 101, 31));
        label = new QLabel(Form2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 120, 64, 15));
        label_2 = new QLabel(Form2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(890, 120, 51, 16));
        label_3 = new QLabel(Form2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(630, 160, 64, 15));
        line = new QFrame(Form2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(600, 130, 20, 601));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        graphicsView = new QGraphicsView(Form2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(40, 160, 541, 541));
        graphicsView_2 = new QGraphicsView(Form2);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(640, 160, 541, 541));
        graphicsView_2->setStyleSheet(QStringLiteral(""));

        retranslateUi(Form2);
        QObject::connect(pushButton, SIGNAL(clicked()), Form2, SLOT(Select_Image()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form2, SLOT(Exit()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), Form2, SLOT(Slider(int)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Form2, SLOT(Save()));

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QApplication::translate("Form2", "Form", nullptr));
        pushButton_3->setText(QApplication::translate("Form2", "SAVE", nullptr));
        pushButton_2->setText(QApplication::translate("Form2", "EXIT", nullptr));
        pushButton->setText(QApplication::translate("Form2", "Select Image", nullptr));
        label->setText(QApplication::translate("Form2", "BEFORE", nullptr));
        label_2->setText(QApplication::translate("Form2", "AFTER", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIZE_H
