#include <iostream>
using namespace std;

void SwapNumberValue (int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    cout << "Swap Number value: " << x << " " << y <<endl;
}

void SwapNumberReference (int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;

    cout << "Swap Number Reference: " << x << " " << y <<endl;
}

void SwapNumberPointer (int *x, int *y)
{
    int temp = (*x);
    (*x) = (*y);
    (*y) = temp;

    cout << "Swap Number Pointer: " << (*x) << " " << (*y) <<endl;
}

int main()
{
    int a, b;

    cout << "Enter the 1st Number: ";
    cin >> a;

    cout << "Enter the 2nd Number: ";
    cin >> b;

    cout <<endl;

    SwapNumberValue(a,b);
    //cout << "Swap Number value: " << a << "\n" << b <<endl;

    SwapNumberReference(a,b);
    //cout << "Swap Number Reference: " << a << "\n" << b <<endl;

     int c = a;
     a = b;
     b = c;

    SwapNumberPointer(&a,&b);
    //cout << "Swap Number Pointer: " << a << "\n" << b <<endl;

    return 0;


}
