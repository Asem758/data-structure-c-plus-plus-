#include <iostream>
using namespace std;

void rec (int n)
{
    if (n != 10)
    {
        rec (n+1);
        cout << n <<endl;
    }
}

int main()
{
    rec(1);
}
