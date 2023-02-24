#include <iostream>
using namespace std;

int power(float, int);
bool leap_Year(int);
int cal_Factorial(int);
bool int_Or_Float(float);

int main()
{
    int exponential, year, number_Fact, factorial;
    float base, number;
    bool float_or_int;

    cout << endl
         << "**********TASK->4 **********" << endl;
    for (int i; i != 5;)
    {
        cout << "Enter an option(1/2/3/4/5/6): ";
        cin >> i;
        if (i == 1)
        {
            cout << "enter base: ";
            cin >> base;
            cout << "enter exponential: ";
            cin >> exponential;
            cout << base << "^" << exponential << " is " << power(base, exponential) << endl;
        }
        else if (i == 2)
        {
            cout << "Enter year: ";
            cin >> year;
            //leapYear = leap_Year(year);
            if (leap_Year(year) == 1)
            {
                cout << "year " << year << " is a leap Year" << endl;
            }
            else
            {
                cout << "year " << year << " is not a leap Year" << endl;
            }
        }
        else if (i == 3)
        {
            cout << "Enter number for calculate factorial : ";
            cin >> number_Fact;
            factorial = cal_Factorial(number_Fact);
            cout << number_Fact << " factorial is: " << factorial << endl;
        }
        else if (i == 4)
        {
            cout << "Enter Number for checking float or int :";
            cin >> number;
            float_or_int = int_Or_Float(number);
            if (float_or_int == 1)
            {
                cout << number << " is an integer" << endl;
            }
            else
            {
                cout << number << " is float" << endl;
            }
        }
        else if (i == 6)
        {
            cout << "Invalid!" << endl;
            cout << "please enter another option" << endl;
        }
        cout << endl;
    }

    return 0;
}

int power(float a, int x)
{
    float result = 1;
    for (int i = 0; i < x; i = i + 1)
    {
        result = result * a;
    }
    return result;
}

bool leap_Year(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            return true;
        }
    }
    if (year % 100 != 0)
    {
        if (year % 4 == 0)
        {
            return true;
        }
    }
    return false;
}
int cal_Factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i = i + 1)
    {
        fact = fact * i;
    }
    return fact;
}
bool int_Or_Float(float number)
{
    int i = number;
    if ((number - i) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
