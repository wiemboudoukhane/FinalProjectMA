/********************************************************************************
** Form generated from reading UI file 'Multimedia_Project.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIMEDIA_PROJECT_H
#define UI_MULTIMEDIA_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Multimedia_ProjectClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QMenu *menuMENU;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Multimedia_ProjectClass)
    {
        if (Multimedia_ProjectClass->objectName().isEmpty())
            Multimedia_ProjectClass->setObjectName(QStringLiteral("Multimedia_ProjectClass"));
        Multimedia_ProjectClass->resize(827, 713);
        centralWidget = new QWidget(Multimedia_ProjectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 30, 671, 621));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        Multimedia_ProjectClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Multimedia_ProjectClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 827, 26));
        menuMENU = new QMenu(menuBar);
        menuMENU->setObjectName(QStringLiteral("menuMENU"));
        Multimedia_ProjectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Multimedia_ProjectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Multimedia_ProjectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Multimedia_ProjectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Multimedia_ProjectClass->setStatusBar(statusBar);

        menuBar->addAction(menuMENU->menuAction());

        retranslateUi(Multimedia_ProjectClass);
        QObject::connect(pushButton_6, SIGNAL(clicked()), Multimedia_ProjectClass, SLOT(Exit()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Multimedia_ProjectClass, SLOT(Dilatation()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Multimedia_ProjectClass, SLOT(Resizing()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), Multimedia_ProjectClass, SLOT(Lighten()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), Multimedia_ProjectClass, SLOT(Panorama()));
        QObject::connect(pushButton, SIGNAL(clicked()), Multimedia_ProjectClass, SLOT(Canny()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), Multimedia_ProjectClass, SLOT(Erosion()));

        QMetaObject::connectSlotsByName(Multimedia_ProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *Multimedia_ProjectClass)
    {
        Multimedia_ProjectClass->setWindowTitle(QApplication::translate("Multimedia_ProjectClass", "Multimedia_Project", nullptr));
        pushButton_2->setText(QApplication::translate("Multimedia_ProjectClass", "Dilatation", nullptr));
        pushButton_7->setText(QApplication::translate("Multimedia_ProjectClass", "Erosion", nullptr));
        pushButton_3->setText(QApplication::translate("Multimedia_ProjectClass", "Resizing", nullptr));
        pushButton_5->setText(QApplication::translate("Multimedia_ProjectClass", "Lighten/Darken", nullptr));
        pushButton_4->setText(QApplication::translate("Multimedia_ProjectClass", "Panorama/Stitching", nullptr));
        pushButton->setText(QApplication::translate("Multimedia_ProjectClass", "Canny edge detection", nullptr));
        pushButton_6->setText(QApplication::translate("Multimedia_ProjectClass", "Exit", nullptr));
        menuMENU->setTitle(QApplication::translate("Multimedia_ProjectClass", "MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Multimedia_ProjectClass: public Ui_Multimedia_ProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIMEDIA_PROJECT_H
