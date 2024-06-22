#include <iostream>
using namespace std;

struct node
{
    int data;
    node* left_child;
    node* right_child;

    node (int value)
    {
        data = value;
        left_child = NULL;
        right_child = NULL;
    }
};

int main()
{
    node* root = new node(1);

    root->left_child = new node(2);
    root->right_child = new node(3);
    root->left_child->left_child = new node(4);

    return 0;
}


