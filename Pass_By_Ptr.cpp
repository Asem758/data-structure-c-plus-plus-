#include <iostream>
using namespace std;

void cube (int *x)
{
    *x = (*x)*(*x)*(*x);
}

int main()
{
    int x = 50;

    cout << "Before Calling the function: " << x <<endl;

    cube (&x);

    cout << "After Calling the function: " << x <<endl;

    return 0;
}
