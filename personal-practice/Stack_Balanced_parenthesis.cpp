#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> mystack;
    string str;

    cout << "Enter a String: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
           mystack.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (mystack.empty() or mystack.top()!= '(')
            {
              cout << "Not Balanced " <<endl;
              return 0;
            }

            if (mystack.empty() and mystack.top() == '(')
            {
                mystack.pop();
            }
        }
        else
        {
           continue;
        }
    }
    if (mystack.empty())
    {
        cout << "Balanced " <<endl;
    }
    else
    {
        cout << "Not Balanced " <<endl;
    }
}
