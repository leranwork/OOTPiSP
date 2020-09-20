#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :

QMainWindow(parent)

{

ui.setupUi(this);

wgt = new QPaintWidget(this);

ui.verticalLayout->addWidget(wgt);

}

MainWindow::~MainWindow()

{

}
