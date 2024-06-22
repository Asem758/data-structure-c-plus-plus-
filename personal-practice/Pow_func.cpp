#include <iostream>
using namespace std;

int pow (int x)
{
    x = x*x;
    return x;
}

int main()
{
    int a = 5;

    cout << pow(a) <<endl;
}
