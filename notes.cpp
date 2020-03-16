#include "notes.h"
#include "ui_notes.h"

#include <QTextEdit>
#include <QMessageBox>

Notes::Notes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Notes)
{
    ui->setupUi(this);
    QObject::connect(ui->CloseNotes, &QPushButton::clicked,this,&Notes::close);
}



Notes::~Notes()
{
    delete ui;
}





