#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"leftwidget.h"
#include"rightwidget.h"
#include<QSplitter>
#include<QTimer>

#include"baffle.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void StopTimer();//停止定时器
    void resumeTimer();//重启定时器
    RightWidget* getRightWidget(){return right;}
    void keyPressEvent(QKeyEvent * event);

protected slots:
    void timeToShow();
private:
    LeftWidget*left;
    RightWidget*right;
    QSplitter*splitter;
    QTimer*timer;//定时器对象
};

#endif // MAINWINDOW_H
