/********************************************************************************
** Form generated from reading UI file 'Dilatation.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DILATATION_H
#define UI_DILATATION_H

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

class Ui_Form
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

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(1247, 859);
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 50, 71, 31));
        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1010, 50, 81, 31));
        graphicsView = new QGraphicsView(Form);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(40, 150, 561, 561));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 50, 101, 31));
        horizontalSlider = new QSlider(Form);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(350, 770, 501, 41));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 60, 551, 21));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 120, 64, 15));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(900, 120, 51, 16));
        line = new QFrame(Form);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(610, 120, 20, 601));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(Form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(640, 150, 64, 15));
        graphicsView_2 = new QGraphicsView(Form);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(640, 150, 561, 561));

        retranslateUi(Form);
        QObject::connect(pushButton, SIGNAL(clicked()), Form, SLOT(Select_Image()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form, SLOT(Exit()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Form, SLOT(Save()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), Form, SLOT(Slider(int)));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        pushButton_2->setText(QApplication::translate("Form", "EXIT", nullptr));
        pushButton_3->setText(QApplication::translate("Form", "SAVE", nullptr));
        pushButton->setText(QApplication::translate("Form", "Select Image", nullptr));
        label->setText(QApplication::translate("Form", "BEFORE", nullptr));
        label_2->setText(QApplication::translate("Form", "AFTER", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DILATATION_H
