#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *root = NULL;

Node *getNewNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        root = getNewNode(data);
    }
    else if (data < root->data)
    {
        //go to left subtree

        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        //go to right subtree

        root->right = insert(root->right, data);
    }

    return root;
}

void preOrder(Node *root)
{
    if (root == NULL) //base case
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;

    Node *tNode = root;

    q.push(tNode);

    while (!q.empty()) //while queue is not empty
    {
        Node *x = q.front();
        q.pop();

        cout << x->data << " ";

        if (x->left != NULL)
        {
            q.push(x->left);
        }

        if (x->right != NULL)
        {
            q.push(x->right);
        }
    }
}

/*void reverseLevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    stack<Node *> stk;

    Node *tNode = root;

    q.push(tNode);

    while (!q.empty()) //while queue is not empty
    {
        Node *x = q.front();
        q.pop();

        stk.push(x);

        if (x->left != NULL)
        {
            q.push(x->left);
        }

        if (x->right != NULL)
        {
            q.push(x->right);
        }
    }

    while (!stk.empty())
    {
        cout << stk.top()->data << " ";
        stk.pop();
    }
}
*/

int main()
{
    Node *root = NULL;

    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 12);

    // preOrder(root);
    // cout << endl;

     //inOrder(root);
     //cout << endl;

    // postOrder(root);
    // cout << endl;

    cout << "Level Order Traversal : " << endl;

    levelOrderTraversal(root);

    //cout << "\nReverse Level Order Traversal : " << endl;
    //reverseLevelOrderTraversal(root);
}