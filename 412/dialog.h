#ifndef DIALOG_H
#define DIALOG_H
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDialog>
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
private:
    QLabel *radiusLabel, *areaLabel;
    QLineEdit *radiusLineEdit;
    QPushButton *calButton;
private slots:
    void showArea();
};

#endif // DIALOG_H
