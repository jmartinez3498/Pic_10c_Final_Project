#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->x=250;
    this->y=250;

    int j = 0;
    int k = 0;

    for (int i = 1; i <= 100;++i)
    {
        QPushButton* Buttons = new QPushButton("",this);
        Buttons -> setGeometry(QRect(k,j,40,40));
        if (i%10==0)
            j = j + 40;
        k=k+40;
        if (i%10==0)
        k=0;
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

