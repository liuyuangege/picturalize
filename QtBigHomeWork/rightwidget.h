#ifndef RIGHTWIDGET_H
#define RIGHTWIDGET_H

#include <QWidget>
#include"ball.h"
#include"baffle.h"
#include<QList>
class RightWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RightWidget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);//更新窗口显示
    void updateBalls();//移动小球的接口
    void addBall(const Ball&b);
    void createBaffle();//添加挡板
    void clickEvent();
    Baffle baffle;
    int point=0;
private:
    QList<Ball> balls;

signals:

public slots:

};

#endif // RIGHTWIDGET_H
