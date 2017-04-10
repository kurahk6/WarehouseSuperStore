#include "mainwindow.h"
#include <QApplication>
#include <QStandardItemModel>
#include <QTime>
#include "container.h"
#include "iostream"
#include "container_sales.h"
void addMail(QAbstractItemModel *model, const QString &Name,
             const QString &ID, const QString Preferred, const QDateTime &date)
{
    model->insertRow(0);
    model->setData(model->index(0, 0), Name);
    model->setData(model->index(0, 1), ID);
    model->setData(model->index(0, 2), Preferred);
    model->setData(model->index(0, 3), date);
}

QAbstractItemModel *createMailModel(QObject *parent)
{
    Container_sales C("day1.txt");
    Container C2("warehouseshoppers.txt");
    QStandardItemModel *model = new QStandardItemModel(0, 4, parent);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Preferred Status"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Expiration"));

std::string* names=C2.get_name();
int* IDs=C2.getMemberID();
bool* preferred=C2.getis_pref();
int* exp=C2.get_exp();
for(int i=1; i<IDs[0]; i++){
    QString pref="Basic";
    if(preferred[i]){
        pref="Preferred";
    }
    addMail(model, QString::fromStdString(names[i]), QString::number(IDs[i]),pref,
            QDateTime(QDate(exp[i]%10000, exp[i]/1000000, (exp[i]/1000000)%100), QTime(00, 00)));
}


    return model;
}
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setSourceModel(createMailModel(&w));
    w.show();

    return a.exec();

//    Container_sales C("day1.txt");
//    Container C2("warehouseshoppers.txt");

//    std::string* names=C2.get_name();
//    int* IDs=C2.getMemberID();
//    bool* preferred=C2.getis_pref();
//    int* exp=C2.get_exp();

//    cout << "name        IDs          Preferred       exp\n";
//    for(int i=1; i<IDs[0]; i++){
//        string pref="Basic";
//        if(preferred[i]){
//            pref="Preferred";
//        }
//        cout << names[i]<< "    " << IDs[i]<< "    " << pref << "    "<< exp[i]%10000 << "/"<< exp[i]/1000000<< "/"<< (exp[i]/1000000)%100 << endl;
//    }


}
