#include <iostream>
using namespace std;

struct book{
    string Name, Author, Status;
    float popularity;
    book *next;
};
book *head = NULL;

void add_Book(string, string);
void delete_book(string);
void display_All();
void display_Available();
void borrow_Return(string, string);
void Availability_checking(string);
void find_Most_Popular();

int main()
{

    add_Book("robotics", "shamim");
    add_Book("machine larning", "khalid");
    add_Book("AI", "Ahmed");
    add_Book("Image processing", "omor");
    add_Book("Nural Network", "Faruk");
    add_Book("Inside C++", "shamim");
    add_Book("java", "Ahmed");

    //display_All();

    borrow_Return("robotics", "borrow");
    borrow_Return("robotics", "return");
    borrow_Return("java", "borrow");
    borrow_Return("robotics", "borrow");

    cout<<"*****Displaying all books*****"<<endl;
    display_All();

    cout<<"*****Displaying all available books*****"<<endl;
    display_Available();

    cout<<"*****dispalying availablity of a particular book*****"<<endl<<endl;
    Availability_checking("Nural Network");

    delete_book("java");

    cout<<"*****display after delete a book*****"<<endl;
    display_All();

    cout<<"******finding the most popular book*****"<<endl;
    find_Most_Popular();

    return 0;
}
void delete_book(string name){
    book *pBook = NULL;
    book *tBook = head;

    if(tBook->Name == name){
        head = tBook->next;
        delete tBook;
    }
    else{
        while(tBook!=NULL){
            if(tBook->Name == name){
                pBook->next = tBook->next;
                delete tBook;
            }
            pBook = tBook;
            tBook = tBook->next;
        }
    }

}
void Availability_checking(string name){
    book *tBook = head;
    while(tBook!=NULL){
        if(tBook->Name == name){
            cout<<tBook->Name<<" is "<<tBook->Status;
            break;
        }
        tBook = tBook->next;
    }
    cout<<endl<<endl;

}

void borrow_Return(string name, string BorR){
    book *tBook = head;
    while(tBook!=NULL){
        if(tBook->Name == name && BorR == "borrow" ){
            tBook->Status = "borrowed";
            tBook->popularity = tBook->popularity + 1;
        }
        else if(tBook->Name == name && BorR == "return" ){
            tBook->Status = "Available";
        }
        tBook = tBook->next;
    }

}

void add_Book(string name, string author){
    book *newBook = new book;
    newBook->Name = name;
    newBook->Author = author;
    newBook->Status = "Available";
    newBook->popularity = 0;
    newBook->next = NULL;

    if(head == NULL){
        head = newBook;
    }
    else{
        book *tBook = head;
        while(tBook->next!=NULL){
            tBook = tBook->next;
        }
        tBook->next = newBook;

    }

}

void display_Available(){
    if(head == NULL){
        cout<<"No Books in the library";
    }
    else{
        int i = 1;
        book *tBook = head;
        while(tBook!= NULL){
            if(tBook->Status == "Available"){

                cout<<i<<"."<<"Book Name: "<<tBook->Name<<endl;
                cout<<"  Book Author: "<<tBook->Author<<endl;
                cout<<"  status: "<<tBook->Status<<endl;
                cout<<"  Popularity: "<<tBook->popularity<<endl;
                cout<<endl;

                i++;
            }
            tBook = tBook->next;
        }

    }

}

void display_All(){
    if(head == NULL){
        cout<<"No Books in the library";
    }
    else{
        int i = 1;
        book *tBook = head;
        while(tBook!= NULL){
            cout<<i<<"."<<"Book Name: "<<tBook->Name<<endl;
            cout<<"  Book Author: "<<tBook->Author<<endl;
            cout<<"  status: "<<tBook->Status<<endl;
            cout<<"  Popularity: "<<tBook->popularity<<endl;
            cout<<endl;

            tBook = tBook->next;
            i ++;
        }

    }

}

void find_Most_Popular(){
    int highest = 0;
    book *tBook = head;
    while(tBook!=NULL){
        if(tBook->popularity > highest){
            highest = tBook->popularity;
        }
        tBook = tBook->next;
    }
    tBook = head;
    while(tBook->popularity != highest){
        tBook = tBook->next;
    }
    cout<<"\""<<tBook->Name<<"\""<<" is the most popular book"<<endl;

}
