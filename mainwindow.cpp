#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->addLog, SIGNAL(clicked()), this, SLOT(openExplorer()));
    connect(ui->saveLog, SIGNAL(clicked()), this, SLOT(saveFile()));
    connect(ui->newLog, SIGNAL(clicked()), this, SLOT(clearTable()));
}

void MainWindow::openExplorer()
{
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),"/path/to/file/",tr("Text Files (*.txt)"));
}

void MainWindow::saveFile()
{
    QString fileNames = QFileDialog::getSaveFileName(this, tr("Save File"),"/path/to/file/",tr("Text Files (*.txt)"));
}

void MainWindow::clearTable()
{
    ui->logTable->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}
