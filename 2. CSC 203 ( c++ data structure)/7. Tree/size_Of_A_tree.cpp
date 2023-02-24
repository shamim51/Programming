#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;
};
//Node *root = NULL;
Node *getNewNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node *insert(Node *root, int value)
{
    if (root == NULL)
    {
        root = getNewNode(value);
    }

    else if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    return root;
}

int count_Size(Node *root){
    if(root == NULL) return 0;
    return 1 + count_Size(root->left) + count_Size(root->right);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 12);

    int x = count_Size(root);
    cout<<"size = "<<x;

    return 0;
}