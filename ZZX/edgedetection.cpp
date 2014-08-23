#include "edgedetection.h"

EdgeDetection::EdgeDetection(QObject *parent) :
    QThread(parent)
{
}

QImage* EdgeDetection::IplImageToQImage(const IplImage *cvImg)
{
    if(!cvImg)
        return NULL;
    IplImage* tcvImg = cvCloneImage(cvImg);
    cvCvtColor(cvImg,tcvImg,CV_BGR2RGB);
    QImage* image=new QImage((uchar *)tcvImg->imageData,tcvImg->width,tcvImg->height,QImage::Format_RGB888);
    return image;
}
