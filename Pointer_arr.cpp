#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {3,4,5};

    int *ptr = &arr[0];

    cout << arr <<endl;
    cout << &arr <<endl;
    cout << ptr <<endl;

    cout <<endl;

    cout << *ptr <<endl;
    cout << *(ptr+1) <<endl;
    cout << *(ptr+2) <<endl;

    cout <<endl;

    cout << ptr[0] <<endl;
    cout << ptr[1] <<endl;
    cout << ptr[2] <<endl;

    cout <<endl;

    for (int i = 0; i < 3; i++)
    {
        cout << ptr[i] <<endl; // cout << arr[i] <<endl;
     }
}
