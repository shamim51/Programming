#include <iostream>

using namespace std;

int main()
{
    float x[10],sum;
    int i,n,m,std;

    cout<<"how many numbers:";
    cin>>n;

    sum=0;
    for(i=0;i<n;i=i+1){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        sum=sum+x[i];
    }
    m=sum/n;

    cout<<"sum is:"<<sum<<endl;
    cout<<"mean is:" <<m<<endl;

    for(i=0;i<n;i=i+1){

        sum=sum+(m-x[i])*(m-x[i]);

    }
    std=sum/n;

    cout<<"std of=";

    for(i=0;i<n;i=i+1){
        cout<< x[i]<<" ";

    }
    cout<<" is: "<<std;
    return 0;
}
