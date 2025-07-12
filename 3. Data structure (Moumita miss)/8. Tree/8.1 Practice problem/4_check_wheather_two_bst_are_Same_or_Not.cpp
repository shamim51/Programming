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

void inOrderTraversal(Node *root, int level){
    if(root == NULL){
        return;
    }
    level++;
    inOrderTraversal(root->left, level);
    cout<<"value = "<<root->data<<" & level = "<<level<<endl;
    inOrderTraversal(root->right, level);
}

void find_path(Node *root, int value){
    if(root->data == value){
        cout<<" "<<root->data<<" ";
        return;
    }
    cout<<root->data<<" ";
    if(value > root->data){
        find_path(root->right, value);
    }
    
    else{
        find_path(root->left, value);
    }
    
}

bool same_or_not(Node *root, Node *root2){
    if(root == NULL && root == NULL){
        return true;
    }
    if(root->data != root2->data){
        return false;
    }
    return same_or_not(root->left, root2->left) * same_or_not(root->right, root2->right);
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

    Node *root2 = NULL;
    root2 = insert(root2, 10);
    root2 = insert(root2, 20);
    root2 = insert(root2, 30);
    root2 = insert(root2, 40);
    root2 = insert(root2, 9);
    root2 = insert(root2, 5);
    root2 = insert(root2, 6);
    root2 = insert(root2, 8);
    root2 = insert(root2, 15);
    root2 = insert(root2, 25);

    // find_path(root, 21);

    inOrderTraversal(root, -1);

    cout<<endl;

    inOrderTraversal(root2, -1);

    // inOrderTraversal(root, -1);

    cout<<same_or_not(root, root2);
    
    
    return 0;
}