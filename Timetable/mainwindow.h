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

    void on_pushButtonShedule_clicked();

    void on_pushButtonSave_clicked();

    void on_pushButtonMon_clicked();

    void on_pushButtonTue_clicked();

    void on_pushButtonWed_clicked();

    void on_pushButtonThu_clicked();

    void on_pushButtonFri_clicked();

    void on_pushButtonNextWeek_clicked();

    void on_pushButtonPreviousWeek_clicked();

    void on_pushButtonClear1_clicked();

    void on_pushButtonClear2_clicked();

    void on_pushButtonSat_clicked();

    void on_pushButtonAdd_clicked();

    void on_pushButtonSub_clicked();

    void on_pushButtonNote1_clicked();
    void on_pushButtonNote2_clicked();
    void on_pushButtonNote3_clicked();
    void on_pushButtonNote4_clicked();
    void on_pushButtonNote5_clicked();
    void on_pushButtonNote6_clicked();
    void on_pushButtonNote7_clicked();
    void on_pushButtonNote8_clicked();
    void on_pushButtonNote9_clicked();
    void on_pushButtonNote10_clicked();
    void on_pushButtonNote11_clicked();
    void on_pushButtonNote12_clicked();
    void on_pushButtonNote13_clicked();
    void on_pushButtonNote14_clicked();
    void on_pushButtonNote15_clicked();
    void on_pushButtonNote16_clicked();
    void on_pushButtonNote17_clicked();
    void on_pushButtonNote18_clicked();
    void on_pushButtonNote19_clicked();
    void on_pushButtonNote20_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
