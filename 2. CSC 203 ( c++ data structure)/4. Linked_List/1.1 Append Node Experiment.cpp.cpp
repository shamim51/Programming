#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = ((Node *)(0x151480));

int main(){
    // int *i = new int;
    // *i = 10;
    // cout<<i;
    int *i = (int *)(0xc814a0);
    cout<<*i;
    return 0;
}