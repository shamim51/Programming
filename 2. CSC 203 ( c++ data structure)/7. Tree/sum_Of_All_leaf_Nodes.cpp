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

bool is_Leaf(Node *root)
{
    if (root->left == NULL and root->right == NULL) return true;
    else return false;
}

int sum_Of_All_leaf_Nodes(Node *root)
{

    if (is_Leaf(root))
        return root->data;
    //if (root == NULL)
       // return 0;

    return sum_Of_All_leaf_Nodes(root->left) +
           sum_Of_All_leaf_Nodes(root->right);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 6);
    root = insert(root, 5);
    root = insert(root, 12);

    cout <<sum_Of_All_leaf_Nodes(root);

}