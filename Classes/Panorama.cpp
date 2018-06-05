#include "Panorama.h"

using namespace std;
using namespace cv;

Stitcher::Mode mode;
vector<cv::Mat> imgs;

Panoram::Panoram(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

void Panoram::Select_Image()
{
	filename = QFileDialog::getOpenFileNames(
		this,
		"Open Document",
		QDir::currentPath(),
		"All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)");

	if (!filename.isEmpty())
	{
		qDebug() << "selected file paths : " << filename.join(",").toUtf8();
	}
	ui.lineEdit->setText(filename.at(0));



	mode = cv::Stitcher::PANORAMA;

	for (int i = 0; i < filename.size(); ++i)
	{
		ui.lineEdit->setText(filename.at(i));

		imageObject = new QImage();
		imageObject->load(filename.at(i));
		image = QPixmap::fromImage(*imageObject);

		
		Mat img = imread(filename.at(i).toStdString());


		//imgs.push_back(img);
	}
	
	

	cv::Mat pano;
	cv::Ptr<cv::Stitcher> stitcher = cv::Stitcher::create(mode);
	cv::Stitcher::Status status = stitcher->stitch(imgs, pano);

	



	//



	


	//


	cvtColor(pano, pano, CV_BGR2RGB);

	img = new QImage((uchar *)(pano.data), pano.cols, pano.rows, pano.step, QImage::Format_RGB888);

	image = QPixmap::fromImage(*img);
	scene = new QGraphicsScene(this);
	scene->addPixmap(image);
	scene->setSceneRect(image.rect());

	ui.graphicsView->setScene(scene);
	

}

void Panoram::Save() {
	QString imagePath = QFileDialog::getSaveFileName(this,
		tr("Save Address Book"), "",
		tr("All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)"));
	imageObject = new QImage();
	*imageObject = image.toImage();
	imageObject->save(imagePath);

}


void Panoram::Exit() {
	this->close();
}