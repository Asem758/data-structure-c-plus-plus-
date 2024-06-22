#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

node* head = NULL;

bool isempty()
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}

void insert_front(int new_value)
{
    node* new_node = new node;
    new_node->value = new_value;
    new_node->next = NULL;

    if (isempty() == true)
    {
        head = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }

}

void insert_last (int new_value)
{
    node* new_node = new node;
    new_node->value = new_value;
    new_node->next = NULL;

    if (isempty() == true)
    {
        head = new_node;
    }

    else
    {
        node* current_node = head;

        while (current_node->next != NULL)
        {
           current_node = current_node->next;
        }

        current_node->next = new_node;
    }
}

void print_list()
    {
        node* current_node = head;
        int index = 0;

        while (current_node != NULL)
        {
            cout <<"Value: "<< current_node->value << " Index: " << index <<endl;
            current_node = current_node->next;
            index++;
        }
    }

void print_by_recursion (node* current_node)
{
   if (current_node != NULL)
   {
       cout << current_node->value <<endl;
       print_by_recursion (current_node->next);
   }
}

void print_reverse_by_recursion (node* current_node)
{
   if (current_node != NULL)
   {
       print_by_recursion (current_node->next);
       cout << current_node->value <<endl;
   }
}

//void print_alternate ()
//{

//}

    int count_nodes()
    {
        int counter = 0;
        if (isempty() == true)
        {
           counter = 0;
        }
        else
        {
            node* current_node = head;

            while(current_node != NULL)
            {
                current_node = current_node->next;
                counter++;
            }
        }
        return counter;
    }

bool search_value (int search_value)
{
    node* current_node = head;

    while (current_node != NULL)
    {
        if (current_node->value == search_value)
        {
            cout << "Match found" <<endl;
            return true;
        }

        current_node = current_node->next;
    }

    cout << "Match not found" <<endl;
    return false;
}

void delete_front()
{
    if (isempty() == true)
    {
        cout << "List is empty " <<endl;
    }
    else
    {
        node* node_to_be_deleted = head;
        head = head->next;
        delete node_to_be_deleted;
    }
}

void delete_last()
{
    if (isempty() == true)
    {
        cout << "List is empty " <<endl;
    }
    else
    {
        if (head->next == NULL)
        {
           node* node_to_be_deleted = head;
           head = head->next;
           delete node_to_be_deleted;
        }
        else
        {
         node* current_node = head;
         while(current_node->next != NULL)
        {
            if (current_node->next->next == NULL)
            {
                node* node_to_be_deleted = current_node->next;
                current_node->next = node_to_be_deleted->next;
                delete node_to_be_deleted;
            }
            else
            {
                current_node = current_node->next;
            }
        }
      }
    }

}

void delete_at_index (int index)
{
    if (index == 0)
    {
        delete_front();
    }
    else if (index == count_nodes() - 1)
    {
        delete_last();
    }
    else if (index >= count_nodes() || index < 0)
    {
        cout << "Invalid index " <<endl;
    }
    else
    {
        int counter = 0;
        node* current_node = head;

        while (counter != index)
        {
            if (counter == index -1)
            {
                node* node_to_be_deleted = current_node->next;
                current_node->next = node_to_be_deleted;
                delete node_to_be_deleted;
                return;
            }
            else
            {
                current_node = current_node->next;
                counter++;
            }
        }
    }
}

void delete_value (int value_to_be_deleted)
{
    if (isempty() == true)
    {
        cout << "List is empty" <<endl;
    }
    else
    {
        if (head->value == value_to_be_deleted)
        {
            node* node_to_be_deleted = head;
            head = head->next;
            delete node_to_be_deleted;
        }
        else
        {
            node* current_node = head;

            while (current_node->next != NULL)
            {
               if (current_node->next->value == value_to_be_deleted)
               {
                   node* node_to_be_deleted = current_node->next;
                   current_node->next = node_to_be_deleted->next;
                   delete node_to_be_deleted;
               }
               else
               {
                   current_node = current_node->next;
               }
            }
        }
    }
}

    void insert_at_index (int value, int index)
    {
        if (index == 0)
        {
            insert_front(value);
        }
        else if (index == count_nodes())
        {
            insert_last(value);
        }

        else if (index > count_nodes() || index < 0)
        {
            cout << "Invalid index" <<endl;
        }
        else
        {
            node* new_node = new node;
            new_node->value = value;

            int counter = 0;

            node* current_node = head;

            while (counter != index-1)
            {
               current_node = current_node->next;
               counter++;
            }

            new_node->next = current_node->next;
            current_node->next = new_node;
        }
  }


int main()
{
    insert_last(10);
    insert_last(20);
    insert_last(30);
    insert_front(5);
    insert_at_index(50,2);

    print_list();
    cout<<endl;

    cout << "Total Nodes: " << count_nodes() <<endl;

    //search_value(50);
    //delete_value(30);
    delete_front();
    cout <<endl;
    delete_last();

    cout << "After Deletion" <<endl;

    print_list();

    cout << "Total Nodes: " << count_nodes() <<endl;
    print_by_recursion(head);
}
