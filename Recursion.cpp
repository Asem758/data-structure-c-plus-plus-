#include <iostream>
using namespace std;

void recursive_number(int i)
{
    if (i<10)
    {
        i++;
        cout << i <<endl;
        recursive_number(i);
    }
}

int fact_num (int n)
{
    if (n>1)
    {
        return n * fact_num(n-1);
    }

    return 1;
}

int main()
{
    int fact = fact_num(4);

    cout << fact <<endl;
}
