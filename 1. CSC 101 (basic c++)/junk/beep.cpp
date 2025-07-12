#include <iostream> 
#include <windows.h> // WinApi header 

using namespace std;

int main() 
{
    while(true){
        int x;
        cin>>x;
        if(x == 0){
           Beep(500,500); // 523 hertz (C5) for 50 milliseconds     
        //    Sleep(300); 
        }
        if(x == 1){ 
            Beep(643, 500);
        }
        if(x == 2){
            Beep(450,500);
            // Sleep(5);
        }
        if(x == 3){
            Beep(470,500);
            // Sleep(5);
        }
        if(x == 4){
            Beep(490,500);
            // Sleep(5);
        }
        if(x == 5){
            Beep(610,500);
            // Sleep(5);
        }
        if(x == 6){
            Beep(555,500);
            // Sleep(5);
        }
        if(x == 7){
 
            Beep(550,500);
            // Sleep(5);
        }
        if(x == 8){
            Beep(540,500);
            // Sleep(5);
        }
        if(x == 9){
            Beep(700,500);
            // Sleep(50);
        }
    }

    // cin.get();
    return 0; 
}