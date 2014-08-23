#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "edgedetection.h"
#include "cv.h"
#include "highgui.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void Initialize();

private:
    Ui::MainWindow *ui;
    EdgeDetection* eDetector;
};

#endif // MAINWINDOW_H
