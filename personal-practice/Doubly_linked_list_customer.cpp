#include <iostream>
using namespace std;

// A linked list node
struct Customer {
string name;
double income;
struct Customer* next;
struct Customer* previous;
};

class CustomerDoublyLinkedList{
private:
struct Customer* HEAD;
struct Customer* TAIL;
public:
// constructor initialize the HEAD and TAIL pointer to NULL
CustomerDoublyLinkedList(){
HEAD = NULL;
TAIL = NULL;
}

// this will add a customer node to the last of the list.
void insert_customer(string new_name,double new_income){
// create a new customer.
struct Customer* new_customer = (struct Customer*) malloc(sizeof(struct Customer));
new_customer->name = new_name; // set the name of new customer.
new_customer->income = new_income;// set the income of new customer.
new_customer->next = NULL;
new_customer->previous = NULL;

// if list is empty
if(HEAD == NULL){
HEAD = new_customer;
TAIL = new_customer;
}
else{
// // set the new customer at the end of the list .
TAIL->next = new_customer;
new_customer->previous = TAIL;
TAIL = new_customer;

}
}

// this function sort the list based on the name of the customers alphabetically.
void sort_customer(){
struct Customer *current = NULL, *index = NULL;
string name;
double income;

//Check whether list is empty
if(HEAD == NULL) {
cout<<"List is empty."<<endl;
return;
}
else {

current = HEAD;//Current will point to head
while(current->next != NULL){
index = current->next; //index will point to current next
while(index != NULL){
//If current's data is greater than index's data, swap the data of current and index
if(current->name > index->name) {
name = current->name;
income = current->income;
current->name = index->name;
current->income = index->income;
index->name = name;
index->income = income;
}
index = index->next; // increment the next customer
}
current = current->next;// increment the next customer
}
}

// display the list
current = HEAD;
while(current!= NULL){
cout<<current->name;
// condition for last customer
if(current->next!= NULL)
cout<<", ";
else
cout<<".";

current = current->next; // increment the current customer.
}
cout<<endl;

}
// this function will display the name and income of the last custmore in the list.
void show_last_customer(){
cout<<""<<TAIL->name<<", "<<TAIL->income<<endl; // print the last customer .
}
// this function will calculate the average income of all the customers.
void calculate_avg_income(){
double total_Income =0;
int total_customers=0;
double average_income;
struct Customer* temp = HEAD; // temp point to HEAD of the list

while(temp!=NULL){

total_Income = total_Income + temp->income;// calculate the total income.
total_customers++;// calculate the total customer.
temp = temp->next;
}

average_income = total_Income/total_customers; // // calculate the average income.
cout<<" "<<average_income<<endl; // print average income of all the customers

}

// display the customer.
void disply_cusotomer(){
struct Customer *current;
// display the list
current = HEAD;
while(current!= NULL){
cout<<current->name;
// condition for last customer
if(current->next!= NULL)
cout<<", ";
else
cout<<".";

current = current->next; // increment the current customer.
}
cout<<endl;

}

};

int main(){
CustomerDoublyLinkedList cust; // // create empty CustomerDoublyLinkedList
// add 4 customer in the list
cust.insert_customer("Rahim",1200);
cust.insert_customer("Karim",1500);
cust.insert_customer("Jamal",1000);
cust.insert_customer("Nafis",1300);
cout<<"Display the customers: ";
cust.disply_cusotomer();

cout<<"\nsort_customer() will be => ";
cust.sort_customer();

cout<<"\nshow_last_customer() will be => ";
cust.show_last_customer();

cout<<"\ncalculate_avg_income() will be => ";
cust.calculate_avg_income();


return 0;
}
