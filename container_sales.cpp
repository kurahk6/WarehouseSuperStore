#include "container_sales.h"
#include "sstream"
#include "assert.h"
#include "string"
#include "iostream"
Container_sales::Container_sales()
{

}

Container_sales::Container_sales(std::string file_name){
    std::ifstream file;
    file.open(file_name.c_str());
    assert(file.is_open());
    head=new manifest_entry_node;
    iterator=NULL;


    std::string input;

    while(!file.eof()){
        manifest_entry_node* temp=head;
        if(iterator != NULL)
            temp=new manifest_entry_node;

        std::getline(file,input);



        input.erase(2,1);

        input.erase(4,1);

        std::stringstream ss2(input);
        ss2>>temp->entry.date_purchased;

        std::getline(file,input);

        std::stringstream ss(input);

        ss>>temp->entry.membership_id;

        std::getline(file,input);
        temp->entry.item_name=input;

        file>>input;
        std::stringstream ss3(input);
        ss3>>temp->entry.price;

        file>>input;
        std::stringstream ss4(input);
        ss4>>temp->entry.quantity;


        getline(file,input);



       if(iterator != NULL)
            iterator->next=temp;

            iterator=temp;


    }
tail=iterator;

}
void Container_sales::print(){
    manifest_entry_node* temp=head;
    while(temp!=NULL){
        std::cout<<"Name: " << temp->entry.item_name << std::endl;
        temp=temp->next;
    }
}

int Container_sales::list_size(){
    manifest_entry_node* temp=head;
    int counter=0;
    while(temp!=NULL){
        counter++;
        temp=temp->next;
    }
    return counter;
}

std::string* Container_sales::getItemList(){
    manifest_entry_node* temp=head;
    int index=0;
    std::string* item_list=new std::string[list_size()];
    while(temp!=NULL){
        item_list[index++]=temp->entry.item_name;
       temp=temp->next;
    }
    return item_list;
}

int* Container_sales::getQuantities(){
    manifest_entry_node* temp=head;
    int index=0;
    int* quantity_list=new int[list_size()];
    while(temp!=NULL){
        quantity_list[index++]=temp->entry.quantity;
       temp=temp->next;
    }
    return quantity_list;
}

double Container_sales::getTotalRev(){
    manifest_entry_node* temp=head;
    double total=0.0;
    while(temp!=NULL){
       total=total+(temp->entry.price*(double)temp->entry.quantity);
       temp=temp->next;
    }

    return total;
}

int* Container_sales::getMemberID(){
    manifest_entry_node* temp=head;
    int index=0;
    int* memberid=new int[list_size()];
    while(temp!=NULL){
        memberid[index++]=temp->entry.membership_id;
       temp=temp->next;
    }
    return memberid;
}
