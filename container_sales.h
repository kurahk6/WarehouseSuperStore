#ifndef CONTAINER_SALES_H
#define CONTAINER_SALES_H
#include <iostream>
#include <fstream>
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

private:
    manifest_entry_node* head;
    manifest_entry_node* tail;
    manifest_entry_node* iterator;
};

#endif // CONTAINER_SALES_H
