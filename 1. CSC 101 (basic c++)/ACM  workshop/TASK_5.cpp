#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many students are there: ";
    cin >> n;
    cout<<endl;

    long int student_Id[n];
    float quiz_1_marks[n];
    float quiz_2_marks[n];
    float mid_Marks[n];
    float final_Marks[n];
    float grade[n];

    for (int i = 0; i < n; i = i + 1)
    {
        cout << "student[" << i + 1 << "] ID = ";
        cin >> student_Id[i];
        cout << "student[" << i + 1 << "] quiz -> 1 marks = ";
        cin >> quiz_1_marks[i];
        cout << "student[" << i + 1 << "] quiz -> 2 marks = ";
        cin >> quiz_2_marks[i];
        cout << "student[" << i + 1 << "] mid -> marks = ";
        cin >> mid_Marks[i];
        cout << "student[" << i + 1 << "] final -> marks = ";
        cin >> final_Marks[i];
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i = i + 1)
    {
        //cout << ((((3.333333) * quiz_1_marks[i]) / 100) * 10) << " " << ((((100 / 30) * quiz_2_marks[i]) / 100) * 10) << " " << ((((100 / 50) * mid_Marks[i]) / 100) * 30) << " " << ((((100 / 50) * final_Marks[i]) / 100) * 50)<<endl;
        grade[i] = ((((3.333333) * quiz_1_marks[i]) / 100) * 10) + ((((3.333333) * quiz_2_marks[i]) / 100) * 10) + ((((100 / 50) * mid_Marks[i]) / 100) * 30) + ((((100 / 50) * final_Marks[i]) / 100) * 50);
        //cout << "Grade->" << i << "= " << grade[i] << endl;
    }

    for (int i = 0; i < n; i = i + 1)
    {
        cout << "student-> ID =" << student_Id[i] << endl;
        cout << "Grade = ";

        if (grade[i] >= 90 && grade[i] <= 100)
            cout << "A" << endl;
        else if (grade[i] >= 80 && grade[i] < 90)
            cout << "A-" << endl;
        else if (grade[i] >= 70 && grade[i] < 80)
            cout << "B+" << endl;
        else if (grade[i] >= 60 && grade[i] < 70)
            cout << "B" << endl;
        else if (grade[i] >= 50 && grade[i] <= 60)
            cout << "B-" << endl;
        else if (grade[i] < 50)
            cout << "F" << endl;

        cout << endl;
    }
    return 0;
}