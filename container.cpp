#include "container.h"
#include "sstream"
#include "assert.h"
#include "string"
#include "iostream"
Container::Container()
{
}

Container::Container(std::string file_name){


     std::ifstream file;
     file.open(file_name.c_str());
     assert(file.is_open());
     head=new Membership_node;
     iterator=NULL;


     std::string input;

     while(!file.eof()){
         Membership_node* temp=head;
         if(iterator != NULL)
             temp=new Membership_node;

         std::getline(file,input);

         temp->member.name=input;

         std::getline(file,input);

         std::stringstream ss(input);

         ss>>temp->member.membership_id;

         std::getline(file,input);

         if(input=="Basic")
            temp->member.is_preferred=false;
         else
             temp->member.is_preferred=true;

         std::getline(file,input);


         input.erase(2,1);

         input.erase(4,1);

         std::stringstream ss2(input);
         ss2>>temp->member.exp_date;
        if(iterator != NULL)
             iterator->next=temp;

             iterator=temp;


     }
tail=iterator;

}

void Container::print(){
    Membership_node* temp=head;
    while(temp!=NULL){
        std::cout<<"Name: " << temp->member.name << std::endl;
        temp=temp->next;
    }
}
