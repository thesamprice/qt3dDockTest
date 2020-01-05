#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form3dview.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Form3dView * form3d = new Form3dView();



    this->addDockWidget(static_cast<Qt::DockWidgetArea>(1), form3d);
}

MainWindow::~MainWindow()
{
    delete ui;
}

