#include <iostream>

using namespace std;

int main()
{
    int i;
    float number, sum = 0, average = 0;
    cout<<"how many courses: ";
    cin>>number;
    for(i = 0; i < number; i = i + 1){
        float mid, final, total;
        cout<<"enter percentage of mid marks: ";
        cin>>mid;
        cout<<"enter percentage of final marks: ";
        cin>>final;
        total = (mid + final)/2;
        sum = sum + total;

        cout<<"total marks of course "<<i+1<<" is: "<<mid+final<<endl;
        cout<<"total marks in percentage is: "<<total<<"%"<<endl<<endl;
    }
    average = sum/i;
    cout<<"Total num of "<<i<<" course is: "<<sum<<endl;
    cout<<"The average of those Number is: "<<average<<endl;


    return 0;
}
