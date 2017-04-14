#ifndef CONTAINER_SALES_H
#define CONTAINER_SALES_H
#include <iostream>
#include <fstream>
const double REBATE_PERCENTAGE=0.05;
struct manifest_entry
{
    std::string date_purchased;
    int membership_id;
    std::string item_name;
    double price;
    int quantity;
};

struct manifest_entry_node
{

        manifest_entry_node(manifest_entry& b){
        this->entry.date_purchased=b.date_purchased;
        this->entry.item_name=b.item_name;
        this->entry.membership_id=b.membership_id;
        this->entry.price=b.price;
        this->entry.quantity=b.quantity;
        this->next=NULL;
    }
        manifest_entry_node(){
            this->entry.date_purchased="";
            this->entry.item_name="";
            this->entry.membership_id=0;
            this->entry.price=0;
            this->entry.quantity=0;
            this->next=NULL;
        }

    manifest_entry entry;
    manifest_entry_node* next;
};

class Container_sales
{
public:
    Container_sales();
    Container_sales(Container_sales&);
    ~Container_sales();
    Container_sales(std::string file_name);
    void nukem();
    void print();
    std::string* getItemList();
    int* getQuantities();
    double* getPrices();
    double getTotalRev();
    int* getMemberID();
    std::string *getDatesPurchased();
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
    void save(std::string file_name);
    void add_sale(std::string date_purchased, int membership_id, std::string item_name, double price, int quantity);
    void operator=(const Container_sales&);
    Container_sales& operator+(const Container_sales&);

private:
    manifest_entry_node* head;
    manifest_entry_node* tail;
    manifest_entry_node* iterator;
};

#endif // CONTAINER_SALES_H
