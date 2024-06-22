#include <iostream>
using namespace std;

void input_taker (float* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
         cin >> arr[i];
    }
}

int main()
{
    int size_of_arr = 13;
    float arr[size_of_arr];

    input_taker (arr, size_of_arr);

    for (int i = 0; i < size_of_arr -1; i++)
    {
        for (int j = 0; j < size_of_arr - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout <<endl << "1st maximum = " << arr[size_of_arr - 1] <<endl;
    cout <<endl << "2nd maximum = " << arr[size_of_arr - 2] <<endl;


    cout <<endl << "1st minimum = " << arr[0] <<endl;
    cout <<endl << "2nd minimum = " << arr[1] <<endl;

    cout <<endl << "Median = " << arr[size_of_arr/2] <<endl;

    return 0;
}
