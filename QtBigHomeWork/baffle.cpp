#include "baffle.h"
#include<cmath>
#include<QPen>
#include<QBrush>
Baffle::Baffle():Baffle(500,500,5,100,10,Qt::black)
{}
Baffle::Baffle(double xpos,double ypos,double len,double wid,double s,QColor c)
    :x(xpos),y(ypos),length(len),width(wid),speed(s),color(c)
{
}
void Baffle::draw(QPainter*p)
{
    QPen pen(color,1,Qt::SolidLine);
    QBrush brush(color);
    p->setPen(pen);
    p->setBrush(brush);
    QRect r(x-0.5*length,y-0.5*width,width,length);
    p->drawRect(r);
}
void Baffle::checkCollision(Ball &b)
{
    double dx,dy;
    dx=x-b.getX();
    dy=y-b.getY();
    double dis=std::sqrt(dx*dx+dy*dy);
        if(dis<=length||dis<=width){ //碰撞后只是交换速度和角度
            //speed=0.95*speed;
            //b.speed=0.95*b.speed;阻尼效应
        b.setRadius(0);
        //pd++;
     }
}
void Baffle::move()
{
    if(up)
        y+=speed;
    if(down)
        y-=speed;
    if(left)
        x-=speed;
    if(right)
        x+=speed;
    dirtozero();

}
void Baffle::dirtozero()
{
    up=0;
    right=0;
    left=0;
    down=0;
}

void Baffle::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
    case Qt::Key_W:
        up=1;
        y+=speed;
        break;
    case Qt::Key_A:
        left=1;
        x-=speed;
        break;
    case Qt::Key_D:
        right=1;
        x+=speed;
        break;
    case Qt::Key_S:
        down=1;
        y-=speed;
        break;
    default:
        break;
    }
}
