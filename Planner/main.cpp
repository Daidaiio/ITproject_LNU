#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Planner");
    w.setFixedSize(1338,700);
    w.show();
    return a.exec();
}
