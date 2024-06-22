#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <string> s;

    s.push("Karim");
    s.push ("Rahim");
    s.push ("Jalil");

    while (!s.empty())
    {
        string x;
        x = s.top();

        cout << x <<endl;

        s.pop();
        s.pop();
        s.pop();
    }
}
