#include <iostream>
using namespace std;

int main()
{
    int number, fizzed_Num, buzzed_Num, fizzed_Buzzed_Num,
    //fizzed_Num = 0;
    //buzzed_Num = 0;
    //fizzed_Buzzed_Num = 0;
    cout << "Number to count: ";
    cin >> number;
    for (int i = 0; i < number; i = i + 1)
    {
        if (number % 3 == 0)
        {
            cout << "Fizz" << endl;
            fizzed_Num = fizzed_Num + 1;
        }
        else if (number % 5 == 0)
        {
            cout << "Buzz" << endl;
            buzzed_Num = buzzed_Num + 1;
        }
        else if (number % 3 == 0 && number % 5 == 0)
        {
            cout << "Fizzbuzz" << endl;
            fizzed_Buzzed_Num = fizzed_Buzzed_Num + 1;
        }
    }

    cout<<"Num fizzed: "<<fizzed_Num<<endl;
    cout<<"Num buzzed : "<<buzzed_Num<<endl;
    cout<<"Num fizzbuzzed: "<<fizzed_Buzzed_Num<<endl;

    

return 0;
    
}