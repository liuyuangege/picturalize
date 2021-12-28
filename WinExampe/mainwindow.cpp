#include "mainwindow.h"
#include<QStatusBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("shabby窗口界面"));
    centerWidget=new CenterWidget(this);
    setCentralWidget(centerWidget);

    fileMenu=menuBar()->addMenu(tr("文件"));
    exitAction=new QAction(tr("退出"),this);
    exitAction->setShortcut(tr("Ctrl+X"));
    exitAction->setStatusTip(tr("退出程序"));
    fileMenu->addAction(exitAction);

    drawMenu=menuBar()->addMenu(tr("drawing"));
    lineAction=new QAction(tr("线条"),this);
    lineAction->setShortcut(tr("线条"));
    ellipseAction=new QAction(tr("椭圆"),this);
    rectangleAction=new QAction(tr("矩形"),this);

    drawMenu->addAction(lineAction);
    drawMenu->addAction(ellipseAction);
    drawMenu->addAction(rectangleAction);

    drawToolBar=addToolBar(tr("Draw"));
    drawToolBar->addAction(lineAction);
    drawToolBar->addAction(ellipseAction);
    drawToolBar->addAction(rectangleAction);

    statusBar()->show();

    connect(exitAction,SIGNAL(triggered()),this,SLOT(close()));
    connect(lineAction,SIGNAL(triggered()),this,SLOT(line()));
    connect(ellipseAction,SIGNAL(triggered()),this,SLOT(ellipse()));
    connect(rectangleAction,SIGNAL(triggered()),this,SLOT(rectangle()));
}
void MainWindow::line(){
    centerWidget->setDrawType(0);
     centerWidget->update();
}

void MainWindow::ellipse(){
    centerWidget->setDrawType(1);
     centerWidget->update();
}
void MainWindow::rectangle(){
    centerWidget->setDrawType(2);
     centerWidget->update();

}
MainWindow::~MainWindow()
{

}
