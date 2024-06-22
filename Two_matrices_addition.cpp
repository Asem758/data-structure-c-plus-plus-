#include <iostream>
using namespace std;

int main()
{
    int arr1[2][2], arr2[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout <<"The First matrix is: \n\n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr1[i][j] <<" ";
        }

        cout <<endl;
    }

    cout << "The Second matrix is: \n\n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] <<" ";
        }

        cout<<endl;
    }

    cout <<"The Addition of two matrix is: \n\n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr1[i][j] + arr2[i][j] <<" ";
        }

        cout <<endl;
    }
}
