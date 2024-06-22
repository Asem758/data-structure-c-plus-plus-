#include <iostream>
using namespace std;

int mystack[4];
int stack_size = 4;
int index = -1;

bool isempty()
{
    if (index == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isfull()
{
    if (index == stack_size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int peek()
{
    if (isempty() == false)
    {
        return mystack[index];
    }

    else
    {
        cout << "Stack is empty " << endl;
    }
}

void push(int value)
{
    if (isfull() == false)
    {
        index++;
        mystack[index] = value;
    }
    else
    {
        cout << "Stack is full " << endl;
    }
}

void pop()
{
    if (isempty() == false)
    {
        index--;
    }

    else
    {
        cout << "Stack is empty " << endl;
    }
}

int main()
{
    push(20);
    push(40);
    push(60);
    push(80);

    for (int i = 0; i < 4; i++)
    {
        pop();
    }

    cout << peek() << endl;
}
