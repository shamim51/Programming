#include <iostream>
#include<stack>
using namespace std;

bool is_Operand(char);
int pre(char);
void convert(string);


int main()
{
    string str;
    cout << "enter the string: ";
    cin>>str;
    convert(str);
    //cout<<pre('*');

    return 0;
}
void convert(string infix){
    //cout<<infix<<endl;
    stack<char>stk;
    char *postfix = new char[infix.length()+1];
    int i = 0, j = 0;
    while(infix[i]!='\0'){
        if(is_Operand(infix[i])){
            postfix[j] = infix[i];
            i++;
            j++;

        }
        else{
            if(pre(infix[i]) > pre(stk.top())){
                stk.push(infix[i]);
                i++;
            }
            else{
                postfix[j] = stk.top();
                stk.pop();
                j++;
            }
        }

    }
    while(!stk.empty()){
        postfix[j] = stk.top();
        stk.pop();
        j++;
    }
    i = 0;
    while(postfix[i]!= '\0'){
        cout<<postfix[i];
        i = i + 1;
    }
}

bool is_Operand(char c){
    if(c == '+' || 'c' == '-' || c == '*' || c == '/') return false;
    else return true;
}

int pre(char c){
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    else return 0;
}
