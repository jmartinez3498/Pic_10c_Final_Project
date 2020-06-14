#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QtWidgets>
#include <QVector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->x=250;
    this->y=250;


    int j = 0;
    int k = 0;
    QVector<QPushButton*> Buttons;


    for (int i = 1; i <= 100;++i)
    {
        Buttons.push_back(new QPushButton("",this));
        Buttons[i-1] -> setGeometry(QRect(k,j,40,40));
        Buttons[i-1] -> setCheckable(true);
        if (i%10==0)
            j = j + 40;
        k=k+40;
        if (i%10==0)
        k=0;
    }

    QObject::connect(Buttons[0], SIGNAL(toggled(bool)),
            Buttons[1], SLOT(toggle()));

    //QObject::connect(Buttons[0], SIGNAL(toggled(bool)),
            //Buttons[1], SLOT(update_boxes()));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_boxes(bool z)
{
    start = z;

}

bool MainWindow::button_pressed(bool z)
{
    stop=z;
    return false;
}
