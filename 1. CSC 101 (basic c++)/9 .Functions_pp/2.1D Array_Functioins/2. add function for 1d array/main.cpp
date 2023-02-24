#include <iostream>

using namespace std;

void input_1D(int [],int);
void print_1D(int [],int);
void add_1D(int [],int [],int [],int);

int main()
{
    int x[10],y[10],z[10],n;

    cout<<"How many int:";
    cin>>n;

    cout<<"*****Array x input*****"<<endl;
    input_1D(x,n);

    cout<<"*****Array Y input*****"<<endl;
    input_1D(y,n);

    add_1D(x,y,z,n);

    cout<<"*****Array X output*****"<<endl;
    print_1D(x,n);

    cout<<"*****Array Y output*****"<<endl;
    print_1D(y,n);

    cout<<"*****Array Z output*****"<<endl;
    print_1D(z,n);


    return 0;
}

void input_1D(int x [],int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<"["<<i<<"]=";
        cin>>x[i];
    }


}



void print_1D(int x [],int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }
    cout<<endl;

}

void add_1D(int x [],int y [],int z [],int n){
    int i;
    for(i=0;i<n;i=i+1){

       z[i]= x[i]+y[i];
    }


}
