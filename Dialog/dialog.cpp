#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
const static double PI=3.14156;
void Dialog::on_calButton_clicked()
{
    calculate();
}

void Dialog::on_radiusLineEdit_textChanged(const QString &arg1)
{
    calculate();
}
void Dialog::calculate(){
    QString radiusText=ui->radiusLineEdit->text();
    bool ok;
    double radius=radiusText.toDouble(&ok);
    double area=radius*radius*PI;
    QString temp;
    ui->areaResultLabel->setText(temp.setNum(area));
}
