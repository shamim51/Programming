#include <iostream>
using namespace std;

void printLinePattern(int, char);

int main()
{
    int n, i;

    cout << "Enter N: ";
    cin >> n;

    for(i = 1; i <= n; i = i + 1){
        printLinePattern(n-i,' ');
        printLinePattern(i,'*');
        printLinePattern(i,'*');
        cout <<endl;
    }

    return 0;
}

void printLinePattern(int n, char c){
    int i;
    for(i = 0; i < n; i = i + 1){
        cout << c;
    }
}
