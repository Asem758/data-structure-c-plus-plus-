#include <iostream>
using namespace std;

int main()
{
    int *p, *q, *r, a = 10, b = 20 ,c = 30;

    p = &a;
    q = &b;
    r = &c;

    cout << p <<endl;
    cout << q <<endl;
    cout << r <<endl;

    cout <<endl;

    cout << *p <<endl;
    cout << *q <<endl;
    cout << *r <<endl;

    cout <<endl;

    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;

    cout <<endl;

    cout << &a <<endl;
    cout << &b <<endl;
    cout << &c <<endl;
}

