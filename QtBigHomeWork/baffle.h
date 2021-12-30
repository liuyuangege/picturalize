#ifndef BAFFLE_H
#define BAFFLE_H
#include<QColor>
#include<QRect>
#include<QPainter>
#include<QKeyEvent>
#include"ball.h"
class Baffle
{
public:
    Baffle();
    Baffle(double xpos,double ypos,double len,double wid,double s,
         QColor c);
    void setRectangle(const QRect& rect){
        this->rect=rect;
    }
    void draw(QPainter *p); //绘制小球
    void move(); //在指定的方向上移动 1 步
    void checkCollision(Ball &b);//碰撞监测
    void keyPressEvent(QKeyEvent*event);
    bool up,down,left,right;
    double speed; //挡板移动速度
    double x,y; //挡板的中心为位置
    //static int pd;
private:

    double length; //挡板长度
    double width;//挡板宽度


    QColor color; //挡板填充颜色
    QRect rect; //用于检测的窗口矩形区域
    void dirtozero();
};
#endif // BAFFLE_H
