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

#include "ui_Panorama.h"


class Panoram : public QWidget
{
	Q_OBJECT

public:
	Panoram(QWidget *parent = Q_NULLPTR);

	protected slots:
	void Select_Image();
	void Save();
	void Exit();

private:
	Ui::Form5 ui;
	QStringList filename;
	QGraphicsScene *scene;
	QImage *img;
	QPixmap image;
	QImage  *imageObject;
};

