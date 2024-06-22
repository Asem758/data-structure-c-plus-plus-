#include <iostream>
using namespace std;

int main ()
{
    double *pointvar = new double;

    //double *pointvar;
    // pointvar = new double;

    *pointvar = 23.55;

    cout << pointvar <<endl;
    cout << *pointvar <<endl;

    delete pointvar;
    pointvar = NULL;

    int N = 20;
    int *arr = new int[N];

    //cout << arr <<endl;
    //cout << *arr <<endl;

    for (int i = 0; i < N; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] <<endl;
        cout << arr+i <<endl;
        cout << *(arr+i) <<endl;

        delete []arr;
        arr = NULL; // &arr[0];
}
