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
bool is_Leaf(Node*root){
    if(root->left == NULL and root->right == NULL) return true;
    if(root->right == NULL and root->left == NULL) return true;
    else return false;
}
int MULtiply_leaf_Node(Node *root)
{
    int x;

    x = root->data;
    if(is_Leaf(root)) return x;
    if (root == NULL) return 1;

    return 1 * MULtiply_leaf_Node(root->left)*
    MULtiply_leaf_Node(root->right);
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
    cout<<is_Leaf(root);

    //int x = MULtiply_leaf_Node(root);
    //cout<<x;

}