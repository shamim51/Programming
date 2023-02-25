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

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int find_Distance_From_Root(Node *, int, int);

int main()
{
    Node *root = NULL;
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, 5);
    root = insert(root, 4);
    

    cout << "finding: " << endl;
    int x = find_Distance_From_Root(root, 2, 1);
    cout << x;

    return 0;
}
int find_Distance_From_Root(Node *root, int data, int level)
{
    if(root == NULL)return 0;
    if (root->data == data){
        return level;
    }
    int x;
     x =  find_Distance_From_Root(root->left, data, level++) + find_Distance_From_Root(root->right, data, level++) ;
    return x;
}