#pragma once

#include <QtWidgets/QMainWindow>
#include <QApplication>
#include <QFileDialog>
#include <QDebug>
#include <QGraphicsScene>
#include <QPixmap>
#include <QString>
#include <opencv2\core.hpp>
#include <opencv2\opencv.hpp>
#include <opencv2\highgui.hpp>
#include <math.h>
#include <vector>

#include "ui_Canny.h"


class Cann : public QWidget
{
	Q_OBJECT

public:
	Cann(QWidget *parent = Q_NULLPTR);
	

protected slots:
	void Select_Image();
	void Save();
	void Slider(int value);
	void Exit();

private:
	Ui::Form4 ui3;
	QGraphicsScene *scene2;
	QGraphicsScene *scene3;
	QImage *img;
	QPixmap image;
	QImage  *imageObject;
	
};

