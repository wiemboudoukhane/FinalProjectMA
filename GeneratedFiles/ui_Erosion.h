/********************************************************************************
** Form generated from reading UI file 'Erosion.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EROSION_H
#define UI_EROSION_H

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

class Ui_Form6
{
public:
    QLabel *label_3;
    QSlider *horizontalSlider;
    QPushButton *pushButton_3;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QFrame *line;
    QGraphicsView *graphicsView_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Form5)
    {
        if (Form5->objectName().isEmpty())
            Form5->setObjectName(QStringLiteral("Form5"));
        Form5->resize(1245, 855);
        label_3 = new QLabel(Form5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(640, 150, 64, 15));
        horizontalSlider = new QSlider(Form5);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(350, 770, 501, 41));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton_3 = new QPushButton(Form5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1010, 50, 81, 31));
        graphicsView = new QGraphicsView(Form5);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(40, 150, 561, 561));
        label_2 = new QLabel(Form5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(900, 120, 51, 16));
        pushButton_2 = new QPushButton(Form5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 50, 71, 31));
        pushButton = new QPushButton(Form5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 50, 101, 31));
        label = new QLabel(Form5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 120, 64, 15));
        line = new QFrame(Form5);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(610, 120, 20, 601));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        graphicsView_2 = new QGraphicsView(Form5);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(640, 150, 561, 561));
        lineEdit = new QLineEdit(Form5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 60, 551, 21));

        retranslateUi(Form5);
        QObject::connect(pushButton, SIGNAL(clicked()), Form5, SLOT(Select_Image()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), Form5, SLOT(Slider(int)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Form5, SLOT(Save()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form5, SLOT(Exit()));

        QMetaObject::connectSlotsByName(Form5);
    } // setupUi

    void retranslateUi(QWidget *Form5)
    {
        Form5->setWindowTitle(QApplication::translate("Form5", "Form", nullptr));
        label_3->setText(QString());
        pushButton_3->setText(QApplication::translate("Form5", "SAVE", nullptr));
        label_2->setText(QApplication::translate("Form5", "AFTER", nullptr));
        pushButton_2->setText(QApplication::translate("Form5", "EXIT", nullptr));
        pushButton->setText(QApplication::translate("Form5", "Select Image", nullptr));
        label->setText(QApplication::translate("Form5", "BEFORE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form6: public Ui_Form6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EROSION_H
