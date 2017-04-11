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
     int isEOF = 0;

     while(isEOF != EOF){
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
             isEOF = file.peek();
     }
tail=iterator;

}

void Container::print(){
    Membership_node* temp=head;
    while(temp!=NULL){
        std::cout<<"Name: " << temp->member.rebate_amount << std::endl;
        temp=temp->next;
    }
}

bool Container::isPref(int id){
    Membership_node* temp=head;
    while(temp->member.membership_id != id && temp!=NULL){
        temp=temp->next;
    }
    return temp->member.is_preferred;
}

int Container::NameToID(std::string name){
    Membership_node* temp=head;
    while(temp->member.name != name && temp!=NULL){
        temp=temp->next;
    }
    if(temp!=NULL)
        return temp->member.membership_id;
    else
        return -1;
}

std::string Container::IDtoName(int id){
    Membership_node* temp=head;
    while(temp->member.membership_id != id
          && temp!=NULL){
        temp=temp->next;
    }
    if(temp!=NULL)
        return temp->member.name;
    else
        return "INVALID ID";
}
int Container::list_size(){
    Membership_node* temp=head;
    int counter=0;
    while(temp!=NULL){
        counter++;
        temp=temp->next;
    }
    return counter;
}

int* Container::sortedID(){
    int* sorted=new int[list_size()+1];
    for(int i=0; i<list_size()+1; i++){
        sorted[i]=-1;
    }

    int arr_size=list_size();
    Membership_node* temp=head;

    while(temp!=NULL){
        Membership_node* temp2=head;
        int total=1;
        while(temp2!=NULL){
        if(temp->member.membership_id>temp2->member.membership_id)
                total++;
       temp2=temp2->next;
        }
       sorted[total]=temp->member.membership_id;
       temp=temp->next;


    }

    sorted[0]=arr_size+1;
    return sorted;
}

int* Container::sortbytype(){
     Membership_node* temp=head;
     int* sorted=new int[list_size()+1];
     int front_index=1;
     int back_index=list_size();

     while(temp!=NULL){
         if(temp->member.is_preferred)
             sorted[front_index++]=temp->member.membership_id;
         else
             sorted[back_index--]=temp->member.membership_id;
         temp=temp->next;
     }
     sorted[0]=list_size()+1;
     return sorted;
}

std::string* Container::sortbyname(){
    std::string* sorted=new std::string[this->list_size()+1];
    for(int i=0; i<list_size()+1; i++){
        sorted[i]=" ";
    }
    int arr_size=list_size();

    Membership_node* temp=head;

    while(temp!=NULL){
        Membership_node* temp2=head;
        int total=1;
        while(temp2!=NULL){
        if(temp->member.name>temp2->member.name)
                total++;
       temp2=temp2->next;
        }
       sorted[total]=temp->member.name;
       temp=temp->next;
    }

std::ostringstream os;
os<<(arr_size+1);
    sorted[0]=os.str();
    return sorted;

}

int* Container::showExpiringMem(int month){
    int* list=new int[list_size()+1];
    int index=1;
    Membership_node* temp=head;
    while(temp!=NULL){
        if(temp->member.exp_date/1000000 == month)
            list[index++]=temp->member.membership_id;
        temp=temp->next;
    }
    list[0]=index;
    return list;
}

void Container::addMember(std::string name, int ID, bool isPref, int expdate){
    Membership_node* temp=new Membership_node;
    temp->member.exp_date=expdate;
    temp->member.is_preferred=isPref;
    temp->member.membership_id=ID;
    temp->member.name=name;

    tail->next=temp;
    temp->next=NULL;
    tail=temp;
}

bool Container::delMember(int ID){
    Membership_node* temp=head;
    while(temp!=NULL){
        if(temp->next->member.membership_id==ID){
            Membership_node* delthis=temp->next;
            temp->next=temp->next->next;
            delete delthis;
            return true;
        }

        temp=temp->next;
    }
    return false;
}

std::string* Container::get_name(){
    std::string* names=new std::string[list_size()+1];
    Membership_node* temp=head;
    int index=1;
    while(temp!=NULL){
        names[index++]=temp->member.name;
        temp=temp->next;
    }

    std::ostringstream os;
    os<<index+1;
    names[0]=os.str();

    return names;
}

int* Container::getMemberID(){
    int* IDs=new int[list_size()+1];
    Membership_node* temp=head;
    int index=1;
    while(temp!=NULL){
        IDs[index++]=temp->member.membership_id;
        temp=temp->next;
    }

    IDs[0]=index;

    return IDs;
}

int* Container::get_exp(){
    int* exps=new int[list_size()+1];
    Membership_node* temp=head;
    int index=1;
    while(temp!=NULL){
        exps[index++]=temp->member.exp_date;
        temp=temp->next;
    }

    exps[0]=index+1;

    return exps;
}

bool* Container::getis_pref(){
    bool* pref=new bool[list_size()+1];
    Membership_node* temp=head;
    int index=1;
    while(temp!=NULL){
        pref[index++]=temp->member.exp_date;
        temp=temp->next;
    }

    pref[0]=0;

    return pref;
}
