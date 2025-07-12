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
    cout<<root->data<<" "<<endl;
    inOrderTraversal(root->right);
}

void printRoottoA(Node *root, int A){
    if(A >= root->data){
        if(root->data == A){
            cout<<root->data;
            return;
        }
        cout<<root->data<<"--";
        if(A > root->data){
            printRoottoA(root->right, A);
        }
    
        else{
            printRoottoA(root->left, A);
        }
    }
    else{
        cout<<"--";
    }
    
}

int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 9);
    root = insert(root, 7);
    root = insert(root, 6);
    root = insert(root, 8);
    root = insert(root, 15);
    root = insert(root, 25);

    printRoottoA(root, 21);

    // inOrderTraversal(root, -1);
    
    
    return 0;
}