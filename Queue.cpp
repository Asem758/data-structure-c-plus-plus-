#include <iostream>
using namespace std;

int myqueue[4];
int queue_size = 4;
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
    if (index == queue_size-1)
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
        return myqueue[index];
    }
    else
    {
        cout << "Queue is empty " <<endl;
    }
}

void enqueue(int value)
{
    if (isfull() == false)
    {
        index++;
        myqueue[index] = value;
    }
    else
    {
        cout << "Queue is Full " <<endl;
    }
}

void dequeue()
{
    if (isempty() == false)
    {
        index--;
    }
    else
    {
        cout << "Queue is empty " <<endl;
    }
}

int main()
    {
        enqueue(10);
        enqueue(15);
        enqueue(25);
        enqueue(30);

        for (int i = 0; i < 4; i++)
        {
            dequeue();
        }

        cout << peek() <<endl;
    }
