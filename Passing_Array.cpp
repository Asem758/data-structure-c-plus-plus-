#include <iostream>
using namespace std;

int arr_sum (int arr[], int arr_size)
{
    int sum = 0;

    for (int i = 0; i < arr_size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int a[3] = {10,15,20};

    cout << arr_sum (a, 3) <<endl;

    return 0;
}
