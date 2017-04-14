#include "container_sales.h"
#include "sstream"
#include "assert.h"
#include "string"
#include "iostream"

Container_sales::Container_sales()
{
    head=NULL;
    tail=head;
}

Container_sales::Container_sales(std::string file_name){
    std::ifstream file;
    file.open(file_name.c_str());
    assert(file.is_open());
    head=new manifest_entry_node;
    iterator=NULL;

int isEOF = 0;
    std::string input;
    while(isEOF != EOF){
        manifest_entry_node* temp=head;
        if(iterator != NULL)
            temp=new manifest_entry_node;
        std::getline(file,input);
        std::stringstream ss;

        input.erase(2,1);

        input.erase(4,1);

        ss<<input;
        ss>>temp->entry.date_purchased;
        ss.clear();

        std::getline(file,input);

        ss<<input;
        ss>>temp->entry.membership_id;
        ss.clear();

        std::getline(file,input);
        temp->entry.item_name=input;

        std::getline(file,input);

        ss<<input;
        ss>>temp->entry.price;
        ss>>temp->entry.quantity;
        ss.clear();


       if(iterator != NULL)
            iterator->next=temp;

        iterator=temp;
        isEOF = file.peek();
    }
tail=iterator;
file.close();
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

double* Container_sales::getPrices()
{
    manifest_entry_node* temp=head;
    int index=0;
    double* price_list=new double[list_size()];
    while(temp!=NULL){
        price_list[index++]=temp->entry.price;
       temp=temp->next;
    }
    return price_list;
}

std::string* Container_sales::getDatesPurchased()
{
    manifest_entry_node* temp=head;
    int index=0;
    std::string* date_list=new std::string[list_size()];
    while(temp!=NULL){
        date_list[index++]=temp->entry.date_purchased;
       temp=temp->next;
    }
    return date_list;
}

int* Container_sales::getQuantities(){
    manifest_entry_node* temp=head;
    int index=0;
    int* quantity_list=new int[list_size()+1];
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

double Container_sales::getTotalPurchased(int memberid){
    manifest_entry_node* temp=head;
    double total=0.0;
    while(temp!=NULL){
        if(temp->entry.membership_id==memberid)
                total=total+(temp->entry.price*(double)temp->entry.quantity);
       temp=temp->next;
    }

    return total;
}

int Container_sales::getSpecificQSold(std::string item_name){
    manifest_entry_node* temp=head;
    int total=0;
    while(temp!=NULL){
        if(temp->entry.item_name==item_name)
                total=total+((double)temp->entry.quantity);
       temp=temp->next;
    }

    return total;
}

double Container_sales::getSpecificRev(std::string item_name){
    manifest_entry_node* temp=head;
    double total=0.0;
    while(temp!=NULL){
        if(temp->entry.item_name==item_name)
                total=total+(temp->entry.price*(double)temp->entry.quantity);
       temp=temp->next;
    }

    return total;
}

std::string* Container_sales::itemSort(){
    std::string* sorted=new std::string[this->list_size()+1];
    for(int i=0; i<list_size()+1; i++){
        sorted[i]=" ";
    }
    int arr_size=list_size();
    int arr_size_adj=0;
    manifest_entry_node* temp=head;

    while(temp!=NULL){
        manifest_entry_node* temp2=head;
        int total=1;
        while(temp2!=NULL){
        if(temp->entry.item_name>temp2->entry.item_name)
                total++;
       temp2=temp2->next;
        }
       sorted[total]=temp->entry.item_name;
       temp=temp->next;
    }



    for(int i=1; i<arr_size+1;i++){
        if(sorted[i]==" "){
            for(int j=i; j<arr_size; j++){
               sorted[j]=sorted[j+1];
            }
            i--;
            arr_size_adj++;
        }

}
    std::ostringstream os;
    os<<(arr_size+1-arr_size_adj);

    sorted[0]=os.str();
    return sorted;

}

int* Container_sales::memIDSort(){
    int* sorted=new int[list_size()+1];
    for(int i=0; i<list_size()+1; i++){
        sorted[i]=-1;
    }

    int arr_size=list_size();
    int arr_size_adj=0;
    manifest_entry_node* temp=head;

    while(temp!=NULL){
        manifest_entry_node* temp2=head;
        int total=1;
        while(temp2!=NULL){
        if(temp->entry.membership_id>temp2->entry.membership_id)
                total++;
       temp2=temp2->next;
        }
       sorted[total]=temp->entry.membership_id;
       temp=temp->next;
    }

    for(int i=1; i<list_size()+1;i++){
        if(sorted[i]==-1){
            for(int j=i; j<list_size()+1; j++){
               sorted[j]=sorted[j+1];
            }
            i--;
            arr_size_adj++;
        }


}

    sorted[0]=arr_size+1-arr_size_adj;
    return sorted;
}

double Container_sales::getTotSpentBy(int ID){
    manifest_entry_node* temp=head;
    double total=0.0;
    while(temp!=NULL){
        if(temp->entry.membership_id==ID)
            total=total+(temp->entry.price*(double)temp->entry.quantity);
       temp=temp->next;
    }

    return total;
}

double Container_sales::rebate(int ID){
    return (REBATE_PERCENTAGE*getTotSpentBy(ID));
}

bool Container_sales::basic2pref(int ID){
    if(rebate(ID)>15)
        return true;
    else
        return false;
}

bool Container_sales::pref2basic(int ID){
    if(rebate(ID)<15)
        return true;
    else
        return false;
}


Container_sales& Container_sales::operator+(const Container_sales& b){
    Container_sales* temp= new Container_sales;
    temp=this;
    temp->iterator=b.head;

    while(temp->iterator!=NULL){

        temp->add_sale(temp->iterator->entry.date_purchased,temp->iterator->entry.membership_id,temp->iterator->entry.item_name,temp->iterator->entry.price,temp->iterator->entry.quantity);
           temp->iterator=temp->iterator->next;
    }


   return *temp;

}
Container_sales::~Container_sales(){
    iterator=head;
    while(this->iterator!=NULL){
        head=iterator->next;
        delete iterator;
        iterator=head;
    }
}

void Container_sales::operator =(const Container_sales& b){
   iterator=head;
   while(this->iterator!=NULL){
       head=iterator->next;
       delete iterator;
       iterator=head;
   }
   this->iterator=b.head;

   while(this->iterator!=NULL){

       this->add_sale(this->iterator->entry.date_purchased,this->iterator->entry.membership_id,this->iterator->entry.item_name,this->iterator->entry.price,this->iterator->entry.quantity);
          this->iterator=this->iterator->next;
   }

}

void Container_sales::add_sale(std::string date_purchased, int membership_id, std::string item_name, double price, int quantity){
   manifest_entry_node* temp=new manifest_entry_node;
   temp->next=NULL;
   temp->entry.date_purchased=date_purchased;
   temp->entry.item_name=item_name;
   temp->entry.membership_id=membership_id;
   temp->entry.price=price;
   temp->entry.quantity=quantity;
if(this->tail!=NULL)
   this->tail->next=temp;
this->tail=temp;
   if(this->head==NULL){
       head=temp;
   }

}

