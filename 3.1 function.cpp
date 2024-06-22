#include <iostream>

using namespace std;

int sum(int x, int y)
{
    return x + y;
}

void print_my_name()
{
    cout << "Aquib" << endl;
    cout << "Aquib" << endl;
    cout << "Aquib" << endl;
}

int main()
{
    int a = 50, b = 45, result;
    result = sum(a, b);
    cout << result;

    print_my_name();
}