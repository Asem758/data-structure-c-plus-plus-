#include <iostream>
using namespace std;

float* adrs_of_max_element (float *ptr, int n)
{
    float *max = ptr;

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) > *max)
        {
            max = (ptr + i);
        }
        return max;
    }
}

int main()
{
    int n;

    cout << "Enter the length of the array: ";
    cin>> n;

    float arr[n];

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    float *ptr;
    ptr = arr;

    cout << endl << "Value\tAddress " <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << "\t" << ptr + i << "\n";
    }

    cout << endl << "The address of the maximum value of array is: " << adrs_of_max_element (ptr,n);
    return 0;
}
