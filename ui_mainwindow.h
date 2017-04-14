/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionJanuary;
    QAction *actionFebruary;
    QAction *actionMarch;
    QAction *actionApril;
    QAction *actionMay;
    QAction *actionJune;
    QAction *actionJuly;
    QAction *actionAugust;
    QAction *actionSeptember;
    QAction *actionOctober;
    QAction *actionNovember;
    QAction *actionDecember;
    QAction *actionSales_Log;
    QAction *actionMember_Profile;
    QAction *actionSales_Log_2;
    QAction *actionMember_Profile_2;
    QAction *actionSales_Log_3;
    QAction *actionMember_Profile_3;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *addSale;
    QLabel *UserID;
    QLabel *Product;
    QLabel *SalesPrice;
    QLabel *Amount;
    QLabel *Date;
    QPlainTextEdit *UserIDText;
    QPlainTextEdit *DateText;
    QPlainTextEdit *SalesPriceText;
    QPlainTextEdit *AmountText;
    QPlainTextEdit *ProductText;
    QPushButton *newLog;
    QPushButton *addLog;
    QPushButton *saveLog;
    QTableWidget *SaleLogs;
    QWidget *tab_2;
    QTableWidget *UserLogs;
    QLabel *UserID_2;
    QLabel *Name;
    QLabel *Expires;
    QPlainTextEdit *NameText;
    QPlainTextEdit *ExpiresText;
    QPlainTextEdit *UserIDText_2;
    QCheckBox *isPrefered;
    QPushButton *addUser;
    QPushButton *addProfile;
    QPushButton *newProfile;
    QPushButton *saveProfile;
    QMenuBar *menuBar;
    QMenu *menuFilter;
    QMenu *menuBy_Month;
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
        actionJanuary = new QAction(MainWindow);
        actionJanuary->setObjectName(QStringLiteral("actionJanuary"));
        actionFebruary = new QAction(MainWindow);
        actionFebruary->setObjectName(QStringLiteral("actionFebruary"));
        actionMarch = new QAction(MainWindow);
        actionMarch->setObjectName(QStringLiteral("actionMarch"));
        actionApril = new QAction(MainWindow);
        actionApril->setObjectName(QStringLiteral("actionApril"));
        actionMay = new QAction(MainWindow);
        actionMay->setObjectName(QStringLiteral("actionMay"));
        actionJune = new QAction(MainWindow);
        actionJune->setObjectName(QStringLiteral("actionJune"));
        actionJuly = new QAction(MainWindow);
        actionJuly->setObjectName(QStringLiteral("actionJuly"));
        actionAugust = new QAction(MainWindow);
        actionAugust->setObjectName(QStringLiteral("actionAugust"));
        actionSeptember = new QAction(MainWindow);
        actionSeptember->setObjectName(QStringLiteral("actionSeptember"));
        actionOctober = new QAction(MainWindow);
        actionOctober->setObjectName(QStringLiteral("actionOctober"));
        actionNovember = new QAction(MainWindow);
        actionNovember->setObjectName(QStringLiteral("actionNovember"));
        actionDecember = new QAction(MainWindow);
        actionDecember->setObjectName(QStringLiteral("actionDecember"));
        actionSales_Log = new QAction(MainWindow);
        actionSales_Log->setObjectName(QStringLiteral("actionSales_Log"));
        actionMember_Profile = new QAction(MainWindow);
        actionMember_Profile->setObjectName(QStringLiteral("actionMember_Profile"));
        actionSales_Log_2 = new QAction(MainWindow);
        actionSales_Log_2->setObjectName(QStringLiteral("actionSales_Log_2"));
        actionMember_Profile_2 = new QAction(MainWindow);
        actionMember_Profile_2->setObjectName(QStringLiteral("actionMember_Profile_2"));
        actionSales_Log_3 = new QAction(MainWindow);
        actionSales_Log_3->setObjectName(QStringLiteral("actionSales_Log_3"));
        actionMember_Profile_3 = new QAction(MainWindow);
        actionMember_Profile_3->setObjectName(QStringLiteral("actionMember_Profile_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(750, 465));
        centralWidget->setMaximumSize(QSize(750, 465));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 841, 471));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        addSale = new QPushButton(tab);
        addSale->setObjectName(QStringLiteral("addSale"));
        addSale->setGeometry(QRect(270, 390, 75, 23));
        UserID = new QLabel(tab);
        UserID->setObjectName(QStringLiteral("UserID"));
        UserID->setGeometry(QRect(10, 350, 47, 13));
        Product = new QLabel(tab);
        Product->setObjectName(QStringLiteral("Product"));
        Product->setGeometry(QRect(10, 390, 47, 13));
        SalesPrice = new QLabel(tab);
        SalesPrice->setObjectName(QStringLiteral("SalesPrice"));
        SalesPrice->setGeometry(QRect(120, 385, 61, 21));
        Amount = new QLabel(tab);
        Amount->setObjectName(QStringLiteral("Amount"));
        Amount->setGeometry(QRect(130, 350, 47, 13));
        Date = new QLabel(tab);
        Date->setObjectName(QStringLiteral("Date"));
        Date->setGeometry(QRect(250, 350, 51, 16));
        UserIDText = new QPlainTextEdit(tab);
        UserIDText->setObjectName(QStringLiteral("UserIDText"));
        UserIDText->setGeometry(QRect(50, 350, 61, 31));
        DateText = new QPlainTextEdit(tab);
        DateText->setObjectName(QStringLiteral("DateText"));
        DateText->setGeometry(QRect(310, 350, 61, 31));
        SalesPriceText = new QPlainTextEdit(tab);
        SalesPriceText->setObjectName(QStringLiteral("SalesPriceText"));
        SalesPriceText->setGeometry(QRect(180, 390, 61, 31));
        AmountText = new QPlainTextEdit(tab);
        AmountText->setObjectName(QStringLiteral("AmountText"));
        AmountText->setGeometry(QRect(180, 350, 61, 31));
        ProductText = new QPlainTextEdit(tab);
        ProductText->setObjectName(QStringLiteral("ProductText"));
        ProductText->setGeometry(QRect(50, 390, 61, 31));
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
        SaleLogs->setGeometry(QRect(0, 0, 711, 331));
        SaleLogs->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SaleLogs->setSortingEnabled(true);
        SaleLogs->setRowCount(0);
        SaleLogs->setColumnCount(5);
        SaleLogs->horizontalHeader()->setDefaultSectionSize(141);
        tabWidget->addTab(tab, QString());
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
        UserID_2->setGeometry(QRect(10, 350, 47, 13));
        Name = new QLabel(tab_2);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(10, 390, 47, 13));
        Expires = new QLabel(tab_2);
        Expires->setObjectName(QStringLiteral("Expires"));
        Expires->setGeometry(QRect(130, 340, 61, 31));
        NameText = new QPlainTextEdit(tab_2);
        NameText->setObjectName(QStringLiteral("NameText"));
        NameText->setGeometry(QRect(50, 390, 61, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(NameText->sizePolicy().hasHeightForWidth());
        NameText->setSizePolicy(sizePolicy1);
        NameText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ExpiresText = new QPlainTextEdit(tab_2);
        ExpiresText->setObjectName(QStringLiteral("ExpiresText"));
        ExpiresText->setGeometry(QRect(180, 350, 61, 31));
        sizePolicy1.setHeightForWidth(ExpiresText->sizePolicy().hasHeightForWidth());
        ExpiresText->setSizePolicy(sizePolicy1);
        ExpiresText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        UserIDText_2 = new QPlainTextEdit(tab_2);
        UserIDText_2->setObjectName(QStringLiteral("UserIDText_2"));
        UserIDText_2->setGeometry(QRect(50, 350, 61, 31));
        sizePolicy1.setHeightForWidth(UserIDText_2->sizePolicy().hasHeightForWidth());
        UserIDText_2->setSizePolicy(sizePolicy1);
        UserIDText_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
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
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 755, 21));
        menuFilter = new QMenu(menuBar);
        menuFilter->setObjectName(QStringLiteral("menuFilter"));
        menuBy_Month = new QMenu(menuFilter);
        menuBy_Month->setObjectName(QStringLiteral("menuBy_Month"));
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
        menuFilter->addAction(menuBy_Month->menuAction());
        menuBy_Month->addAction(actionJanuary);
        menuBy_Month->addAction(actionFebruary);
        menuBy_Month->addAction(actionMarch);
        menuBy_Month->addAction(actionApril);
        menuBy_Month->addAction(actionMay);
        menuBy_Month->addAction(actionJune);
        menuBy_Month->addAction(actionJuly);
        menuBy_Month->addAction(actionAugust);
        menuBy_Month->addAction(actionSeptember);
        menuBy_Month->addAction(actionOctober);
        menuBy_Month->addAction(actionNovember);
        menuBy_Month->addAction(actionDecember);
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(menuSave->menuAction());
        menuNew->addAction(actionSales_Log);
        menuNew->addAction(actionMember_Profile);
        menuOpen->addAction(actionSales_Log_2);
        menuOpen->addAction(actionMember_Profile_2);
        menuSave->addAction(actionSales_Log_3);
        menuSave->addAction(actionMember_Profile_3);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionJanuary->setText(QApplication::translate("MainWindow", "January", 0));
        actionFebruary->setText(QApplication::translate("MainWindow", "February", 0));
        actionMarch->setText(QApplication::translate("MainWindow", "March", 0));
        actionApril->setText(QApplication::translate("MainWindow", "April", 0));
        actionMay->setText(QApplication::translate("MainWindow", "May", 0));
        actionJune->setText(QApplication::translate("MainWindow", "June", 0));
        actionJuly->setText(QApplication::translate("MainWindow", "July", 0));
        actionAugust->setText(QApplication::translate("MainWindow", "August", 0));
        actionSeptember->setText(QApplication::translate("MainWindow", "September", 0));
        actionOctober->setText(QApplication::translate("MainWindow", "October", 0));
        actionNovember->setText(QApplication::translate("MainWindow", "November", 0));
        actionDecember->setText(QApplication::translate("MainWindow", "December", 0));
        actionSales_Log->setText(QApplication::translate("MainWindow", "Sales Log", 0));
        actionMember_Profile->setText(QApplication::translate("MainWindow", "Member Profile", 0));
        actionSales_Log_2->setText(QApplication::translate("MainWindow", "Sales Log", 0));
        actionMember_Profile_2->setText(QApplication::translate("MainWindow", "Member Profile", 0));
        actionSales_Log_3->setText(QApplication::translate("MainWindow", "Sales Log", 0));
        actionMember_Profile_3->setText(QApplication::translate("MainWindow", "Member Profile", 0));
        addSale->setText(QApplication::translate("MainWindow", "Add Sale", 0));
        UserID->setText(QApplication::translate("MainWindow", "User ID", 0));
        Product->setText(QApplication::translate("MainWindow", "Product", 0));
        SalesPrice->setText(QApplication::translate("MainWindow", "Sales Price", 0));
        Amount->setText(QApplication::translate("MainWindow", "Quantity", 0));
        Date->setText(QApplication::translate("MainWindow", "       Date", 0));
        newLog->setText(QApplication::translate("MainWindow", "New Log", 0));
        addLog->setText(QApplication::translate("MainWindow", "Add Log", 0));
        saveLog->setText(QApplication::translate("MainWindow", "Save Log", 0));
        QTableWidgetItem *___qtablewidgetitem = SaleLogs->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "User ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = SaleLogs->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Product", 0));
        QTableWidgetItem *___qtablewidgetitem2 = SaleLogs->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Quantity", 0));
        QTableWidgetItem *___qtablewidgetitem3 = SaleLogs->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Sales Price", 0));
        QTableWidgetItem *___qtablewidgetitem4 = SaleLogs->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Date", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Sales", 0));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Members", 0));
        menuFilter->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuBy_Month->setTitle(QApplication::translate("MainWindow", "By Month", 0));
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
