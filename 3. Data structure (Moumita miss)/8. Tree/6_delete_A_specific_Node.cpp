#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node *parent;
};
Node *root = NULL;

int count = 1;

Node *getNewNode(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = NULL;

    return newNode;
}

Node* insert(Node* root, int value){
    if(root == NULL){
        root = getNewNode(value);
    }
    else if(value < root->data){
        root->left = insert(root->left, value);
        root->left->parent = root;
    }
    else if(value >= root->data){
        root->right = insert(root->right, value);
        root->right->parent = root;
    }
    return root;

}

Node* serach(Node*root, int value){
    if(root == NULL){
        return NULL;
    }
    else if(root->data == value){
        return root;
    }
    else if(value > root->data){
        return serach(root->right, value);
    }
    else if(value < root->data){
        return serach(root->left, value);
    }

    return NULL;

}

Node* find_min_node(Node *root){
    if(root->left == NULL){
        return root;
    }

    return find_min_node(root->left);
}

void replaceNode(Node *NodeToBeReplaced, Node *NewNode){
    if(NodeToBeReplaced->parent != NULL){
        if(NodeToBeReplaced->parent->data < NodeToBeReplaced->data){
            NodeToBeReplaced->parent->right = NewNode;
        }
        else{
            NodeToBeReplaced->parent->left = NewNode;
        }
    }
    else{
        root = NULL;
    }
    if(NewNode != NULL){
        NewNode->parent = NodeToBeReplaced->parent;
    }
}

void delete_Node(Node *root, int value){
    Node* node_to_be_deleted = serach(root, value);
    if(node_to_be_deleted == NULL){
        return;
    } 
    else{
        if(node_to_be_deleted->left == NULL){
            replaceNode(node_to_be_deleted, node_to_be_deleted->right);
        }
        else if(node_to_be_deleted->right == NULL){
            replaceNode(node_to_be_deleted, node_to_be_deleted->left);
        }
        else{
            Node *minNode = find_min_node(node_to_be_deleted->right);
            if(node_to_be_deleted->right == minNode){
                replaceNode(node_to_be_deleted, minNode);
                minNode->left = node_to_be_deleted->left;
                minNode->parent = minNode;
            }
            else{
                replaceNode(minNode, minNode->right);
                replaceNode(node_to_be_deleted, minNode);
                minNode->left = node_to_be_deleted->left;
                minNode->left->parent = minNode;
                minNode->right = node_to_be_deleted->right;
                minNode->right->parent = minNode;
            }
        }
        delete node_to_be_deleted;
    }
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
    Node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 0);
    root = insert(root, 15);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 17);
    // root = insert(root, 12);
    // root = insert(root, 15);
    // root = insert(root, 9);
    // Node *pNode;
    // pNode = find_min_node(root);
    // cout<<pNode->data;
    // cout<<endl;

    inOrderTraversal(root);
    delete_Node(root, 20);
    cout<<endl;
    inOrderTraversal(root);
    
    
    return 0;
}