#ifndef CONTAINER_SALES_H
#define CONTAINER_SALES_H
#include <iostream>
#include <fstream>
const double REBATE_PERCENTAGE=0.05;
struct manifest_entry
{
    int date_purchased;
    int membership_id;
    std::string item_name;
    double price;
    int quantity;
};

struct manifest_entry_node
{
    manifest_entry entry;
    manifest_entry_node* next;
};

class Container_sales
{
public:
    Container_sales();
    Container_sales(std::string file_name);
    void print();
    std::string* getItemList();
    int* getQuantities();
    double getTotalRev();
    int* getMemberID();
    double getTotalPurchased(int);
    int getSpecificQSold(std::string);
    double getSpecificRev(std::string);
    std::string* itemSort();
    int* memIDSort();
    double getTotSpentBy(int);
    double rebate(int);
    bool basic2pref(int);
    bool pref2basic(int);

    int list_size();

private:
    manifest_entry_node* head;
    manifest_entry_node* tail;
    manifest_entry_node* iterator;
};

#endif // CONTAINER_SALES_H
