#include "Resize.h"

#include <iostream>
#include <string>
#include <string.h>

using namespace cv;
using namespace std;

Mat image2;
Mat new_image2;

Resiz::Resiz(QWidget *parent)
	: QWidget(parent)
{
	ui3.setupUi(this);
}

void Resiz::Select_Image()
{
	QString filename2;
	filename2 = QFileDialog::getOpenFileName(
		this,
		"Open Document",
		QDir::currentPath(),
		"All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)");

	imageObject = new QImage();
	imageObject->load(filename2);
	image = QPixmap::fromImage(*imageObject);

	ui3.lineEdit->setText(filename2);

	scene2 = new QGraphicsScene(this);
	scene2->addPixmap(image);
	scene2->setSceneRect(image.rect());

	ui3.graphicsView->setScene(scene2);


	image2 = imread(filename2.toStdString());


	//

	image2.convertTo(new_image2, image2.type(), 1, 0);



	//


	cvtColor(new_image2, new_image2, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image2.data), new_image2.cols, new_image2.rows, new_image2.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui3.graphicsView_2->setScene(scene3);

}

void Resiz::Slider(int value) {
	ui3.horizontalSlider->setMinimum(0);

	ui3.horizontalSlider->setMaximum(10);
	//ui3.horizontalSlider->
	ui3.horizontalSlider->setValue(value);


	//OPENCV CODE




	cv::resize(image2, new_image2, Size(cvRound(value*image2.cols), cvRound(value*image2.rows)), 1 - value*0.1, 1 - value*0.1, cv::INTER_LINEAR);



	//


	cvtColor(new_image2, new_image2, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image2.data), new_image2.cols, new_image2.rows, new_image2.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui3.graphicsView_2->setScene(scene3);

}

void Resiz::Save() {
	QString imagePath = QFileDialog::getSaveFileName(this,
		tr("Save Address Book"), "",
		tr("All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)"));
	imageObject = new QImage();
	*imageObject = image.toImage();
	imageObject->save(imagePath);
	
}

void Resiz::Exit() {
	this->close();
}