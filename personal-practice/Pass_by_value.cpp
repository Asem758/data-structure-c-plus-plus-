#include <iostream>
using namespace std;

void display (int num)
{
    num = 50;
}

int main()
{
    int x = 20;

    cout << "Before pass by value: " << x <<endl;

    display(x);

    cout << "After pass by value: " << x <<endl;
}
