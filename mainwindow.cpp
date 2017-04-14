#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "container.h"
#include "container_sales.h"
#include <QSignalMapper>
#include <QString>
#include <QDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->UserIDText->setValidator(new QIntValidator(0, 100000, this));
    ui->UserIDText_2->setValidator(new QIntValidator(0, 100000, this));
    ui->ProductText->setMaxLength(25);
    ui->NameText->setMaxLength(25);
    ui->AmountText->setValidator(new QIntValidator(0, 1000, this));
    ui->AmountText->setMaxLength(3);
    ui->DateText->setMaxLength(8);
    ui->DateText->setValidator(new QIntValidator(0, 100000000, this));
    ui->ExpiresText->setMaxLength(8);
    ui->DateText->setValidator(new QIntValidator(0, 100000000, this));
    ui->AmountText->setValidator(new QDoubleValidator(0.00, 10000.00, 2, this));
    ui->SearchIn->setMaxLength(25);
    ui->SearchOut->setReadOnly(true);
    ui->showRevenue->setReadOnly(true);

    QSignalMapper* signalMapper = new QSignalMapper(this);
    connect(ui->addLog, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->saveLog, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->addProfile, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->saveProfile, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->newLog, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->newProfile, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->addUser, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->addSale, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->January, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->February, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->March, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->April, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->May, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->June, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->July, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->August, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->September, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->October, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->November, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->December, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->TotalSpent, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->ProductList, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->Rebates, SIGNAL(triggered()), signalMapper, SLOT(map()));
    connect(ui->Search, SIGNAL(clicked()), this, SLOT(search()));
    connect(ui->TotalRevenue, SIGNAL(clicked()), this, SLOT(generateRevenue()));

    signalMapper->setMapping(ui->addLog, "addLog");
    signalMapper->setMapping(ui->saveLog, "saveLog");
    signalMapper->setMapping(ui->addProfile, "addProfile");
    signalMapper->setMapping(ui->saveProfile, "saveProfile");
    signalMapper->setMapping(ui->newLog, "newLog");
    signalMapper->setMapping(ui->newProfile, "newProfile");
    signalMapper->setMapping(ui->addUser, "addUser");
    signalMapper->setMapping(ui->addSale, "addSale");
    signalMapper->setMapping(ui->January, "1");
    signalMapper->setMapping(ui->February, "2");
    signalMapper->setMapping(ui->March, "3");
    signalMapper->setMapping(ui->April, "4");
    signalMapper->setMapping(ui->May, "5");
    signalMapper->setMapping(ui->June, "6");
    signalMapper->setMapping(ui->July, "7");
    signalMapper->setMapping(ui->August, "8");
    signalMapper->setMapping(ui->September, "9");
    signalMapper->setMapping(ui->October, "10");
    signalMapper->setMapping(ui->November, "11");
    signalMapper->setMapping(ui->December, "12");
    signalMapper->setMapping(ui->TotalSpent, "TotalSpent");
    signalMapper->setMapping(ui->ProductList, "ProductList");
    signalMapper->setMapping(ui->Rebates, "Rebates");

    connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(onAction(QString)));

    ui->SaleLogs->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->UserLogs->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->ReportLogs->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->SaleLogs->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->UserLogs->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->ReportLogs->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->SaleLogs->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->UserLogs->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->ReportLogs->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
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
 else if(action == "TotalSpent")
     Filter(action);
 else if(action == "ProductList")
     Filter(action);
 else if(action == "Rebates")
     Filter(action);
 else if(action.toInt() >= 1 && action.toInt() <= 12)
     Filter(action);
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
            for(int i = 1; i < member.list_size()+1; i++)
            {
                int k = 0;
                QString temp;
                temp = QString::fromStdString(dates[i]);
                temp.insert(2, "/");
                temp.insert(5,"/");
                ui->UserLogs->setItem(i-1,k,new QTableWidgetItem(QString::number(IDs[i])));
                k++;
                ui->UserLogs->setItem(i-1,k,new QTableWidgetItem(QString::fromStdString(names[i-1])));
                k++;
                ui->UserLogs->setItem(i-1,k,new QTableWidgetItem(QString::number(sale.getTotSpentBy(IDs[i]))));
                k++;
                ui->UserLogs->setItem(i-1,k,new QTableWidgetItem(QString::number(sale.rebate(IDs[i]))));
                k++;
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

void MainWindow::Filter(QString filter)
{
    if(filter == "TotalSpent")
    {
        int *IDs = sale.memIDSort();
        ui->ReportLogs->setRowCount(0);
        ui->ReportLogs->setHorizontalHeaderLabels({"","","",""});
        ui->ReportLogs->setHorizontalHeaderLabels({"ID","Total Purchases"});
        ui->ReportLogs->setRowCount(IDs[0]-1);

        for(int i = 1; i < IDs[0]; i++)
        {
             ui->ReportLogs->setItem(i-1,0,new QTableWidgetItem(QString::number(IDs[i]))); //column 1 is IDs (sorted). Type=int
             ui->ReportLogs->setItem(i-1,1,new QTableWidgetItem(QString::number(sale.getTotalPurchased(IDs[i])))); // column 2 is total $ purchased. Type=double
        }
    }
    else if(filter == "ProductList")
    {
        std::string* sorted_item = sale.itemSort() ;
        ui->ReportLogs->setRowCount(0);
        ui->ReportLogs->setHorizontalHeaderLabels({"","","",""});
        QString asdf=QString::fromStdString(sorted_item[0]);
        int index=asdf.toInt();
        ui->ReportLogs->setRowCount(index-1);
        ui->ReportLogs->setHorizontalHeaderLabels({"Product", "Quantity Sold"});


        for(int i = 1; i < index; i++)
        {
            ui->ReportLogs->setItem(i-1,0,new QTableWidgetItem(QString::fromStdString(sorted_item[i]))); //column 1=item name. type=string
            ui->ReportLogs->setItem(i-1,1,new QTableWidgetItem(QString::number(sale.getSpecificQSold(sorted_item[i])))); //column 2=quantity sold. type=int
        }
    }
    else if(filter == "Rebates")
    {
        int* sorted_ID = member.sortbytype();
        ui->ReportLogs->setRowCount(0);
        ui->ReportLogs->setHorizontalHeaderLabels({"","","",""});
        ui->ReportLogs->setRowCount(sorted_ID[0]-1);
        ui->ReportLogs->setHorizontalHeaderLabels({"ID", "Rebate", "Prefered?", "Recommendation"});

        for(int i = 1; i < sorted_ID[0]; i++)
        {
            ui->ReportLogs->setItem(i-1,0,new QTableWidgetItem(QString::number(sorted_ID[i]))); //column 1=ID number, type=int
            ui->ReportLogs->setItem(i-1,1,new QTableWidgetItem(QString::number(sale.rebate(sorted_ID[i])))); //column 2=$ rebated, type=double
            if(member.isPref(sorted_ID[i]))
                 ui->ReportLogs->setItem(i-1,2,new QTableWidgetItem("yes"));
            else
                 ui->ReportLogs->setItem(i-1,2,new QTableWidgetItem("no"));
            if(sale.basic2pref(sorted_ID[i]))
                 ui->ReportLogs->setItem(i-1,3,new QTableWidgetItem("prefered"));
            else
                 ui->ReportLogs->setItem(i-1,3,new QTableWidgetItem("basic"));
             //keep this--skipping every other seems to be necessary in this case
        }
    }
    else if(filter.toInt() >= 1 && filter.toInt() <= 12)
    {
        int exp_month=filter.toInt(); //1=jan, 2=feb...etc
        int* exp_mem = member.showExpiringMem(exp_month);
        ui->ReportLogs->setRowCount(0);
        ui->ReportLogs->setHorizontalHeaderLabels({"","","",""});
        ui->ReportLogs->setRowCount(exp_mem[0]);
        ui->ReportLogs->setHorizontalHeaderLabels({"ID","Balance"});

        for(int i = 1; i < exp_mem[0]; i++)
        {
            ui->ReportLogs->setItem(i-1,0,new QTableWidgetItem(QString::number(exp_mem[i])));  //column 1=member ID, type=int
            ui->ReportLogs->setItem(i-1,1,new QTableWidgetItem(QString::number(sale.getTotSpentBy(exp_mem[i])))); //column 2=total $ due by member, type=double
        }
    }
}

void MainWindow::saveFile(QString currentTab)
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),"/path/to/file/",tr("Text Files (*.txt)"));
    if(currentTab == "saveLog")
        sale.save(fileName.toStdString());
    else if(currentTab == "saveProfile")
        member.save(fileName.toStdString());
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
        QString ID = ui->UserIDText->text(),
                product = ui->ProductText->text(),
                amount = ui->AmountText->text(),
                salesPrice = QString::number(ui->SalesPriceText->value()),
                date = ui->DateText->text();
        if(member.IDtoName(ID.toInt()) == "INVALID ID")
        {
            QMessageBox Msgbox;
                Msgbox.setText("User Not Found!");
                Msgbox.exec();
        }
        else
        {
            sale.add_sale(date.toStdString(),ID.toInt(),product.toStdString(),salesPrice.toDouble(),amount.toInt());
            int k = 0, row = ui->SaleLogs->rowCount();
            ui->SaleLogs->setRowCount(row+1);
            date.insert(2, "/");
            date.insert(5,"/");
            ui->SaleLogs->setItem(row,k,new QTableWidgetItem(ID));
            k++;
            ui->SaleLogs->setItem(row,k,new QTableWidgetItem(amount));
            k++;
            ui->SaleLogs->setItem(row,k,new QTableWidgetItem(product));
            k++;
            ui->SaleLogs->setItem(row,k,new QTableWidgetItem(salesPrice));
            k++;
            ui->SaleLogs->setItem(row,k,new QTableWidgetItem(date));
            ui->UserIDText->clear();
            ui->ProductText->clear();
            ui->AmountText->clear();
            ui->SalesPriceText->clear();
            ui->DateText->clear();
        }


    }
    else if(logType == "addUser")
    {
        bool isPref;
        QString ID = ui->UserIDText_2->text(),
                name = ui->NameText->text(),
                expDate = ui->ExpiresText->text();
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

void MainWindow::search()
{
    QString product = ui->SearchIn->text();
    ui->SearchOut->setText(QString::number(sale.getSpecificQSold(product.toStdString())));
}

void MainWindow::generateRevenue()
{
    ui->showRevenue->setText(QString::number(sale.getTotalRev()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
