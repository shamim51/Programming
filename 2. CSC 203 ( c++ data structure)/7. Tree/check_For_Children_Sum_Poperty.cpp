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
Node *getNewNode(int);
Node *insert(Node *, int);
bool is_leaf(Node *);
bool children_Sum_Poperty(Node *);
void levelOrderTraversal_line_By_Line(Node *);
void reverse_levelOrderTraversal(Node *root){
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
    root = insert(root, 10);
    root = insert(root, 12);
    root = insert(root, 5);
    root = insert(root, 4);
    root = insert(root, 6);
    root = insert(root, 15);

    levelOrderTraversal_line_By_Line(root);
    cout << endl;
    cout<<"childrenSumProperty: "<<children_Sum_Poperty(root)<<endl;
    //reverse_levelOrderTraversal(root);
    cout<<"is leaf ("<<root->data<<")="<<is_leaf(root)<<endl;
    cout<<"is leaf ("<<root->left->data<<")="<<is_leaf(root->left)<<endl;
    cout<<"is leaf ("<<root->right->data<<")="<<is_leaf(root->right)<<endl;
    cout<<"is leaf ("<<root->left->left->data<<")="<<is_leaf(root->left->left)<<endl;
    cout<<"is leaf ("<<root->left->right->data<<")="<<is_leaf(root->left->right)<<endl;
    cout<<"is leaf ("<<root->right->right->data<<")="<<is_leaf(root->right->right)<<endl;

    return 0;
}

bool children_Sum_Poperty(Node * root){
    if(!is_leaf(root)){
        int lsum, rsum;
        lsum = 0, rsum = 0;
        if(root->left!=NULL){
            lsum = root->left->data;
        }
        if(root->right!=NULL){
            rsum = root->right->data;
        }
        if(root->data!=(lsum + rsum)){
            return false;
        }
    }
    return true * children_Sum_Poperty(root->left) * children_Sum_Poperty(root->right);


}
bool is_leaf(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

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
        nodeCount--;
        if (nodeCount == 0)
        {
            level++;
            nodeCount = q.size();
            cout << endl;
        }
    }
}