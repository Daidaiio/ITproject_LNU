#ifndef NOTES_H
#define NOTES_H

#include <QDialog>

namespace Ui {
class Notes;
}

class Notes : public QDialog
{
    Q_OBJECT

public:
    explicit Notes(QWidget *parent = 0);
    ~Notes();

private slots:
    void on_pushButton_clicked();

    void on_CloseNotes_clicked();

    void on_Note1_clicked();

    void on_showNote1_clicked();

    void on_Note1_textChanged();

    void on_pushButtonNote1_clicked();

    void on_textEdit_objectNameChanged(const QString &objectName);

    void on_textBrowser_textChanged();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::Notes *ui;
};

#endif // NOTES_H
