#include <iostream>
#include <queue>
#include<stack>
using namespace std;

int main()
{
    queue<int>myqueue;
    stack<int>yourstack;

    yourstack.push(5);
    yourstack.push(10);
    yourstack.push(15);

    cout << yourstack.top() <<endl;
    cout <<endl;

    while(!yourstack.empty())
    {
        cout << yourstack.top() <<endl;
        yourstack.pop();
    }

    cout <<endl;

    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);

    while (!myqueue.empty())
    {
        cout << myqueue.front() <<endl;
        myqueue.pop();
    }

    cout << myqueue.front() <<endl;

    int myqueue_size = myqueue.size();
    for (int i = 0; i < myqueue_size; i++)
    {
        cout << myqueue.front() <<endl;
        myqueue.pop();
    }
}
