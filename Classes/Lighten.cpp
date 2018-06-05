#include "Lighten.h"

using namespace std;
using namespace cv;


Mat image3;
Mat new_image3;

Lighte::Lighte(QWidget *parent)
	: QWidget(parent)
{
	ui3.setupUi(this);
}

void Lighte::Select_Image()
{
	 QString filename2 = QFileDialog::getOpenFileName(
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


	image3 = imread(filename2.toStdString());
	

	//
	
	image3.convertTo(new_image3, image3.type(), 1, 0);



	//


	cvtColor(new_image3, new_image3, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image3.data), new_image3.cols, new_image3.rows, new_image3.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui3.graphicsView_2->setScene(scene3);


}



void Lighte::Slider(int value) {
	ui3.horizontalSlider->setMinimum(-100);
	ui3.horizontalSlider->setMaximum(100);
	ui3.horizontalSlider->setValue(value);
	

	//OPENCV CODE




	image3.convertTo(new_image3, image3.type(), 1, value);





	//


	cvtColor(new_image3, new_image3, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image3.data), new_image3.cols, new_image3.rows, new_image3.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui3.graphicsView_2->setScene(scene3);

}

void Lighte::Save() {
	QString imagePath = QFileDialog::getSaveFileName(this,
		tr("Save Address Book"), "",
		tr("All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)"));
	imageObject = new QImage();
	*imageObject = image.toImage();
	imageObject->save(imagePath);

}

void Lighte::Exit() {
	this->close();
}