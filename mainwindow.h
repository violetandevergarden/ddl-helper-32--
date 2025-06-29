#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "about.h"
#include "task.h"
#include "myclass.h"
#include "note.h"
#include "life.h"
#include "weekreport.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    about* about_ui=NULL;
    task* task_ui=NULL;
    myclass* class_ui=NULL;
    note* note_ui=NULL;
    life* life_ui=NULL;
    weekreport* weekreport_ui=NULL;


private slots:
    void on_aboutpushButton_clicked();
    void on_taskpushButton_clicked();
    void on_classpushButton_clicked();
    void on_notepushButton_clicked();
    void on_lifepushButton_clicked();
    void on_weekreportpushButton_clicked();
    void receive_add(QString);//接收myclass信号，打开note并自动添加

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
