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

int find_Min(Node *root){
    if(root->left == NULL){
        return root->data;
    }
    return find_Min(root->left);
}

int find_Max(Node *root){
    if(root->right == NULL){
        return root->data;
    }
    return find_Max(root->right);
}

int main()
{
    Node *Root = NULL;
    Root = insert(Root, 20);
    Root = insert(Root, 27);
    Root = insert(Root, 15);
    Root = insert(Root, 18);
    Root = insert(Root, 10);
    Root = insert(Root, 4);
    Root = insert(Root, 50);
    Root = insert(Root, 47);
    Root = insert(Root, 5);

    inOrderTraversal(Root);

    cout<<endl;
    cout<<find_Min(Root);
    
    
    return 0;
}