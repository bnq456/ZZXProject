#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    eDetector(NULL)
{
    ui->setupUi(this);
    Initialize();

    IplImage *cvimage = 0;
    cvimage = cvLoadImage("E:\\ZZXProject\\fruits.jpg", CV_LOAD_IMAGE_COLOR);

    QImage* img = NULL;
    img = eDetector->IplImageToQImage(cvimage);

    ui->label->setPixmap(QPixmap::fromImage(*img));



}

void MainWindow::Initialize()
{
    eDetector = new EdgeDetection(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
