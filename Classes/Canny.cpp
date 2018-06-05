#include "Canny.h"

using namespace std;
using namespace cv;

Mat image4;
Mat new_image4;
cv::Mat src_gray;
cv::Mat detected_edges;
int edgeThresh = 1;
int lowThreshold;
int const max_lowThreshold = 100;

int kernel_size = 3;


Cann::Cann(QWidget *parent)
	: QWidget(parent)
{
	ui3.setupUi(this);
}

void Cann::Select_Image()
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


	image4 = imread(filename2.toStdString());


	//

	image4.convertTo(new_image4, image4.type(), 1, 0);



	//


	cvtColor(new_image4, new_image4, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image4.data), new_image4.cols, new_image4.rows, new_image4.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui3.graphicsView_2->setScene(scene3);
}

void Cann::Slider(int value) {
	ui3.horizontalSlider->setMinimum(1);//Track bar minimum value
	ui3.horizontalSlider->setMaximum(10);
	ui3.horizontalSlider->setValue(value);


	//OPENCVCODE


	
	cvtColor(image4, src_gray, CV_BGR2GRAY);
	
	Canny(detected_edges, detected_edges, value, value * 3, kernel_size);
	new_image4 = cv::Scalar::all(0);
	image4.copyTo(new_image4, detected_edges);

	blur(src_gray, detected_edges, cv::Size(3, 3));
	//


	//cvtColor(new_image4, new_image4, CV_BGR2RGB);

	img = new QImage((uchar *)(new_image4.data), new_image4.cols, new_image4.rows, new_image4.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene3 = new QGraphicsScene(this);
	scene3->addPixmap(image);
	scene3->setSceneRect(image.rect());

	ui3.graphicsView_2->setScene(scene3);
}

void Cann::Save() {
	QString imagePath = QFileDialog::getSaveFileName(this,
		tr("Save Address Book"), "",
		tr("All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)"));
	imageObject = new QImage();
	*imageObject = image.toImage();
	imageObject->save(imagePath);

}

void Cann::Exit() {
	this->close();
}