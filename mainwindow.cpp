#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    about_ui=new about();
    task_ui=new task();
    class_ui=new myclass();
    note_ui=new note();
    life_ui=new life();
    weekreport_ui=new weekreport();

    connect(class_ui,&myclass::add,this,&MainWindow::receive_add);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_aboutpushButton_clicked()
{
    about_ui->show();
}


void MainWindow::on_taskpushButton_clicked()
{
    task_ui->show();
}


void MainWindow::on_classpushButton_clicked()
{
    class_ui->show();
}


void MainWindow::on_notepushButton_clicked()
{
    note_ui->show();
}


void MainWindow::on_lifepushButton_clicked()
{
    life_ui->show();
}


void MainWindow::on_weekreportpushButton_clicked()
{
    weekreport_ui->show();
}

void MainWindow::receive_add(QString name)
{
    note_ui->show();
    note_ui->auto_add_tab(name);
}

