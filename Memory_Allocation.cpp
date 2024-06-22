#include <iostream>
using namespace std;

int total;

int square (int x)
{
    return x * x;
}

int square_of_sum (int x, int y)
{
    int z = square(x + y);
    return z;
}

int main()
{
    int a = 10, b = 20;

    total = square_of_sum(a,b);

    cout << total <<endl;
}
