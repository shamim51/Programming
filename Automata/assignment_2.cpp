#include<iostream>

using namespace std;

struct state{
    //string name;

    state *left = NULL;
    state *right = NULL;

    string forZero;
    string forOne;
};

state* getState(string forZero, string forOne){
    state *newState = new state;
    //newState->name = name;
    newState->forZero = forZero;
    newState->forOne = forOne;

    return newState;
}


int main()
{
    state *q0, *q1, *q2, *q3;

    q0 = getState("right", "left");
    q1 = getState("left", "right");
    q2 = getState("left", "right");
    q3 = getState("left", "right");


    q0->right = q1;
    q0->left = q3;

    q1->right = q2;
    q1->left = q0;

    q2->right = q0;
    q2->left = q3;

    q3->right = q2;
    q3->left = q3;


    string str = "0101";

    state* pointerState = NULL;
    pointerState = q0;
   for(int i = 0; i < str.size(); i++){
        if(str[i] == '0'){
            if(pointerState->forZero == "left"){
                pointerState = pointerState->left;
            }
            else{
                pointerState = pointerState->right;
            }
        }
        else{
            if(pointerState->forOne == "right"){
                pointerState = pointerState->right;
            }
            else{
                pointerState = pointerState->left;
            }
        }
   }
   if (pointerState == q1 || pointerState == q2) cout<<"ACCEPTED"<<endl;
   else cout<<"NOT ACCEPTED"<<endl;
   

    
    
    return 0;
}




#include<iostream>

using namespace std;

struct state{
    string name;

    state *left = NULL;
    state *right = NULL;

    string forZero;
    string forOne;
};

state * getState(string stateName, string forZero, string forOne){
    state *newState = new state;
    newState->name = stateName;
    newState->forZero = forZero;
    newState->forOne = forOne;

    return newState;
}

int main()
{
    state *q0, *q1, *q2, *q3;

    q0 = getState("q0", "right", "left");
    q1 = getState("q1", "left", "right");
    q2 = getState("q2" ,"left", "right");
    q3 = getState("q3", "left", "right");


    q0->right = q1;
    q0->left = q3;

    q1->right = q2;
    q1->left = q0;

    q2->right = q0;
    q2->left = q3;

    q3->right = q2;
    q3->left = q3;


    string str ;
    cin>>str;

  while(str != "X"){
    state* pointerState = NULL;
    pointerState = q0;
   for(int i = 0; i < str.size(); i++){
    //101
     cout<<pointerState->name<<"->";
        if(str[i] == '0'){
            if(pointerState->forZero == "left"){
                pointerState = pointerState->left;
            }
            else{
                pointerState = pointerState->right;
            }
        }
        else{
            if(pointerState->forOne == "right"){
                pointerState = pointerState->right;
            }
            else{
                pointerState = pointerState->left;
            }
        }
   }
   cout<<pointerState->name<<endl;
   if (pointerState == q1 || pointerState == q2) cout<<"ACCEPT"<<endl;
   else cout<<"Reject"<<endl;

   cin>>str;
  }
    return 0;
}