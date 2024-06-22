#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void push (node** head_ref, int new_value)
{
    node* new_node = new node;

    new_node->data = new_value;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insert_after (node* prev_node, int new_value)
{
    if (prev_node == NULL)
    {
        cout << "List is not empty " <<endl;
    }

    node* new_node = new node;

    new_node->data = new_value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;

}

void append (node** head_ref, int new_value)
{
    node* new_node = new node;

    new_node->data = new_value;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
    }

    while (last->next != NULL)
    {
        last = last_next;
    }
}

void print_list (node* node)
{
    while (node != NULL)
    {
        cout <<" " << node->data;

    }
}

int main()
{
    node* head = NULL;

    append (&head, 6);
    push(&head, 7);
    push(&head, 1);
    append (&head, 4);
    insert_after(head->next, 8);

    cout << "Linked list is: ";

    print_list(head);

    return 0;

}
