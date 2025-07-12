#include<iostream>

using namespace std;

int main()
{
    int row, col;
    cout<<"enter row: ";
    cin>>row;
    int **arr = new int*[row];
    for (int i = 0; i < row; i++){
        cout<<"enter column for row "<<i;
        cin>>col;
        arr[i] = new int[col];

        for(int j = 0; j < col; j++){
            arr[i][j] =  rand()%2;
        }

    }
    
    
    
    return 0;
}