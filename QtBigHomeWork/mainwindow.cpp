#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("乐子人游戏");
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






MainWindow::~MainWindow()
{

}
