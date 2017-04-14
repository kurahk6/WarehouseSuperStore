/*********************************************************
 *
 * FUNCTION - print()
 * _______________________________________________________
 * This function prints the object’s sales.
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_sales object is created.
 *
 * POSTCONDITIONS:
 *      The Container sales are printed.
 **********************************************************/

/*********************************************************
 *
 * FUNCTION – getQuantities()
 * _______________________________________________________
 * This function returns a list of quantities of the sales.
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container sales object is created.
 *
 * POSTCONDITIONS:
 *      A list of quantities of sales are returned.
 **********************************************************/

/*********************************************************
 *
 * FUNCTION – getMemberID()
 * _______________________________________________________
 * This function gets the member Id of the object and returns it.
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container sales object is created.
 *
 * POSTCONDITIONS:
 *      The member Id of the Container_Sales object is returned.
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – getSpecificQSold()
 * _______________________________________________________
 * This function gets a number
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container sales object is created.
 *      Input member ID
 *
 * POSTCONDITIONS: Return quantity sold based on ID entered.
 *
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – getItemList()
 * _______________________________________________________
 * This function returns a list of items of the object.
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales is initialized
 *
 * POSTCONDITIONS:
 *      A list of the items are returned
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – getPrices()
 * _______________________________________________________
 * This function returns the prices listed in the object.
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales is initialized.
 *
 * POSTCONDITIONS:
 *      A list of all the prices are returned.
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – getDatesPurchased()
 * _______________________________________________________
 * This function returns a list of all the dates of things purchased.
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales must be initialized.
 *
 * POSTCONDITIONS:
 *      A list of all the dates of things purchased is returned.
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – getTotalPurchased(int memberid)
 * _______________________________________________________
 * This function gets the Total amount purchased when given a member id
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales must be initialized
    Member id must be given.
 *
 * POSTCONDITIONS:
 *      The amount purchased by the member given is returned.
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – getSpecificQSold(std::string item_name)
 * _______________________________________________________
 * This function gets the specific
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales object is created.
 *
 * POSTCONDITIONS:
 *
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – getSpecificRev(std::string item_name)
 * _______________________________________________________
 * This function
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales Object is created.
    A String containing the item name is input.
 *
 * POSTCONDITIONS:
 *
 **********************************************************/



/*********************************************************
 *
 * FUNCTION – Container_sales::itemSort()
 * _______________________________________________________
 * This function sorts the items
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales is created.
 *
 * POSTCONDITIONS:
 *
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – 	int* Container_sales::memIDSort()
 * _______________________________________________________
 * This function sorts the sales
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales is created.
 *
 * POSTCONDITIONS:
 *
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – Container_sales::getTotSpentBy(int ID)
 * _______________________________________________________
 * This function gets the total amount spent by the member.
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales is created.
     The member Id is input.
 *
 * POSTCONDITIONS:
 *      Returns a double number of the total amount spent
    by the member with the Id number.
 **********************************************************/
/*********************************************************
 *
 * FUNCTION – Container_sales::rebate(int ID)
 * _______________________________________________________
 * This function returns the rebate percentage for the member
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_Sales is created.
    The member ID is input.
 *
 * POSTCONDITIONS:
 *      A double number, rebate percentage is returned
 **********************************************************/
/*********************************************************
 *
 * FUNCTION - Container_sales::basic2pref(int ID)
 * _______________________________________________________
 * This function prints the object’s sales.
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_sales object is created.
    Member Id is input.
 *
 * POSTCONDITIONS:
 *
 **********************************************************/
/*********************************************************
 *
 * FUNCTION - Container_sales::pref2basic(int ID)
 * _______________________________________________________
 * This function
 * _______________________________________________________
 * PRECONDITIONS:
 *      Container_sales object is created.
 *	Member Id is input.
 * POSTCONDITIONS:
 *
 **********************************************************/

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
