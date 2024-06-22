#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void push (node **head_ref, int data)
{
    node *ptr1 = new node();
    node *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;

    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
        {
            temp = temp->next;
            temp->next = ptr1;
        }
    }
    else
    {
        ptr1->next = ptr1;
        *head_ref = ptr1;
    }
}

void print_list (node *head)
{
    node *temp = head;

    if (head != NULL)
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int main()
{
    node *head = NULL;

    push (&head, 12);
    push (&head, 13);
    push (&head, 14);
    push (&head, 15);

    cout << "Contents of Circular Linked list \n";
    print_list(head);

    return 0;
}
