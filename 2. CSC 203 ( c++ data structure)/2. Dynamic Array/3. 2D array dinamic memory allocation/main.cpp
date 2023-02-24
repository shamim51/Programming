#include <iostream>

using namespace std;

int main()
{
    int r, c, i, j;
    cout<<"enter row:";
    cin>>r;
    cout<<"enter column:";
    cin>>c;
    int **arr;
    arr = new int*[r][c];
    for(i = 0; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            cout<<"arr["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
    for(i = 0; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}
