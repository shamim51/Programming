#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

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
    else if(value >= root->data){
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

int find_max(Node *root){
    if(root->right == NULL){
        return root->data;
    }
    return find_max(root->right);
}

int find_min(Node *root){
    if(root->left == NULL){
        return root->data;
    }
    return find_min(root->left);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 9);
    root = insert(root, 7);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 15);
    root = insert(root, 14);
    root = insert(root, 13);
    root = insert(root, 5);
    root = insert(root, 200);
    root = insert(root, 6);
    root = insert(root, -1);
    root = insert(root, 6);
    root = insert(root, 6);
    root = insert(root, 50000);
    root = insert(root, 6);
    root = insert(root, 6);
    root = insert(root, 9);

    inOrderTraversal(root);

    cout<<endl;
    cout<<"min= "<<find_min(root)<<endl;
    cout<<"max = "<<find_max(root);
    
    
    return 0;
}