#pragma once

#include <QtWidgets/QMainWindow>
#include <QApplication>
#include "ui_Multimedia_Project.h"
#include "Dilatation.h"
#include "Resize.h"
#include "Lighten.h"
#include "Canny.h"
#include "Panorama.h"
#include "Erosion.h"


class Multimedia_Project : public QMainWindow
{
	Q_OBJECT
		
public:
	Multimedia_Project(QWidget *parent = Q_NULLPTR);
	

protected slots:
	void Dilatation();
	void Erosion();
	void Resizing();
	void Lighten();
	void Panorama();
	void Canny();
	void Exit();

private:
	Ui::Multimedia_ProjectClass ui;
	Dilatatio dilatation;
	Erosio erosion;
	Resiz resiz;
	Lighte lighten;
	Cann canny;
	Panoram panorama;
};
