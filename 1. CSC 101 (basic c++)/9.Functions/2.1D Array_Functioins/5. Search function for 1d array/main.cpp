#include <iostream>

using namespace std;

void input_1D(int [],int);
void print_1D(int [],int);

int search_1d(int[], int, int);

int main()
{
    int x[10],n,y,search_location;

    cout<<"How many int:";
    cin>>n;

    cout<<"*****Array x input*****"<<endl;
    input_1D(x,n);

    cout<<"what are you searching for:";
    cin>>y;

    search_location=search_1d(x,n,y);


    if(search_location>=0){
        cout<<y<<" is locating at ";
        cout<<search_location;
        cout<<" of array ";
        print_1D(x,n);
    }
    else{
        cout<<y<<" is not locating in array ";
        print_1D(x,n);
    }




    return 0;
}


int search_1d(int x[], int n, int y){
    int i, ismember=-1;
    for(i=0;i<n;i=i+1){
        if(x[i]==y){
            ismember=i;
        }

    }
    return ismember;

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
