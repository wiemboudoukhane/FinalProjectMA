#include "Erosion.h"

using namespace std;
using namespace cv;

Mat image5;
Mat new_image5;
Mat element1;
int effectType1 = 0;
int effectPosition1 = 0;


Erosio::Erosio(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

void Erosio::Select_Image()
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

	ui.lineEdit->setText(filename2);

	scene2 = new QGraphicsScene(this);
	scene2->addPixmap(image);
	scene2->setSceneRect(image.rect());

	ui.graphicsView->setScene(scene2);


	image5 = imread(filename2.toStdString());


	//

	
	image5.convertTo(new_image5, image5.type(), 1, 0);


	//


	cvtColor(new_image5, new_image5, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image5.data), new_image5.cols, new_image5.rows, new_image5.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui.graphicsView_2->setScene(scene3);

}

void Erosio::Slider(int value) {
	ui.horizontalSlider->setMinimum(0);
	ui.horizontalSlider->setMaximum(10);
	ui.horizontalSlider->setValue(value);


	//OPENCV CODE


	element1 = cv::getStructuringElement(effectType1,
		cv::Size(5 * value + 1, 5 * value + 1),
		cv::Point(value, value));
	cv::erode(image5, new_image5, element1);





	//


	cvtColor(new_image5, new_image5, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image5.data), new_image5.cols, new_image5.rows, new_image5.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui.graphicsView_2->setScene(scene3);

}

void Erosio::Save() {
	QString imagePath = QFileDialog::getSaveFileName(this,
		tr("Save Address Book"), "",
		tr("All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)"));
	imageObject = new QImage();
	*imageObject = image.toImage();
	imageObject->save(imagePath);
}

void Erosio::Exit() {
	this->close();
}