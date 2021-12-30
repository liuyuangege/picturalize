#include "mainwindow.h"
#include"baffle.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("吸收小球游戏");
    splitter=new QSplitter(Qt::Horizontal,this);
    left=new LeftWidget(this);
    right=new RightWidget(this);
    splitter->addWidget(left);
    splitter->addWidget(right);
    splitter->setStretchFactor(0,1);
    splitter->setStretchFactor(1,4);
    splitter->setStyleSheet("QSplitter::handle{background-color:blue}");
    splitter->setHandleWidth(8);
    this->setCentralWidget(splitter);

    //定时器
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeToShow()));

    timer->start(100);
    right->setFocusPolicy(Qt::ClickFocus);
}

void MainWindow::timeToShow(){
    right->updateBalls();
}
void MainWindow::StopTimer(){
    timer->stop();
}
void MainWindow::resumeTimer(){
    timer->start(100);
}

void MainWindow::keyPressEvent(QKeyEvent * event)
{
    switch(event->key())
    {
    case Qt::Key_W:
        right->baffle.up=1;
        right->baffle.y+=right->baffle.speed;
        break;
    case Qt::Key_A:
        right->baffle.left=1;
        right->baffle.x-=right->baffle.speed;
        break;
    case Qt::Key_D:
        right->baffle.right=1;
        right->baffle.x+=right->baffle.speed;
        break;
    case Qt::Key_S:
        right->baffle.down=1;
        right->baffle.y-=right->baffle.speed;
        break;
    default:
        break;
    }
}




MainWindow::~MainWindow()
{

}
