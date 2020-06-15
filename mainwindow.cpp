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

    int j = 0;
    int k = 0;
    //this for loop populates the interface with 100 buttons
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
    //QObject::connect(ui->pushButton, SIGNAL(clicked()),
                     //this, SLOT(this->button_pressed()));
    //Looked up this code below based on the code above.
    //Not really sure what "[this]{ button_pressed(); }" means though
    QObject::connect(ui->pushButton, &QPushButton::clicked,
                     this, [this]{ button_pressed(); });

}

MainWindow::~MainWindow()
{
    delete ui;
}
//This creates the connections once the start button is pressed.
void MainWindow::create_connections()
{
    QObject::connect(Buttons[0], SIGNAL(clicked()),
            Buttons[1], SLOT(toggle()));

}
//This only activates when the button is pressed
void MainWindow::button_pressed()
{
    create_connections();
}


