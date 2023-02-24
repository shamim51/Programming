#include<iostream>
#include<list>
using namespace std;

void display(list<int>);
void display2(list<int>);
void display3(list<int>);

int main()
{
    list<int>lst1;
    lst1.push_back(1);
    lst1.push_back(2);
    lst1.push_back(3);
    lst1.push_back(4);
    lst1.push_back(5);
    lst1.push_back(6);

    display(lst1);
    display2(lst1);
    display3(lst1);
    /*list<int>::iterator it;
    it = lst1.begin();
    cout<<*it;
    for(it = lst1.begin(); it != lst1.end(); it++){
        cout<<*it<<" ";
    }*/

    return 0;
}
void display3(list<int>lst){
    for(int x : lst){
        cout<<x<<" ";
    }

}

void display2(list<int>lst){
    for(auto it = lst.begin(); it!=lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void display(list<int>lst){
    list<int>::iterator it;
    for(it=lst.begin(); it!=lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
