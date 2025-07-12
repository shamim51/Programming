#include<iostream>

using namespace std;

struct node{
    int value;
    node *left;
    node *right;
    node *parent;
};

node* root= NULL;

node* create_node(int value){
    node *newnode = new node;
    newnode->value = value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = NULL;
    return newnode;
}

node* insert(node* root, int value){
    if(root == NULL){
        root = create_node(value);
    }
    else if(value < root->value){
        root->left = insert(root->left, value);
        root->left->parent = root;
    }
    else if(value >= root->value){
        root->right = insert(root->right, value);
        root->right->parent = root;
    }
    return root;

}


void myfunction(node* current_node)
{
    if(current_node!=NULL){
        myfunction(current_node->left);
        myfunction(current_node->right);
        if(root->parent != NULL){
            cout<<current_node->value<<" "<<current_node->parent->value<<endl;
        }
        

    }
}
int main()
{
    node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 0);
    root = insert(root, 15);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 17);

    myfunction(root);
    
    return 0;
}