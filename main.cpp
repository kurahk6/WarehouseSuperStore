/********************************************************* * Authors: * Project: Super Warehouse Store Group Project.
*Class: CS 08 *Due Date: 04/14/17 *Program Summary: This program creates a database that allows the user to store information about *two types of members: basic and preferred. Each member has information about a name, membership * number, membership expiration date, total amount spent, and rebate for preferred members. * The database is also able to organize and give information regarding the members. It is able to give * a sales report of items and quanities sold on a given day, get a list of total purchases for a member, * report purchases made by all members, report member rebates for all preferred members, show * amount being paid by each member, modify the list of members by adding/deleting members and see * their dues, determine if a member should convert to basic or preferred, and save any changes made. */


#include "mainwindow.h"
#include <QApplication>
#include "container.h"
#include "iostream"

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
