#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
#include <fstream>

const double SALES_TAX=0.0875;
struct Membership
{
    std::string name;
    int membership_id;
    bool is_preferred;
    std::string exp_date;
    double total_spent;
    double rebate_amount;
};

struct Membership_node
{
    Membership member;
    Membership_node* next;
};

class Container
{
public:
    std::string* get_name();
    int* getMemberID();
    bool* getis_pref();
    std::string *get_exp();
    Container();
    ~Container();
    Container(std::string file_name);
    bool isPref(int);
    int NameToID(std::string);
    std::string IDtoName(int);
    int* sortedID();
    int* sortbytype();
    int list_size();
    void print();
    std::string* sortbyname();
    int* showExpiringMem(int);
    void addMember(std::string, int ID, bool isPref, std::string expdate);
    bool delMember(int);
    void operator=(const Container&);
    Container& operator+(const Container&);


private:
    Membership_node* head;
    Membership_node* iterator;
    Membership_node* tail;

};

#endif // CONTAINER_H
