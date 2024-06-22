#include <iostream>
using namespace std;

// A Linked list node
struct Customer
{
    string name;
    double income;
    Customer* next;
    Customer* prev;
};

Customer* head = NULL;
Customer* tail = NULL;

bool isempty()
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}

// This will add a customer node to the to the last of the list
void insert_customer (string new_name, double new_income)
{
    // Create a new Customer
    Customer* new_customer = new Customer;

    new_customer->name = new_name; // The name of new customer
    new_customer->income = new_income; // The income of new customer

    new_customer->next = NULL;
    new_customer->prev = NULL;

    // If list empty
    if (isempty() == true)
    {
        head = new_customer;
        tail = new_customer;
    }
    else
    {
        // The new customer at the end of the list.
        tail->next = new_customer;
        new_customer->prev = tail;
        tail = new_customer;
    }
}

// This function sort the list based on the name of the customers alphabetically.
void sort_customer ()
{
    Customer* current_node = NULL , *index = NULL;
    string name;
    double income;

    // Check whether list is empty
    if (head == NULL)
    {
        cout << "List is empty " <<endl;
    }
    else
    {
        // Current node will point head
        current_node = head;

        while (current_node->next != NULL)
        {
            // index will point to current_node next
            index = current_node->next;

            while (index != NULL)
            {
                 // If current's data is greater than index's data, swap the data of current and index.
                if (current_node->name > index->name)
                {
                    name = current_node->name;
                    income = current_node->income;
                    current_node->name = index->name;
                    current_node->income = index->income;
                    index->name = name;
                    index->income = income;
                }
                index = index->next; // increment the next customer
            }
            current_node = current_node->next; // increment the next customer
        }
    }

    // display the list
    current_node = head;

    while (current_node != NULL)
    {
        cout << current_node->name;

        if (current_node->next != NULL)
        {
            cout << ", ";
        }
        else
        {
            cout << ".";
        }

        current_node = current_node->next; // increment the current customer.
    }
    cout <<endl;
}

// This function will display the name and income of the last customer in the list.
void show_last_customer()
{
    cout <<"" << tail->name << ", " <<tail->income <<endl; // Print the last customer .
}

void calculate_avg_income()
{
    double total_income = 0;
    int total_customers = 0;
    double avg_income = 0;
    Customer* temp = head; // Temp point to head of the list.

    while (temp != NULL)
    {
        total_income = total_income + temp->income; // Calculate the total income.
        total_customers++; // Calculate the total customer.
        temp = temp->next;
    }

    avg_income = total_income / total_customers; // Calculate the average income.
    cout <<" " << avg_income <<endl; // Print average income of all the customers.
}

// Display the customer.
void display_customer()
{
    Customer* current_node;
    current_node = head;

    while (current_node != NULL)
    {
        cout << current_node->name;

         // Condition for last customer
        if (current_node->next != NULL)
        {
            cout << ", ";
        }
        else
        {
            cout << ".";
        }

        current_node = current_node->next; // Increment the current customer.
    }
    cout <<endl;
}

int main()
{
    // Add 4 customer in the list
    insert_customer("Rahim", 1200);
    insert_customer("Karim", 1500);
    insert_customer("Jamal", 1000);
    insert_customer("Nafis", 1300);

    cout << "Display the customers: ";
    display_customer();

    cout << "\nSort_Customer() will be => ";
    sort_customer();

    cout << "\nShow_Last_Customer() will be => ";
    show_last_customer();

    cout << "\nCalculate_avg_income() will be => ";
    calculate_avg_income();

    return 0;
}
