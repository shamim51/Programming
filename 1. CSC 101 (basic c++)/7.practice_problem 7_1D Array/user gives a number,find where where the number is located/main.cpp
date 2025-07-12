#include <iostream>

using namespace std;

int main()
{
    int x[10],i,n,y,count,search_ind[10];

    cout<<"enter the size of n(n<=10):";
    cin>>n;

    for(i=0;i<n;i=i+1){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<"enter y: ";
    cin>>y;

    count=0;

    for(i=0;i<n;i=i+1){
        if(x[i]==y){
            search_ind[count]=i;
            count=count+1;
        }

    }

    cout<<endl<<y<<" is here in:";

    for(i=0;i<count;i=i+1){

        cout<<search_ind[i]<<" ";
    }
    cout<<" th  position" ;





    return 0;
}
