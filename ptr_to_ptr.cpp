#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << &x <<endl;
    cout << x <<endl;

    int *p = &x;
    cout << p <<endl;
    cout << *p <<endl;

    int **q = &p;
    cout << *q <<endl;
    cout << q <<endl;
    cout << **q <<endl;

}
