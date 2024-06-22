#include <iostream>
using namespace std;

int main()
{
    double marks[4];
    double total = 0;
    double avg;

    for (int i = 0; i < 4; i++)
    {
        cin >> marks[i];
        total = total + marks[i];
    }

    avg = total/4;
    cout << avg <<endl;
}
