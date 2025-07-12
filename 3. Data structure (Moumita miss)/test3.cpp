// #include<iostream>
 
// using namespace std;
 
// struct node
// {
//     int value;
//     node* left;
//     node* right;
// };
 
// node* root= NULL;
 
// node* create_node(int new_value)
// {
//     node* newnode = new node;
//     newnode->value = new_value;
//     newnode->left = NULL;
//     newnode->right = NULL;
 
//     return newnode;
// }
 
// bool search_value(node* current_node, int given_value)
// {
//     if(current_node==NULL) {
//         return false;
//     }
//     else if(current_node->value==given_value) {
//         return true;
//     }
//     else if(current_node->value<given_value) {
//         return search_value(current_node->right, given_value);
//     }
//     else {
//         return search_value(current_node->left, given_value);
//     }
// }
 
// void preorder(node* current_node)
// {
//     if(current_node!=NULL) {
//         cout<<current_node->value<<endl;
//         preorder(current_node->left);
//         preorder(current_node->right);
//     }
// }
 
// void preorder2(node* current_node)
// {
//     if(current_node==NULL) {
//         return;
//     }
//     cout<<current_node->value<<endl;
//     preorder2(current_node->left);
//     preorder2(current_node->right);
// }
 
 
// node* insert_value(node* current_node, int new_value)
// {
//     if(current_node==NULL) {
//         return create_node(new_value);
//     }
//     else if(current_node->value<new_value) {
//         current_node->right = insert_value(current_node->right, new_value);
//     }
//     else {
//         current_node->left = insert_value(current_node->left, new_value);
//     }
//     return current_node;
// }
 
// int main()
// {
//     root = insert_value(root, 8);
//     insert_value(root,3);
//     insert_value(root,11);
//     insert_value(root,10);
//     cout<<search_value(root,110)<<endl;
//     cout<<endl;
//     preorder(root);
//     cout<<endl;
//     preorder2(root);
// }

#include<iostream>
 
using namespace std;
 
struct node
{
    int value;
    node* left;
    node* right;
    node* parent;
};
 
node* root= NULL;
 
node* create_node(int new_value)
{
    node* newnode = new node;
    newnode->value = new_value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = NULL;
 
    return newnode;
}
 
bool search_value(node* current_node, int given_value)
{
    if(current_node==NULL) {
        return false;
    }
    else if(current_node->value==given_value) {
        return true;
    }
    else if(current_node->value<given_value) {
        return search_value(current_node->right, given_value);
    }
    else {
        return search_value(current_node->left, given_value);
    }
}
 
void preorder(node* current_node)
{
    if(current_node!=NULL) {
        cout<<current_node->value<<endl;
        preorder(current_node->left);
        preorder(current_node->right);
    }
}
 
void inorder(node* current_node)
{
    if(current_node!=NULL) {
        inorder(current_node->left);
        cout<<current_node->value<<endl;
        inorder(current_node->right);
    }
}
 
void postorder(node* current_node)
{
    if(current_node!=NULL) {
        postorder(current_node->left);
        postorder(current_node->right);
        cout<<current_node->value<<endl;
    }
}
 
void preorder2(node* current_node)
{
    if(current_node==NULL) {
        return;
    }
    cout<<current_node->value<<endl;
    preorder2(current_node->left);
    preorder2(current_node->right);
}
 
int find_min(node* current_node)
{
    if(current_node->left!=NULL) {
        return find_min(current_node->left);
    }
    else {
        return current_node->value;
    }
}
 
node* search_node(node* current_node, int given_value)
{
    if(current_node==NULL) {
        return NULL;
    }
    else if(current_node->value==given_value) {
        return current_node;
    }
    else if(current_node->value<given_value) {
        return search_node(current_node->right, given_value);
    }
    else {
        return search_node(current_node->left, given_value);
    }
}
 
void replace_node(node* node_to_be_replaced, node* new_node)
{
    if(node_to_be_replaced->parent!=NULL) {
        if(node_to_be_replaced->parent->value<node_to_be_replaced->value) {
            node_to_be_replaced->parent->right = new_node;
        }
        else {
            node_to_be_replaced->parent->left = new_node;
        }
    }
    else {
        root = new_node;
    }
    new_node->parent = node_to_be_replaced->parent;
}
 
void delete_value(int given_value)
{
    node* node_to_be_deleted = search_node(given_value);
    if(node_to_be_deleted==NULL) {
        return;
    }
    else {
        if(node_to_be_deleted->left==NULL) {
            replace_node(node_to_be_deleted,node_to_be_deleted->right);
        }
        delete node_to_be_deleted;
    }
}
 
node* insert_value(node* current_node, int new_value)
{
    if(current_node==NULL) {
        return create_node(new_value);
    }
    else if(current_node->value<new_value) {
        current_node->right = insert_value(current_node->right, new_value);
        current_node->right->parent = current_node;
    }
    else {
        current_node->left = insert_value(current_node->left, new_value);
        current_node->left->parent = current_node;
    }
    return current_node;
}
 
int main()
{
    root = insert_value(root, 8);
    insert_value(root,3);
    insert_value(root,11);
    //insert_value(root,10);
    //insert_value(root,0);
    cout<<search_value(root,110)<<endl;
    cout<<endl;
    preorder(root);
    cout<<endl;
    preorder2(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    cout<<find_min(root);
}