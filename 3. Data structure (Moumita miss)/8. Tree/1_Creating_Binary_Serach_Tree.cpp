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

void inOrderTraversal(Node *root){
    if(root == NULL){
        return;
    }
   
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

int main()
{
    Node *Root = NULL;
    Root = insert(Root, 10);
    Root = insert(Root, 20);
    Root = insert(Root, 25);

    inOrderTraversal(Root);
    
    
    return 0;
}