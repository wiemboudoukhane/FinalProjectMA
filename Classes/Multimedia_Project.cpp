#include "Multimedia_Project.h"


Multimedia_Project::Multimedia_Project(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Multimedia_Project::Dilatation() {
	dilatation.show();
	dilatation.activateWindow();
	dilatation.raise();
	this->close();
}

void Multimedia_Project::Erosion() {
	erosion.show();
	erosion.activateWindow();
	erosion.raise();
	this->close();
}

void Multimedia_Project::Resizing() {
	resiz.show();
	resiz.activateWindow();
	resiz.raise();
	this->close();
}

void Multimedia_Project::Lighten() {
	lighten.show();
	lighten.activateWindow();
	lighten.raise();
	this->close();
}

void Multimedia_Project::Panorama() {
	panorama.show();
	panorama.activateWindow();
	panorama.raise();
	this->close();
}

void Multimedia_Project::Canny() {
	canny.show();
	canny.activateWindow();
	canny.raise();
	this->close();
}

void Multimedia_Project::Exit() {
	this->close();
}

