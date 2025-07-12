#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;
};
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

void levelOrderTraversal_line_By_Line(Node *root)
{
    queue<Node *> q;
    Node *tNode = root;
    q.push(tNode);
    int level = 0;
    int nodeCount = q.size();
    while (!q.empty())
    {
        tNode = q.front();
        q.pop();
        cout << tNode->data << " ";
        if (tNode->left != NULL)
        {
            q.push(tNode->left);
        }
        if (tNode->right != NULL)
        {
            q.push(tNode->right);
        }
        nodeCount --;
        if(nodeCount == 0){
            level ++;
            nodeCount = q.size();
            cout<<endl;
        }
    }
}
void reverse_levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    stack<int> s;
    Node *tNode = root;
    q.push(tNode);
    while (!q.empty())
    {
        tNode = q.front();
        q.pop();
        s.push(tNode->data);
        //cout << tNode->data << " ";
        if (tNode->left != NULL)
        {
            q.push(tNode->left);
        }
        if (tNode->right != NULL)
        {
            q.push(tNode->right);
        }
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
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

    levelOrderTraversal_line_By_Line(root);
    cout << endl;
    //reverse_levelOrderTraversal(root);

    return 0;
}