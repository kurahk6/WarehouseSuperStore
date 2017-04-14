#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <iostream>
#include "container.h"
#include "container_sales.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();  

private slots:
    void onAction(QString action);
    void openFile(QString currentTab);
    void saveFile(QString currentTab);
    void clearTable(QString tableName);
    void addFunction(QString logType);

private:
    Container member;
    Container_sales sale;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
