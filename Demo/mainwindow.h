#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "imagewidget.h"
#include <QImage>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    ImageWidget *m_Image;

private:
    Ui::MainWindow *ui;

    void recvShowPicSignal(QImage image);
};

#endif // MAINWINDOW_H
