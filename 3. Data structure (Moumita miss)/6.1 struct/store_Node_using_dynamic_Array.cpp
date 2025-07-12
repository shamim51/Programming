// #include<iostream>

// using namespace std;

// struct Node{
//     int data;
//     int no;
    
// };

// int main()
// {
    
//     Node *nodeArray = new Node[3];


//     for(int i = 0; i < 3; i = i + 1){
//         cin>>nodeArray[i].data;
//         cin>>nodeArray[i].no;
//     }

//     for(int i = 0; i < 3; i = i + 1){
//         cout<<nodeArray[i].data<<" "<<nodeArray[i].no<<endl;
//     }


    
    
//     return 0;
// }

#include <iostream>
using namespace std;

struct song
{
    string name;
    string singer;
    int releaseYear;
    string catagory;
    int numberOfTotalViews;

    void storeInfo()
    {
        cout << endl;
        cout << "Song Name : ";
        cin >> name;
        cout << "Singer Name : ";
        cin >> singer;
        cout << "Release Year : ";
        cin >> releaseYear;
        cout << "Catagory : ";
        cin >> catagory;
        cout << "Number OF Total Views : ";
        cin >> numberOfTotalViews;
        cout << endl;
    }

    void printSongs()
    {
        cout << name << endl;
    }

    void printSpecificCatagory()
    {
        cout << "Name : " << name << endl;
        cout << "Singer : " << singer << endl;
        cout << "Release Year : " << releaseYear << endl << endl;
    }

};

int main()
{
    int number_of_songs;
    cout << "How Many Songs Do You Want To Add : ";
    cin >> number_of_songs;

    song* new_song = new song[number_of_songs];
    for(int i=0; i<number_of_songs; i++)
    {
        new_song[i].storeInfo();
    }

    cout << "Names OF Songs : " << endl << endl;
    for(int i=0; i<number_of_songs; i++)
    {
        new_song[i].printSongs();
    }
    cout << endl;

    string catagory;
    cout << "Which Catagory : ";
    cin >> catagory;

    int counter = 0;
    for(int i=0; i<number_of_songs; i++)
    {
        if(new_song[i].catagory == catagory)
        {
            counter++;
        }
    }

    cout << endl << counter << " Songs OF " <<  catagory << " Catagory" << endl;
    cout << "The Details Are : " << endl << endl;
    for(int i=0; i<number_of_songs; i++)
    {
        if(new_song[i].catagory == catagory)
        {
            new_song[i].printSpecificCatagory();
        }
    }

    song* new_array = new song[number_of_songs];
    int j = 0;
    for(int i=0; i<number_of_songs; i++)
    {
        if((new_song[i].releaseYear > 2019) && (new_song[i].numberOfTotalViews > 10000))
        {
            new_array[j].name = new_song[i].name;
            j++;
        }
    }

    cout << "Popular Catagories : " << endl;
    for(int i=j; i>=0; i--)
    {
        cout << new_array[i].name << endl;
    }
    return 0;
}