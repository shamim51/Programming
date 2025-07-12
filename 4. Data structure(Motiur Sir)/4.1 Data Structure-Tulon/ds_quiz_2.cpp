#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void sortQ(queue<int> &Q){
    int max;
    queue<int> R;
    stack<int>s;
	
    int size = Q.size();
    for(int i = 0; i < size; i++){
        max = Q.front();
        Q.push(max);
        for(int i = 0; i < Q.size()-1; i++){
            int front = Q.front();

            if(front > max) max = front;

            Q.pop();
            Q.push(front);
        }
        Q.front() = max;


        int *check = new int[max+1];

        for(int i = 0; i < max+2; i++){
            check[i] = 0;
        }
        while(!Q.empty()){
            if(check[Q.front()] == 0){
                R.push(Q.front());
                check[Q.front()] = 1;
            }

            Q.pop();
        }
        delete []check;


        /*vector<bool> check(max, 0);
        while(!Q.empty()){
            if(check[Q.front()] == 0){
                R.push(Q.front());
                check[Q.front()] = 1;
            }

            Q.pop();
        }*/

        while (!R.empty()) {
            Q.push(R.front());
            R.pop(); 
        }
        s.push(Q.front());
        Q.pop();

    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
 
int main() {
	queue<int> q;

	q.push(3);
	q.push(5);
    q.push(1);
    q.push(6);
	q.push(8);
	q.push(11);
	q.push(13);

    sortQ(q);
}