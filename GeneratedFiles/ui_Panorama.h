/********************************************************************************
** Form generated from reading UI file 'Panorama.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANORAMA_H
#define UI_PANORAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form5
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Form5)
    {
        if (Form5->objectName().isEmpty())
            Form5->setObjectName(QStringLiteral("Form5"));
        Form5->resize(1257, 859);
        pushButton_2 = new QPushButton(Form5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 60, 71, 31));
        pushButton_3 = new QPushButton(Form5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1010, 60, 81, 31));
        pushButton = new QPushButton(Form5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 60, 101, 31));
        lineEdit = new QLineEdit(Form5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 70, 551, 21));
        label = new QLabel(Form5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 170, 64, 15));
        graphicsView = new QGraphicsView(Form5);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(40, 130, 1161, 681));

        retranslateUi(Form5);
        QObject::connect(pushButton, SIGNAL(clicked()), Form5, SLOT(Select_Image()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form5, SLOT(Exit()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Form5, SLOT(Save()));

        QMetaObject::connectSlotsByName(Form5);
    } // setupUi

    void retranslateUi(QWidget *Form5)
    {
        Form5->setWindowTitle(QApplication::translate("Form5", "Form", nullptr));
        pushButton_2->setText(QApplication::translate("Form5", "EXIT", nullptr));
        pushButton_3->setText(QApplication::translate("Form5", "SAVE", nullptr));
        pushButton->setText(QApplication::translate("Form5", "Select Image", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form5: public Ui_Form5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANORAMA_H
