#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonWrite_clicked();

    void on_pushButtonRead_clicked();

    void on_pushButtonRead_2_clicked();

    void on_pushButtonRead_3_clicked();

    void on_pushButtonExit_4_clicked();

    void on_pushButtonRead_5_clicked();

    void on_pushButtonWrite_2_clicked();

    void on_pushButtonWrite_3_clicked();

    void on_pushButtonWrite_4_clicked();

    void on_pushButtonWrite_5_clicked();

    void on_pushButtonShedule_clicked();

    void on_pushButtonNote1_clicked();

    void on_pushButtonNote2_clicked();

    void on_pushButtonSave_clicked();

    void on_pushButtonAdd_clicked();

    void on_pushButtonSubtract_clicked();

    void on_pushButtonExit_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
