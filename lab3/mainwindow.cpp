#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    setFixedWidth(700);
//    setFixedHeight(600);

     ui->label->setHidden(true);

    // создаем кнопку
     QPushButton *button = new QPushButton("Result", this);
     button->setGeometry(QRect(QPoint(620, 0),QSize(80, 30)));
     connect(button,SIGNAL(clicked()),this,SLOT(result_button_clicked()));

    int rows = 15;
    QString text;

    ui->table->setRowCount(rows);
    ui->table->setColumnCount(rows);
    for(int i=0;i<15;i++){
        ui->table->setColumnWidth(i,40);
    }

    int array[15][15];

    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            array[i][j] = rand() % 100;
        }
    }

    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            QTableWidgetItem* item =new QTableWidgetItem();
            item->setText(text.setNum(array[i][j]));
            ui->table->setItem(i, j, item);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::result_button_clicked()
{
    int count = 0;
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            QString number = ui->table->item(i,j)->text();
            int x = number.toInt();
            if (((x & (x - 1)) == 0)) {
                ui->table->item(i,j)->setBackground(QColor(255,0,0));
                count++;
            }
        }
    }
    QString number;
    number.setNum(count);
    QString text = "There is ";
    text.append(number);
    text.append(" numbers found");
    ui->label->setText(text);
    ui->label->setHidden(false);

}
