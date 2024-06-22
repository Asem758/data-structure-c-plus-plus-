#include <iostream>
using namespace std;

struct person
{
    string name;
    int age;
    float height;

    void print_details()
    {
        cout << name <<endl;
        cout << age <<endl;
        cout << height <<endl;
    }
} ;

int main()
{
    person p1;

    p1.name = "Asem";
    p1.age = 22;
    p1.height = 5.5;

    p1.print_details();

    //cout <<"Name: " << p1.name <<endl;
    //cout <<"Age: " << p1.age <<endl;
    //cout <<"Height: " << p1.height <<endl;

    cout <<endl;

    person p2;

    p2.name = "Sadia";
    p2.age = 20;
    p2.height = 5.3;

    //cout <<"Name: " << p2.name <<endl;
    //cout <<"Age: " << p2.age <<endl;
    //cout <<"Height: " << p2.height <<endl;

    p2.print_details();

    cout <<endl;

    //structure_array

    person person_arr[10];

    person_arr[0].name = "Ammu";
    person_arr[0].age = 45;
    person_arr[0].height = 5.2;

    for (int i = 0; i < 10; i++)
    {
        person_arr[i].print_details();
    }

    cout <<endl;

    //dynamic_memory_allocation

    person *ptr = new person;

    ptr->name = "Abbu";
    ptr->age = 57;
    ptr->height = 5.7;

    ptr->print_details();

    cout <<endl;

    //1D_Dynamic_array

    person *ptr1 = new person[10];

    //ptr1->name = "Ashrafur";
    //ptr->age = 21;
    //ptr->height = 5.5;

    //for (int i = 0; i < 10; i++)
    //{
        //ptr1[i]->print_details();
    //}
}
