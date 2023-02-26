#include <iostream>
using namespace std;

struct queue{
    int size;
    int top;
    int *q;

};

void push(queue &, int);
bool isfull(queue &);
void display(queue &);
void pop(queue &);

int main()
{
    queue que;
    que.top = -1;

    // cout<<"Enter Size: ";
    // cin>>que.size;
    
    que.size = 5;

    que.q = new int[que.size];

    push(que, 10);
    push(que, 20);
    push(que, 30);
    push(que, 40);
    push(que, 50);

    display(que);
    
    pop(que);
    
    display(que);
    
    push(que, 50);
    
    display(que);

    return 0;
}

void push(queue &que, int value){
    if(isfull(que)){
        cout<<"stack is full";
        return;
    }
    que.top = que.top + 1;
    que.q[que.top] = value;
    //cout<<"successfull"<<endl;


}
void pop(queue &que){
    if(que.top==-1){
        cout<<"queue is empty";
        return;
    }
    else{
        cout<<que.q[que.top]<<" is popped"<<endl;
        que.top = que.top - 1;
    }

}


void display(queue &que){
    if(que.top==-1){
        cout<<"queue is empty";
        return;
    }
    
    for(int i = 0; i <= que.top; i++){
        cout<<que.q[i]<<" ";
    }
    cout<<endl;
}

bool isfull(queue &que){
    if(que.top == que.size-1){
        return true;
    }
    else {
        return false;
    }

}