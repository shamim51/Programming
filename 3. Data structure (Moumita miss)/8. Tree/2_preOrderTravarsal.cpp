#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};
//Node *root = NULL;

Node *getNewNode(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    cout<<"returning  ";
    return newNode;
}

Node* insert(Node* root, int value){
    if(root == NULL){
        root = getNewNode(value);
    }
    else if(value < root->data){
        root->left = insert(root->left, value);
    }
    else if(value > root->data){
        root->right = insert(root->right, value);
    }
    return root;

}

void preOrderTraversal(Node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 7);
    root = insert(root, 25);
    root = insert(root, 1);

    preOrderTraversal(root);
    
    
    return 0;
}