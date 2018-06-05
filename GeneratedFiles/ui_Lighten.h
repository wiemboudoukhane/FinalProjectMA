/********************************************************************************
** Form generated from reading UI file 'Lighten.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTEN_H
#define UI_LIGHTEN_H

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

class Ui_Form3
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
    QGraphicsView *graphicsView_2;

    void setupUi(QWidget *Form3)
    {
        if (Form3->objectName().isEmpty())
            Form3->setObjectName(QStringLiteral("Form3"));
        Form3->resize(1247, 858);
        pushButton_2 = new QPushButton(Form3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 40, 71, 31));
        pushButton_3 = new QPushButton(Form3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1010, 40, 81, 31));
        graphicsView = new QGraphicsView(Form3);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(40, 140, 561, 561));
        pushButton = new QPushButton(Form3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 40, 101, 31));
        horizontalSlider = new QSlider(Form3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(350, 760, 501, 41));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(Form3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 50, 551, 21));
        label = new QLabel(Form3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 110, 64, 15));
        label_2 = new QLabel(Form3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(900, 110, 51, 16));
        line = new QFrame(Form3);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(610, 110, 20, 601));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        graphicsView_2 = new QGraphicsView(Form3);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(640, 140, 561, 561));

        retranslateUi(Form3);
        QObject::connect(pushButton, SIGNAL(clicked()), Form3, SLOT(Select_Image()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form3, SLOT(Exit()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Form3, SLOT(Save()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), Form3, SLOT(Slider(int)));

        QMetaObject::connectSlotsByName(Form3);
    } // setupUi

    void retranslateUi(QWidget *Form3)
    {
        Form3->setWindowTitle(QApplication::translate("Form3", "Form", nullptr));
        pushButton_2->setText(QApplication::translate("Form3", "EXIT", nullptr));
        pushButton_3->setText(QApplication::translate("Form3", "SAVE", nullptr));
        pushButton->setText(QApplication::translate("Form3", "Select Image", nullptr));
        label->setText(QApplication::translate("Form3", "BEFORE", nullptr));
        label_2->setText(QApplication::translate("Form3", "AFTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form3: public Ui_Form3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTEN_H
