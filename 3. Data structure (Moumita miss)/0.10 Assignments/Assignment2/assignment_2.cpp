#include<iostream>
#include<unistd.h>
using namespace std;

string queue[10];
int size = 10;
int front =0;
int rear = 0;

bool isfull(){
    if(rear == size){
        return true;
    }
    return false;
}
bool isempty(){
    if(front == rear ){
        return true;
    }
    return false;
}

void enqueue(string str){
    if(!isfull()){
        queue[rear] = str;
        rear++; 
    }
    else{
        cout<<"queue is full"<<endl;
    }
}
void dequeue(){
    if(!isempty()){
        front++;
    }
}
void front_element(){
    cout<<queue[front]<<endl;
}

int main()
{
    int person = 0;
    string name;
    while(person!=30){
        cout<<"*****To maintain social distance please enter 10 person only*****"<<endl;
        while(!isfull()){
            person++;
            cout<<person<<" No person name: ";
            getline(cin, name);
            enqueue(name);
            if(isfull()){
                if(person != 30){
                    cout<<endl<<"limit is full, please wait...."<<endl;
                }
                else{
                    cout<<endl<<"limit is full for today"<<endl;

                }
            }

        }

        while(!isempty()){
            usleep(120000000);
            front_element();
            dequeue();
        }
        front = rear = 0;
        if(person!=30) cout<<endl<<"**********You can enter now**********"<<endl;

    }
    cout<<"---bank is closed for today---";
    
    
    return 0;
}