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
    Membership_node(){
        this->member.exp_date="";
        this->member.is_preferred=false;
        this->member.membership_id=0;
        this->member.name="";
        this->member.rebate_amount=0;
        this->member.total_spent=0;
        this->next=NULL;
    }
    Membership_node(Membership_node& b){
        this->member.exp_date=b.member.exp_date;
        this->member.is_preferred=b.member.is_preferred;
        this->member.membership_id=b.member.membership_id;
        this->member.name=b.member.name;
        this->member.rebate_amount=b.member.rebate_amount;
        this->member.total_spent=b.member.total_spent;
        this->next=NULL;
    }

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
    Container(Container&);
    ~Container();
    Container(std::string file_name);
    bool isPref(int);
    int NameToID(std::string);
    std::string IDtoName(int);
    int* sortedID();
    int* sortbytype();
    int list_size();
    void print();
    void nukem();
    void save(std::string file_name);
    std::string* sortbyname();
    int* showExpiringMem(int);
    void addMember(std::string, int , bool , std::string );
    bool delMember(int);
    void operator=(const Container&);
    Container& operator+(const Container&);


private:
    Membership_node* head;
    Membership_node* iterator;
    Membership_node* tail;

};

#endif // CONTAINER_H
