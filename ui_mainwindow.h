/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *January;
    QAction *February;
    QAction *March;
    QAction *April;
    QAction *May;
    QAction *June;
    QAction *July;
    QAction *August;
    QAction *September;
    QAction *October;
    QAction *November;
    QAction *December;
    QAction *actionSales_Log;
    QAction *NewMemberProfile;
    QAction *OpenSalesLog;
    QAction *OpenMemberProfile;
    QAction *SaveSalesLog;
    QAction *SaveMemberProfile;
    QAction *NewSalesLog;
    QAction *ProductList;
    QAction *TotalSpent;
    QAction *Rebates;
    QWidget *centralWidget;
    QTabWidget *Reports;
    QWidget *tab;
    QPushButton *addSale;
    QLabel *UserID;
    QLabel *Product;
    QLabel *SalesPrice;
    QLabel *Amount;
    QLabel *Date;
    QPushButton *newLog;
    QPushButton *addLog;
    QPushButton *saveLog;
    QTableWidget *SaleLogs;
    QLabel *label;
    QLineEdit *UserIDText;
    QLineEdit *AmountText;
    QLineEdit *ProductText;
    QLineEdit *DateText;
    QDoubleSpinBox *SalesPriceText;
    QWidget *tab_2;
    QTableWidget *UserLogs;
    QLabel *UserID_2;
    QLabel *Name;
    QLabel *Expires;
    QCheckBox *isPrefered;
    QPushButton *addUser;
    QPushButton *addProfile;
    QPushButton *newProfile;
    QPushButton *saveProfile;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *UserIDText_2;
    QLineEdit *ExpiresText;
    QLineEdit *NameText;
    QWidget *tab_3;
    QTableWidget *ReportLogs;
    QLineEdit *SearchIn;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *SearchOut;
    QLabel *label_6;
    QPushButton *Search;
    QLineEdit *showRevenue;
    QPushButton *TotalRevenue;
    QMenuBar *menuBar;
    QMenu *menuFilter;
    QMenu *ByMonth;
    QMenu *menuFile;
    QMenu *menuNew;
    QMenu *menuOpen;
    QMenu *menuSave;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(755, 486);
        MainWindow->setMinimumSize(QSize(755, 486));
        MainWindow->setMaximumSize(QSize(755, 486));
        January = new QAction(MainWindow);
        January->setObjectName(QStringLiteral("January"));
        February = new QAction(MainWindow);
        February->setObjectName(QStringLiteral("February"));
        March = new QAction(MainWindow);
        March->setObjectName(QStringLiteral("March"));
        April = new QAction(MainWindow);
        April->setObjectName(QStringLiteral("April"));
        May = new QAction(MainWindow);
        May->setObjectName(QStringLiteral("May"));
        June = new QAction(MainWindow);
        June->setObjectName(QStringLiteral("June"));
        July = new QAction(MainWindow);
        July->setObjectName(QStringLiteral("July"));
        August = new QAction(MainWindow);
        August->setObjectName(QStringLiteral("August"));
        September = new QAction(MainWindow);
        September->setObjectName(QStringLiteral("September"));
        October = new QAction(MainWindow);
        October->setObjectName(QStringLiteral("October"));
        November = new QAction(MainWindow);
        November->setObjectName(QStringLiteral("November"));
        December = new QAction(MainWindow);
        December->setObjectName(QStringLiteral("December"));
        actionSales_Log = new QAction(MainWindow);
        actionSales_Log->setObjectName(QStringLiteral("actionSales_Log"));
        NewMemberProfile = new QAction(MainWindow);
        NewMemberProfile->setObjectName(QStringLiteral("NewMemberProfile"));
        OpenSalesLog = new QAction(MainWindow);
        OpenSalesLog->setObjectName(QStringLiteral("OpenSalesLog"));
        OpenMemberProfile = new QAction(MainWindow);
        OpenMemberProfile->setObjectName(QStringLiteral("OpenMemberProfile"));
        SaveSalesLog = new QAction(MainWindow);
        SaveSalesLog->setObjectName(QStringLiteral("SaveSalesLog"));
        SaveMemberProfile = new QAction(MainWindow);
        SaveMemberProfile->setObjectName(QStringLiteral("SaveMemberProfile"));
        NewSalesLog = new QAction(MainWindow);
        NewSalesLog->setObjectName(QStringLiteral("NewSalesLog"));
        ProductList = new QAction(MainWindow);
        ProductList->setObjectName(QStringLiteral("ProductList"));
        TotalSpent = new QAction(MainWindow);
        TotalSpent->setObjectName(QStringLiteral("TotalSpent"));
        Rebates = new QAction(MainWindow);
        Rebates->setObjectName(QStringLiteral("Rebates"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(750, 465));
        centralWidget->setMaximumSize(QSize(750, 465));
        Reports = new QTabWidget(centralWidget);
        Reports->setObjectName(QStringLiteral("Reports"));
        Reports->setEnabled(true);
        Reports->setGeometry(QRect(0, 0, 841, 471));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        addSale = new QPushButton(tab);
        addSale->setObjectName(QStringLiteral("addSale"));
        addSale->setGeometry(QRect(270, 390, 75, 23));
        UserID = new QLabel(tab);
        UserID->setObjectName(QStringLiteral("UserID"));
        UserID->setGeometry(QRect(10, 350, 47, 16));
        Product = new QLabel(tab);
        Product->setObjectName(QStringLiteral("Product"));
        Product->setGeometry(QRect(10, 386, 41, 20));
        SalesPrice = new QLabel(tab);
        SalesPrice->setObjectName(QStringLiteral("SalesPrice"));
        SalesPrice->setGeometry(QRect(150, 380, 31, 31));
        Amount = new QLabel(tab);
        Amount->setObjectName(QStringLiteral("Amount"));
        Amount->setGeometry(QRect(130, 350, 47, 16));
        Date = new QLabel(tab);
        Date->setObjectName(QStringLiteral("Date"));
        Date->setGeometry(QRect(250, 350, 51, 16));
        newLog = new QPushButton(tab);
        newLog->setObjectName(QStringLiteral("newLog"));
        newLog->setGeometry(QRect(670, 350, 75, 23));
        addLog = new QPushButton(tab);
        addLog->setObjectName(QStringLiteral("addLog"));
        addLog->setGeometry(QRect(670, 380, 75, 23));
        saveLog = new QPushButton(tab);
        saveLog->setObjectName(QStringLiteral("saveLog"));
        saveLog->setGeometry(QRect(670, 410, 75, 23));
        SaleLogs = new QTableWidget(tab);
        if (SaleLogs->columnCount() < 5)
            SaleLogs->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        SaleLogs->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        SaleLogs->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        SaleLogs->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        SaleLogs->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        SaleLogs->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        SaleLogs->setObjectName(QStringLiteral("SaleLogs"));
        SaleLogs->setEnabled(true);
        SaleLogs->setGeometry(QRect(20, 10, 711, 331));
        SaleLogs->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SaleLogs->setSortingEnabled(true);
        SaleLogs->setRowCount(0);
        SaleLogs->setColumnCount(5);
        SaleLogs->horizontalHeader()->setDefaultSectionSize(141);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 370, 47, 13));
        QFont font;
        font.setPointSize(6);
        label->setFont(font);
        UserIDText = new QLineEdit(tab);
        UserIDText->setObjectName(QStringLiteral("UserIDText"));
        UserIDText->setGeometry(QRect(50, 350, 71, 21));
        AmountText = new QLineEdit(tab);
        AmountText->setObjectName(QStringLiteral("AmountText"));
        AmountText->setGeometry(QRect(180, 350, 71, 21));
        ProductText = new QLineEdit(tab);
        ProductText->setObjectName(QStringLiteral("ProductText"));
        ProductText->setGeometry(QRect(50, 390, 71, 21));
        DateText = new QLineEdit(tab);
        DateText->setObjectName(QStringLiteral("DateText"));
        DateText->setGeometry(QRect(310, 350, 71, 21));
        SalesPriceText = new QDoubleSpinBox(tab);
        SalesPriceText->setObjectName(QStringLiteral("SalesPriceText"));
        SalesPriceText->setGeometry(QRect(180, 390, 71, 21));
        Reports->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        UserLogs = new QTableWidget(tab_2);
        if (UserLogs->columnCount() < 6)
            UserLogs->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        UserLogs->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        UserLogs->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        UserLogs->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        UserLogs->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        UserLogs->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        UserLogs->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        UserLogs->setObjectName(QStringLiteral("UserLogs"));
        UserLogs->setEnabled(true);
        UserLogs->setGeometry(QRect(20, 10, 711, 331));
        UserLogs->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        UserLogs->setSortingEnabled(true);
        UserLogs->setRowCount(0);
        UserLogs->setColumnCount(6);
        UserLogs->horizontalHeader()->setDefaultSectionSize(118);
        UserID_2 = new QLabel(tab_2);
        UserID_2->setObjectName(QStringLiteral("UserID_2"));
        UserID_2->setGeometry(QRect(10, 350, 47, 16));
        Name = new QLabel(tab_2);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(10, 390, 47, 13));
        Expires = new QLabel(tab_2);
        Expires->setObjectName(QStringLiteral("Expires"));
        Expires->setGeometry(QRect(130, 340, 41, 31));
        isPrefered = new QCheckBox(tab_2);
        isPrefered->setObjectName(QStringLiteral("isPrefered"));
        isPrefered->setGeometry(QRect(130, 390, 121, 31));
        addUser = new QPushButton(tab_2);
        addUser->setObjectName(QStringLiteral("addUser"));
        addUser->setGeometry(QRect(270, 390, 75, 23));
        addProfile = new QPushButton(tab_2);
        addProfile->setObjectName(QStringLiteral("addProfile"));
        addProfile->setGeometry(QRect(670, 380, 75, 23));
        newProfile = new QPushButton(tab_2);
        newProfile->setObjectName(QStringLiteral("newProfile"));
        newProfile->setGeometry(QRect(670, 350, 75, 23));
        saveProfile = new QPushButton(tab_2);
        saveProfile->setObjectName(QStringLiteral("saveProfile"));
        saveProfile->setGeometry(QRect(670, 410, 75, 23));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 370, 51, 16));
        label_2->setFont(font);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 420, 221, 31));
        QFont font1;
        font1.setItalic(true);
        label_3->setFont(font1);
        UserIDText_2 = new QLineEdit(tab_2);
        UserIDText_2->setObjectName(QStringLiteral("UserIDText_2"));
        UserIDText_2->setGeometry(QRect(50, 350, 71, 21));
        ExpiresText = new QLineEdit(tab_2);
        ExpiresText->setObjectName(QStringLiteral("ExpiresText"));
        ExpiresText->setGeometry(QRect(180, 350, 71, 21));
        NameText = new QLineEdit(tab_2);
        NameText->setObjectName(QStringLiteral("NameText"));
        NameText->setGeometry(QRect(50, 390, 71, 21));
        Reports->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        ReportLogs = new QTableWidget(tab_3);
        if (ReportLogs->columnCount() < 6)
            ReportLogs->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ReportLogs->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        ReportLogs->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        ReportLogs->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        ReportLogs->setHorizontalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        ReportLogs->setHorizontalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        ReportLogs->setHorizontalHeaderItem(5, __qtablewidgetitem16);
        ReportLogs->setObjectName(QStringLiteral("ReportLogs"));
        ReportLogs->setEnabled(true);
        ReportLogs->setGeometry(QRect(20, 10, 711, 331));
        ReportLogs->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ReportLogs->setSortingEnabled(true);
        ReportLogs->setRowCount(0);
        ReportLogs->setColumnCount(6);
        ReportLogs->horizontalHeader()->setDefaultSectionSize(118);
        SearchIn = new QLineEdit(tab_3);
        SearchIn->setObjectName(QStringLiteral("SearchIn"));
        SearchIn->setGeometry(QRect(20, 380, 113, 20));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 360, 81, 20));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 420, 81, 20));
        label_5->setFont(font);
        SearchOut = new QLineEdit(tab_3);
        SearchOut->setObjectName(QStringLiteral("SearchOut"));
        SearchOut->setGeometry(QRect(20, 420, 113, 20));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 400, 101, 16));
        Search = new QPushButton(tab_3);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setGeometry(QRect(150, 400, 81, 23));
        showRevenue = new QLineEdit(tab_3);
        showRevenue->setObjectName(QStringLiteral("showRevenue"));
        showRevenue->setGeometry(QRect(620, 380, 113, 20));
        TotalRevenue = new QPushButton(tab_3);
        TotalRevenue->setObjectName(QStringLiteral("TotalRevenue"));
        TotalRevenue->setGeometry(QRect(630, 410, 91, 23));
        Reports->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 755, 21));
        menuFilter = new QMenu(menuBar);
        menuFilter->setObjectName(QStringLiteral("menuFilter"));
        ByMonth = new QMenu(menuFilter);
        ByMonth->setObjectName(QStringLiteral("ByMonth"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        menuSave = new QMenu(menuFile);
        menuSave->setObjectName(QStringLiteral("menuSave"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuFilter->menuAction());
        menuFilter->addAction(ByMonth->menuAction());
        menuFilter->addSeparator();
        menuFilter->addAction(TotalSpent);
        menuFilter->addAction(ProductList);
        menuFilter->addAction(Rebates);
        ByMonth->addAction(January);
        ByMonth->addAction(February);
        ByMonth->addAction(March);
        ByMonth->addAction(April);
        ByMonth->addAction(May);
        ByMonth->addAction(June);
        ByMonth->addAction(July);
        ByMonth->addAction(August);
        ByMonth->addAction(September);
        ByMonth->addAction(October);
        ByMonth->addAction(November);
        ByMonth->addAction(December);
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(menuSave->menuAction());
        menuNew->addAction(NewSalesLog);
        menuNew->addAction(NewMemberProfile);
        menuOpen->addAction(OpenSalesLog);
        menuOpen->addAction(OpenMemberProfile);
        menuSave->addAction(SaveSalesLog);
        menuSave->addAction(SaveMemberProfile);

        retranslateUi(MainWindow);
        QObject::connect(NewSalesLog, SIGNAL(triggered()), newLog, SLOT(click()));
        QObject::connect(NewMemberProfile, SIGNAL(triggered()), newProfile, SLOT(click()));
        QObject::connect(OpenSalesLog, SIGNAL(triggered()), addLog, SLOT(click()));
        QObject::connect(OpenMemberProfile, SIGNAL(triggered()), addProfile, SLOT(click()));
        QObject::connect(SaveSalesLog, SIGNAL(triggered()), saveLog, SLOT(click()));
        QObject::connect(SaveMemberProfile, SIGNAL(triggered()), saveProfile, SLOT(click()));

        Reports->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        January->setText(QApplication::translate("MainWindow", "January", 0));
        February->setText(QApplication::translate("MainWindow", "February", 0));
        March->setText(QApplication::translate("MainWindow", "March", 0));
        April->setText(QApplication::translate("MainWindow", "April", 0));
        May->setText(QApplication::translate("MainWindow", "May", 0));
        June->setText(QApplication::translate("MainWindow", "June", 0));
        July->setText(QApplication::translate("MainWindow", "July", 0));
        August->setText(QApplication::translate("MainWindow", "August", 0));
        September->setText(QApplication::translate("MainWindow", "September", 0));
        October->setText(QApplication::translate("MainWindow", "October", 0));
        November->setText(QApplication::translate("MainWindow", "November", 0));
        December->setText(QApplication::translate("MainWindow", "December", 0));
        actionSales_Log->setText(QApplication::translate("MainWindow", "Sales Log", 0));
        NewMemberProfile->setText(QApplication::translate("MainWindow", "Member Profile", 0));
        OpenSalesLog->setText(QApplication::translate("MainWindow", "Sales Log", 0));
        OpenMemberProfile->setText(QApplication::translate("MainWindow", "Member Profile", 0));
        SaveSalesLog->setText(QApplication::translate("MainWindow", "Sales Log", 0));
        SaveMemberProfile->setText(QApplication::translate("MainWindow", "Member Profile", 0));
        NewSalesLog->setText(QApplication::translate("MainWindow", "Sales Log", 0));
        ProductList->setText(QApplication::translate("MainWindow", "Sorted Catalog", 0));
        TotalSpent->setText(QApplication::translate("MainWindow", "By Total Spent", 0));
        Rebates->setText(QApplication::translate("MainWindow", "Member Rebates", 0));
        addSale->setText(QApplication::translate("MainWindow", "Add Sale", 0));
        UserID->setText(QApplication::translate("MainWindow", "User ID", 0));
        Product->setText(QApplication::translate("MainWindow", "Product", 0));
        SalesPrice->setText(QApplication::translate("MainWindow", "Price", 0));
        Amount->setText(QApplication::translate("MainWindow", "Quantity", 0));
        Date->setText(QApplication::translate("MainWindow", "       Date", 0));
        newLog->setText(QApplication::translate("MainWindow", "New Log", 0));
        addLog->setText(QApplication::translate("MainWindow", "Add Log", 0));
        saveLog->setText(QApplication::translate("MainWindow", "Save Log", 0));
        QTableWidgetItem *___qtablewidgetitem = SaleLogs->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "User ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = SaleLogs->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Quantity", 0));
        QTableWidgetItem *___qtablewidgetitem2 = SaleLogs->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Product", 0));
        QTableWidgetItem *___qtablewidgetitem3 = SaleLogs->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Sales Price", 0));
        QTableWidgetItem *___qtablewidgetitem4 = SaleLogs->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Date", 0));
        label->setText(QApplication::translate("MainWindow", "DDMMYYYY", 0));
        Reports->setTabText(Reports->indexOf(tab), QApplication::translate("MainWindow", "Sales", 0));
        QTableWidgetItem *___qtablewidgetitem5 = UserLogs->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "User ID", 0));
        QTableWidgetItem *___qtablewidgetitem6 = UserLogs->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem7 = UserLogs->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Total Sales", 0));
        QTableWidgetItem *___qtablewidgetitem8 = UserLogs->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Rebate", 0));
        QTableWidgetItem *___qtablewidgetitem9 = UserLogs->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Expires", 0));
        QTableWidgetItem *___qtablewidgetitem10 = UserLogs->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Prefered?", 0));
        UserID_2->setText(QApplication::translate("MainWindow", "User ID", 0));
        Name->setText(QApplication::translate("MainWindow", "Name", 0));
        Expires->setText(QApplication::translate("MainWindow", "Expires", 0));
        isPrefered->setText(QApplication::translate("MainWindow", "Prefered Member?", 0));
        addUser->setText(QApplication::translate("MainWindow", "Add User", 0));
        addProfile->setText(QApplication::translate("MainWindow", "Add Profile", 0));
        newProfile->setText(QApplication::translate("MainWindow", "New Profile", 0));
        saveProfile->setText(QApplication::translate("MainWindow", "Save Profile", 0));
        label_2->setText(QApplication::translate("MainWindow", "DDMMYYYY", 0));
        label_3->setText(QApplication::translate("MainWindow", "Make Sure To Add Sales Logs First!", 0));
        Reports->setTabText(Reports->indexOf(tab_2), QApplication::translate("MainWindow", "Members", 0));
        label_4->setText(QApplication::translate("MainWindow", "Product Name", 0));
        label_5->setText(QApplication::translate("MainWindow", "Quick Search", 0));
        label_6->setText(QApplication::translate("MainWindow", "Quantity Sold", 0));
        Search->setText(QApplication::translate("MainWindow", "Search", 0));
        TotalRevenue->setText(QApplication::translate("MainWindow", "Total Revenue", 0));
        Reports->setTabText(Reports->indexOf(tab_3), QApplication::translate("MainWindow", "Reports", 0));
        menuFilter->setTitle(QApplication::translate("MainWindow", "View", 0));
        ByMonth->setTitle(QApplication::translate("MainWindow", "By Month", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", 0));
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", 0));
        menuSave->setTitle(QApplication::translate("MainWindow", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
