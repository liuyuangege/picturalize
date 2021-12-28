#ifndef CENTERWIDGET_H
#define CENTERWIDGET_H

#include <QWidget>
#include<QMouseEvent>
class CenterWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CenterWidget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void setDrawType(int type);
protected:
 void mousePressEvent(QMouseEvent *e);
 void mouseMoveEvent(QMouseEvent *e);
signals:

public slots:
private:
    int drawType;
    QString mouseClickInfo; //保存点击信息的字符串
     QString mousePosInfo; //保存鼠标位置的字符串
};

#endif // CENTERWIDGET_H
