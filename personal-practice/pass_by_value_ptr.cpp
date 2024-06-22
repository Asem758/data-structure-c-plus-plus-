#include <iostream>
using namespace std;

void display (int *num)
{
    *num = 60;
}

int main()
{
    int x = 30;

    cout << "Before calling the function: " << x <<endl;

    display (&x);

    cout << "After calling the function: " << x <<endl;
}
