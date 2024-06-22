#include <iostream>
using namespace std;

int* pointvar()
{
    int x;
    x = 20;
    return &x;
}

int main()
{
    int* p = pointvar();

    cout << p <<endl;
    cout << *p <<endl;



}
