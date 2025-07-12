#include <iostream>

using namespace std;

class Book
{
    string bookName;
    int noOfAuthor;
    float price;
    string *authorNames;
    // private fields: bookName (string), authorNames(string*), noOfAuthors (int), price (float)
public:
    void setBookInfo(){
        cout<<"enter book Name: ";
        cin>>bookName;
        cout<<"enter price: ";
        cin>>price;
        cout<<"No of Author: ";
        cin>>noOfAuthor;
        authorNames = new string[noOfAuthor];
        for(int i = 0; i < noOfAuthor; i++){
            cout<<"enter Author "<<i+1<<" name: ";
            cin>>authorNames[i];
        }
    }
    void showBookInfo(){
        cout<<"book Nmae = "<<bookName<<endl;
        cout<<"price = "<<price<<endl;
        cout<<"No of Author = "<<noOfAuthor<<endl;
        for(int i = 0; i < noOfAuthor; i++){
            cout<<"Author "<<i+1<<": "<<authorNames[i]<<endl;
        }
    }

};
class Course
{
    int noOfCredits;
    string courseId, courseTitle;
    Book textBook;
public: // add necessary methods including setters and getters,AND/OR declare friends, so that the given main() works
    Course& setCourseInfo(){
        cout<<"enter information for a Course "<<endl;
        cout<<"enter course ID: ";
        cin>>courseId;
        cout<<"enter course Title: ";
        cin>>courseTitle;
        cout<<"enter No of credits for this course: ";
        cin>>noOfCredits;
        textBook.setBookInfo();

        return *this;
    }
    void showCourseInfo(){
        cout<<"course ID = "<<courseId<<endl;
        cout<<"course Title = "<<courseTitle<<endl;
        cout<<"no of credits = "<<noOfCredits<<endl;
        textBook.showBookInfo();
    }
    int getCredit(){
        return noOfCredits;
    }
};
float getBillAmount(Course *&enrolledCourses, int n, int ratePerCredit, int scholarshipPercent)
{
    int totalCredit = 0;
    for(int i = 0; i < n; i++){
        totalCredit = totalCredit + enrolledCourses[i].getCredit();
    }
    return ((totalCredit*ratePerCredit)-(totalCredit*ratePerCredit*scholarshipPercent/100));

}
//add necessary global function so that the given main() works
int main()
{
    Course *enrolledCourses;
    int n, i, ratePerCredit, scholarshipPercent;
    cout <<"How many courses to enroll ? ";
    cin >> n;
    cout<<"Rate per credit for this student? ";
    cin >> ratePerCredit;
    cout<<"Scholarship (%) for this student? ";
    cin >> scholarshipPercent;
    enrolledCourses = new Course[n];
    for (i = 0; i < n; i++)
        enrolledCourses[i].setCourseInfo().showCourseInfo();
    cout <<"Total amount to be paid is :"<< getBillAmount(enrolledCourses, n, ratePerCredit, scholarshipPercent)<< endl;

    return 0;
}