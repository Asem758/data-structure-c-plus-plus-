#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int *ptr = &x;

    cout << *ptr <<endl;
    cout << ptr <<endl;
    cout << &ptr <<endl;

    cout <<endl;

    cout << x <<endl;
    cout << &x <<endl;

    cout <<endl;

    *ptr = 40;
    int **p = &ptr;

    cout << *ptr <<endl;
    cout << ptr <<endl;
    cout << **p <<endl;
    cout << p <<endl;
    cout << &p <<endl;

}
