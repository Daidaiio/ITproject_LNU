#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "notes.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButtonClose, &QPushButton::clicked,this,&MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonNotes_clicked()
{
    Notes note;
    note.setModal(true);
    note.exec();
}
