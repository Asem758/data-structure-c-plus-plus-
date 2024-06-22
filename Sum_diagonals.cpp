#include <iostream>
using namespace std;

void PrincipalDiagonal(int arr[5][5])
{
    int sum_p = 0;
    cout << "Principal Diagonal Number is: ";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
               sum_p+= arr[i][j];
               cout << arr[i][i] << ", ";
            }
        }

    }
    cout<<endl;
    cout << "Principal sum is: " << sum_p <<endl;
    cout << endl;
}

void SecondaryDiagonal(int arr[5][5])
{
    int sum_s = 0;

    cout << "Secondary Diagonal Number is: ";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) == 5 - 1)
            {
                sum_s+= arr[i][j];
                cout << arr[i][j] << ",";
            }
        }
    }
    cout << endl;
    cout << "Secondary Sum is: " << sum_s <<endl;

}

int main()
{


   int arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    PrincipalDiagonal(arr);
    SecondaryDiagonal(arr);

    return 0;
}
