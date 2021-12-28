#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMenu>
#include<QMenuBar>
#include<QAction>
#include<QToolBar>

#include"centerwidget.h"
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    CenterWidget*centerWidget;
    QMenu*fileMenu;
    QMenu*drawMenu;

    QAction*exitAction;
    QAction*lineAction;
    QAction*ellipseAction;
    QAction*rectangleAction;

    QToolBar*drawToolBar;
protected slots:
    void line();
    void ellipse();
    void rectangle();
};

#endif // MAINWINDOW_H
