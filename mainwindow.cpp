#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "container.h"
#include "container_sales.h"
#include <QSignalMapper>
#include <QString>
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSignalMapper* signalMapper = new QSignalMapper(this);
    connect(ui->addLog, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->saveLog, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->addProfile, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->saveProfile, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->newLog, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->newProfile, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->addUser, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->addSale, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->addLog, "addLog");
    signalMapper->setMapping(ui->saveLog, "saveLog");
    signalMapper->setMapping(ui->addProfile, "addProfile");
    signalMapper->setMapping(ui->saveProfile, "saveProfile");
    signalMapper->setMapping(ui->newLog, "newLog");
    signalMapper->setMapping(ui->newProfile, "newProfile");
    signalMapper->setMapping(ui->addUser, "addUser");
    signalMapper->setMapping(ui->addSale, "addSale");
    connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(onAction(QString)));
    ui->SaleLogs->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->UserLogs->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->SaleLogs->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->UserLogs->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->SaleLogs->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->UserLogs->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
}

void MainWindow::onAction(QString action)
{
 if(action == "addLog")
    openFile(action);
 else if(action == "addProfile")
    openFile(action);
 else if(action == "saveLog")
    saveFile(action);
 else if(action == "saveProfile")
    saveFile(action);
 else if(action == "newLog")
    clearTable(action);
 else if(action == "newProfile")
    clearTable(action);
 else if(action == "addUser")
    addFunction(action);
 else if(action == "addSale")
    addFunction(action);

}

void MainWindow::openFile(QString currentTab)
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("Text Files (*.txt)"));
    std::string fileNameString = fileName.toStdString();
    std::cout<<fileNameString<<std::endl;
    if(fileNameString == ""){}
    else
    {
        if(currentTab == "addProfile")
        {
            Container profile(fileNameString);
            member = profile + member;
            int *IDs = member.getMemberID();
            std::string *names = member.get_name(), *dates = profile.get_exp();
            bool *isPrefered = member.getis_pref();
            if(ui->UserLogs->rowCount() != 0 )
                ui->UserLogs->setRowCount(0);
            ui->UserLogs->setRowCount(member.list_size());
            for(int i = 0; i < member.list_size()+1; i++)
            {
                int k = 0;
                QString temp;
                temp = QString::fromStdString(dates[i]);
                temp.insert(2, "/");
                temp.insert(5,"/");
                ui->UserLogs->setItem(i-1,k,new QTableWidgetItem(QString::number(IDs[i])));
                k++;
                ui->UserLogs->setItem(i-1,k,new QTableWidgetItem(QString::fromStdString(names[i])));
                k+=3;
                ui->UserLogs->setItem(i-1,k,new QTableWidgetItem(temp));
                k++;
                if(isPrefered[i])
                    ui->UserLogs->setItem(i-1,k,new QTableWidgetItem("yes"));
                else
                    ui->UserLogs->setItem(i-1,k,new QTableWidgetItem("no"));
            }
        }
        else if(currentTab == "addLog")
        {
            Container_sales sales(fileNameString);
            sale = sales + sale;
            int *quantities = sale.getQuantities(), *IDs = sale.getMemberID();
            double *prices = sale.getPrices();
            std::string *items = sale.getItemList(), *dates = sale.getDatesPurchased();
            if(ui->SaleLogs->rowCount() != 0 )
                ui->SaleLogs->setRowCount(0);
            ui->SaleLogs->setRowCount(sale.list_size());
            for(int i = 0; i < sale.list_size(); i++)
            {
                int k = 0;
                QString temp;
                temp = QString::fromStdString(dates[i]);
                temp.insert(2, "/");
                temp.insert(5,"/");
                ui->SaleLogs->setItem(i,k,new QTableWidgetItem(QString::number(IDs[i])));
                k++;
                ui->SaleLogs->setItem(i,k,new QTableWidgetItem(QString::number(quantities[i])));
                k++;
                ui->SaleLogs->setItem(i,k,new QTableWidgetItem(QString::fromStdString(items[i])));
                k++;
                ui->SaleLogs->setItem(i,k,new QTableWidgetItem(QString::number(prices[i])));
                k++;
                ui->SaleLogs->setItem(i,k,new QTableWidgetItem(temp));
            }
        }
    }
}

void MainWindow::saveFile(QString currentTab)
{
    QString fileNames = QFileDialog::getSaveFileName(this, tr("Save File"),"/path/to/file/",tr("Text Files (*.txt)"));
}

void MainWindow::clearTable(QString tableName)
{
    if(tableName == "newLog")
    {
        sale.nukem();
        ui->SaleLogs->setRowCount(0);
    }
    else if (tableName == "newProfile")
    {
        member.nukem();
        ui->UserLogs->setRowCount(0);
    }
}

void MainWindow::addFunction(QString logType)
{
    if(logType == "addSale")
    {

    }
    else if(logType == "addUser")
    {
        bool isPref;
        QString ID = ui->UserIDText_2->toPlainText(),
                name = ui->NameText->toPlainText(),
                expDate = ui->ExpiresText->toPlainText();
        if(ui->isPrefered->isChecked())
            isPref = true;
        else
            isPref = false;
        member.addMember(name.toStdString(),ID.toInt(),isPref,expDate.toStdString());

        int k = 0, row = member.list_size();
        ui->UserLogs->setRowCount(row);
        expDate.insert(2, "/");
        expDate.insert(5,"/");
        ui->UserLogs->setItem(row-1,k,new QTableWidgetItem(ID));
        k++;
        ui->UserLogs->setItem(row-1,k,new QTableWidgetItem(name));
        k+=3;
        ui->UserLogs->setItem(row-1,k,new QTableWidgetItem(expDate));
        k++;
        if(isPref)
            ui->UserLogs->setItem(row-1,k,new QTableWidgetItem("yes"));
        else
            ui->UserLogs->setItem(row-1,k,new QTableWidgetItem("no"));

        ui->UserIDText_2->clear();
        ui->NameText->clear();
        ui->ExpiresText->clear();
        ui->isPrefered->setChecked(false);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
