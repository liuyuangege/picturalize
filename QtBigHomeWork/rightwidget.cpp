#include "rightwidget.h"
#include"mainwindow.h"
#include<QPainter>
RightWidget::RightWidget(QWidget *parent) :
    QWidget(parent)
{
    setMinimumSize(800,800);
    balls.clear(); //清空后手工添加 3 个小球，用于测试
    addBall(Ball(30,20,10,10,49,Qt::red));
    addBall (Ball(56,200,10,4,39,Qt::blue));
    addBall (Ball(80,100,10,7,69,Qt::yellow));
    addBall (Ball(80,100,10,7,19,Qt::green));

}
void RightWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    baffle.draw(&p);
    for(auto& b:balls)
     b.draw(&p);
}
void RightWidget::updateBalls()
{
    for(auto &b:balls){
        b.setRectangle(this->geometry());
        b.move();
    }
    baffle.setRectangle(this->geometry());
    baffle.move();
    update();//更新窗口显示，重绘小球
    int i,j;
    for(i=0;i<balls.size()-1;++i){
        for(j=i+1;j<balls.size();++j)
        {balls[i].checkCollision(balls[j]);
        }

    }
    for(i=0;i<balls.size();++i)
    {baffle.checkCollision(balls[i]);
        if(balls[i].getRadius()==0)point++;
    }
    //point=baffle.pd;

}
void RightWidget::addBall(const Ball &b){
    balls.append(b);
}
void RightWidget::clickEvent()
{
    this->setFocusPolicy(Qt::ClickFocus);
}
