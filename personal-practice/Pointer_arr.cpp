#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {10,20,30};

    int *ptr = &arr[0];

    cout << *(ptr+0) <<endl;
    cout << *(ptr+1) <<endl;
    cout << *(ptr+2) <<endl;
    cout << *(ptr+3) <<endl;
    cout << *ptr <<endl;

    cout <<endl;

    cout << arr[0] <<endl;
    cout << arr[1] <<endl;
    cout << arr[2] <<endl;

    cout <<endl;

    cout << &arr[0] <<endl;
    cout << &arr[1] <<endl;
    cout << &arr[2] <<endl;

    cout <<endl;

    cout << (ptr+0) <<endl;
    cout << (ptr+1) <<endl;
    cout << (ptr+2) <<endl;
}
