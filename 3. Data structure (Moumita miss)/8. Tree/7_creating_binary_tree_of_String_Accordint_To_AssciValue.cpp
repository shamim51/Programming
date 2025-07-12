#include<iostream>

using namespace std;

struct BSTNode{
    string str = " ";
    int asciiValue = 0;
    BSTNode *left = nullptr;
    BSTNode *right = nullptr;
};

BSTNode *getNewNode(string STR, int value){
    BSTNode *newNode = new BSTNode;
    newNode->str = STR;
    newNode->asciiValue = value;
    
    return newNode;
}

BSTNode* insert(BSTNode *&root, string STR, int value){

        if(root == NULL){
            root = getNewNode(STR, value);
        }
        else if(STR.size() < 4){
            cout<<"size less then 4"<<endl;
        }
        else if(value < root->asciiValue){
            root->left = insert(root->left, STR, value);
        }
        else if(value > root->asciiValue){
            root->right = insert(root->right, STR, value);
        }
        else if(value == root->asciiValue){
            cout<<"same value detected"<<endl;
        }
        
        return root;

}

void inOrderTraversal(BSTNode *root){
    if(root == NULL){
        return;
    }
   
    inOrderTraversal(root->left);
    cout<<root->str<<" ";
    inOrderTraversal(root->right);
}

int main()
{
    BSTNode *Root = NULL;
    Root = insert(Root, "ATCA", 281);
    Root = insert(Root, "ACCT", 283);
    Root = insert(Root, "CGCT", 289);
    Root = insert(Root, "CTTG", 306);
    Root = insert(Root, "GTCA", 287);
    Root = insert(Root, "TGAA", 285);
    Root = insert(Root, "TGCA", 287);
    Root = insert(Root, "ATCC", 283);
    Root = insert(Root, "GTGG", 297);
    Root = insert(Root, "CTCC", 285);
    Root = insert(Root, "CTCT", 302);
    Root = insert(Root, "GCCT", 289);
    Root = insert(Root, "TCTC", 302);
    Root = insert(Root, "TCGC", 289);
    Root = insert(Root, "CTT", 235);

    inOrderTraversal(Root);
    
    
    return 0;
}