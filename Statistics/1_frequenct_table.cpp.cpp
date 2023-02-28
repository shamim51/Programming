#include <iostream>

using namespace std;

int main()
{
    /*
    int arr[100];
    for(int i = 0; i < 100; i++){
        arr[i] = 0;

    }

    cout<<endl;

    for(int i = 0; i < 60000; i++){
        arr[((rand()%40)+30)]++;
    }

    int result = 0;

    int pointer = 30;

    int result2 = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 5; j++){
            result = result + arr[pointer];
            pointer++;
        }

        //pointer
        cout<<pointer-5<<"-"<<pointer<<"="<<result<<endl;
        result2 = result2 +result;
        result = 0;
    }
    cout<<endl<<result2;
    */

    //my solution
    /*
    int arr[4];

    for(int i = 0; i < 100; i++){
        arr[(((rand()%40)+50)/10)-5]++;
    }

    for(int i = 0; i < 4; i++){
        cout<<arr[i]<<" ";
    }*/

    //solution by Anwar sir
    int minimum = 50;
    int arr[4] = {0,0,0,0};

    for(int i = 0; i < 100; i++){
        arr[(((rand()%40)+50)-minimum)/10]++;
    }

    for(int i = 0; i < 4; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
