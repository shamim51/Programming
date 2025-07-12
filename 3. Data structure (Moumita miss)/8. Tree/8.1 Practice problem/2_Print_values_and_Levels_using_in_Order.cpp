#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right; int level;
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
    root->level = level;
    cout<<"value = "<<root->data<<" & level = "<<level<<endl;
    inOrderTraversal(root->right, level);
}

int count_node(Node *current_node, int current_level, int given_level, int counter){

    if(current_level == given_level){
        counter ++;
    }
    else if(current_node == NULL){
        return counter;
    }
    current_level++;
    return count_node(current_node->left, current_level, given_level, counter);
    return count_node(current_node->right, current_level, given_level, counter);
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

    inOrderTraversal(root, -1);

    cout<<count_node(root, 0, 2, 2);
    
    
    return 0;
}