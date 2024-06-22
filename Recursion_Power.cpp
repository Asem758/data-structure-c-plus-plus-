#include <iostream>
using namespace std;

int power_by_recursion(int base, int power);

int main()
{
    int base, power, count, result = 1;

    cout << "Input Base Number: ";
    cin >> base;

    cout << "Input Power Number: ";
    cin >> power;

    result = power_by_recursion (base,power);

    cout << base << "^" << power " = " << result <<endl;

    return 0;

}

int power_by_recursion(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return base * power_by_recursion (base, power - 1);
    }
}



