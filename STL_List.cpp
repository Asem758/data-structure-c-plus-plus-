#include <iostream>
#include <list>

using namespace std;

struct customer
{
    string name;
    double income;
};

int main()
{
    list <int> my_list = {12, 5, 10, 9};

    my_list.push_front(4);

    //cout << my_list.size() <<endl;
    //cout << my_list.front() <<endl;
    //cout << my_list.back() <<endl;

    for (int x: my_list)
    {
        //cout << x <<endl;
    }

    //cout << *my_list.begin() <<endl;
    //cout << *my_list.end() <<endl;

    for (auto i = my_list.begin(); i != my_list.end(); i++)
    {
        //cout << *i <<endl;
    }

    list <customer> customer_list;

    customer new_customer;

    new_customer.name = "Rahim";
    new_customer.income = 1200;

    customer_list.push_back(new_customer);

    new_customer.name = "Karim";
    new_customer.income = 1500;

    customer_list.push_back(new_customer);

    for (auto i = customer_list.begin(); i != customer_list.end(); i++)
    {
        cout << i->name <<endl;
    }
}
