#include <iostream>
using namespace std;

int main()
{
    double marks[4][2];
    double avg;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> marks[i][j];
        }
    }

    for (int i = 0; i < 2; i++)

    {
        double sum = 0;

        for (int j = 0; j < 4; j++)
        {
            sum = sum + marks[i][j];
        }

        avg = sum / 4;

        cout << " Average marks of course " << i+1 <<" is: " << avg <<endl;
    }

    return 0;
}


