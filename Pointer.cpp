#include <iostream>
using namespace std;

int main()
{
    int *ptr, var = 10;

    ptr = &var;

    cout << var <<endl;
    cout << &var <<endl;
    cout << ptr <<endl;
    cout << *ptr <<endl;
    cout << &ptr <<endl;

}
