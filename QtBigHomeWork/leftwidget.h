#ifndef LEFTWIDGET_H
#define LEFTWIDGET_H

#include <QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include"paintlabel.h"
#include<sstream>
class MainWindow;
class LeftWidget : public QWidget
{
    Q_OBJECT
public:
    explicit LeftWidget(QWidget *parent = 0);

signals:

public slots:
    void addBall();//添加小球
    void stopBall();//控制定时器的启动与暂停
    void changepoint();
private:
    QLabel *xLabel,*yLabel,*radiusLabel,
    *speedLabel,*angleLabel,*colorLabel;
    QLineEdit *xEdit,*yEdit,*radiusEdit,*speedEdit,*angleEdit;
    QLabel*point,*pointshow;
    QPushButton *addButton,*stopButton,*updatepoint;
    PaintLabel*colorPreview;
    MainWindow *pmain; //指向主窗口的指针
};

#endif // LEFTWIDGET_H
