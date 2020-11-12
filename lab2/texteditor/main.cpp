#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    a.setApplicationName("Редактор текст");
    a.setApplicationVersion("0.1");

    a.setOrganizationName("LeraSoft");
    a.setOrganizationDomain("lera.soft");

    w.show();

    return a.exec();
}
