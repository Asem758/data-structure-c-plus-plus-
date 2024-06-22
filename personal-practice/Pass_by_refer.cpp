#include <iostream>
using namespace std;

void fun (int &x)
{
    x = 30;
}

int main()
{
    int num = 20;

    fun(num);

    cout << "Value of Num: " << num <<endl;
}
