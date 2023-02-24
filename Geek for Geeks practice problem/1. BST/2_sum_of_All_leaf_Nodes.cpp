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

int sumOfLeafNodes(Node *r ){
    if(r == NULL){
        return 0;
    }
    if(r->left == NULL && r->right == NULL){
        return r->data;
    }
    return sumOfLeafNodes(r->right) + sumOfLeafNodes(r->left);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    // root = insert(root, 20);
    // root = insert(root, 8);
    // root = insert(root, 12);
    // root = insert(root, 7);
    // root = insert(root, 25);
    // root = insert(root, 1);

    inOrderTraversal(root);

    cout<<endl<<sumOfLeafNodes(root);
    
    
    return 0;
}