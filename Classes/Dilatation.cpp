#include "Dilatation.h"

using namespace std;
using namespace cv;

Mat image1;
Mat new_image1;
Mat element;
int effectType = 0;
int effectPosition = 0;


Dilatatio::Dilatatio(QWidget *parent)
	: QWidget(parent)
{
	ui3.setupUi(this);
}

void Dilatatio::Select_Image()
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


	image1 = imread(filename2.toStdString());


	//

	image1.convertTo(new_image1, image1.type(), 1, 0);



	//


	cvtColor(new_image1, new_image1, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image1.data), new_image1.cols, new_image1.rows, new_image1.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui3.graphicsView_2->setScene(scene3);

}

void Dilatatio::Slider(int value) {
	ui3.horizontalSlider->setMinimum(0);
	ui3.horizontalSlider->setMaximum(10);
	ui3.horizontalSlider->setValue(value);


	//OPENCV CODE


	element = cv::getStructuringElement(effectType,
		cv::Size(5 * value + 1, 5 * value + 1),
		cv::Point(value, value));
	cv::dilate(image1, new_image1, element);

	



	//


	cvtColor(new_image1, new_image1, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image1.data), new_image1.cols, new_image1.rows, new_image1.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui3.graphicsView_2->setScene(scene3);

}

void Dilatatio::Save() {
	QString imagePath = QFileDialog::getSaveFileName(this,
		tr("Save Address Book"), "",
		tr("All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)"));
	imageObject = new QImage();
	*imageObject = image.toImage();
	imageObject->save(imagePath);
}

void Dilatatio::Exit() {
	this->close();
}