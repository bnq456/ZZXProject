#ifndef EDGEDETECTION_H
#define EDGEDETECTION_H

#include <QThread>
#include <QImage>
#include "cv.h"

class EdgeDetection : public QThread
{
    Q_OBJECT
public:
    explicit EdgeDetection(QObject *parent = 0);
    QImage *IplImageToQImage(const IplImage *);


signals:

public slots:

};

#endif // EDGEDETECTION_H
