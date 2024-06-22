#include <iostream>
using namespace std;

void cube1 (int x)
{
    x = x * x;
}

void cube2 (int &x)
{
   x = x * x;
}

void cube3 (int *x)
{
    *x = (*x)*(*x);
}

int main()
{
    int x = 23;

    cout << "Before Calling the function: " << x <<endl;

    cube1(x);

    cout << "After Calling the function: " << x <<endl;

    cout <<endl;

    cout << "Before Calling the function: " << x <<endl;

    cube2(x);

    cout << "After Calling the function: " << x <<endl;

    cout <<endl;

    cout << "Before Calling the function: " << x <<endl;

    cube3(&x);

    cout << "After Calling the function: " << x <<endl;

    int num = 20;
    int &sum = num;

    cout <<endl;

    cout << num <<endl;
    cout << sum <<endl;

    cout <<endl;

    cout << &num <<endl;
    cout << &sum <<endl;
}
