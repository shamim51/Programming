#include <iostream>

using namespace std;

int main()
{
    /*int T, N, i, j, k, r, counter;
    long long int fact;
    cin>>T;
    for(i = 0; i < T; i = i + 1){
        cin>>N;
        fact = 1;
        counter = 0;
        for(j = 1; j <= N; j = j + 1){
            fact = fact * j;
        }
        cout<<"fact:"<<fact<<endl;
        for(k = 0; fact != 0; k = k + 1){
            r = fact % 10;
            fact = fact / 10;
            if(r == 0){
                counter = counter + 1;
            }
            else{
                break;
            }
        }
        cout<<counter<<endl;
    }
    */
    int T, N, i, j, k, counter;
    cin>>T;
    //counter = 0;
    for(i = 0; i < T; i = i + 1){
        cin>>N;
        counter = 0;
        for(j = 1; j <= N; j = j + 1){
            k = 0;
            if(j % 5 == 0){
                counter = counter + 1;
                k = j/5;
                if(k % 5 == 0){
                    counter = counter + 1;
                }
            }

        }
        cout<<counter<<endl;


    }
    return 0;
}




