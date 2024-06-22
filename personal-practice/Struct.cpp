#include <iostream>
using namespace std;

struct my_struct
{
    int i;
    char c;
};

int main()
{
    cout << sizeof(struct my_struct);

    return 0;
}
