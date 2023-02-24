#include <iostream>

using namespace std;

struct customer_movie_list{
    string name;
    customer_movie_list *next;

    customer_movie_list *head = NULL;

    void add_Into_Movie_list(string str){
        customer_movie_list *newNode = new customer_movie_list;
        newNode->name = str;
        newNode ->next = NULL;

        if(head == NULL){
            head = newNode;
        }
        else{
            customer_movie_list *tNode = head;
            while(tNode->next!=NULL){
                tNode = tNode->next;
            }
            tNode->next = newNode;
        }
    }

};

struct Customer
{
    int customerId;
    string customerName, address, phoneNo, email;

    string payementMethod;


    void setCustomerInfo()
    {
        cout<<"Enter customer ID : ";
        cin>>customerId;
       cout<<"Enter Customer Name : "<<endl;
       cin>>customerName;
       cout<<"Enter Address : "<<endl;
       cin>>address;
       cout<<"Enter Phone No : "<<endl;
       cin>>phoneNo;
       cout<<"Enter Email : "<<endl;
       cin>>email;
    }

    void showCustomerInfo()
    {
        cout<<"Customer Name : "<<customerName<<" Address : "<<address<<"  Phone No : "<<phoneNo
        <<" Email : "<<email<<endl;
    }

    struct customer_movie_list list;

    Customer *next;

};



struct Movie
{
    int movieId;
    string movieName, imdbRating,type,timing;
    float price;
    int noOfSeat;

    void setMovieInfo()
    {
        cout<<"Enter movie ID : "<<endl;
        cin>>movieId;
        cout<<"Enter movie Name : "<<endl;
        cin>>movieName;
        cout<<"Enter IMDB Rating ; "<<endl;
        cin>>imdbRating;
        cout<<"Enter movie type  "<<endl;
        cin>>type;
        cout<<"Enter movie price : "<<endl;
        cin>>price;
        cout<<"Enter movie timing : "<<endl;
        cin>>timing;
        cout<<"Enter No of seat available "<<endl;
        cin>>noOfSeat;
    }
    void showMovieInfo()
    {
        cout<<"Movie Name : "<<movieName<<" IMDB Rating : "<<imdbRating<<" Type : "<<type<<" Time  : "<<timing
        <<" Ticker Price : "<<price<<"No of Seat Available ; "<<noOfSeat<<endl;
    }

    Movie *next; //Node *next;
};



struct Cineplex
{
    string name,address, phoneNo;

    Movie *movieList;
    Movie *upcomingMovie;
    Customer *customerList;


    Cineplex()
    {
        name = address = phoneNo  = "TBA";
        movieList = NULL;
        upcomingMovie =NULL;
        customerList  = NULL;
    }

    void buyTicket()
    {
         string movieName;
         cout<<"Enter movie name : "<<endl;
         cin>>movieName;

         Movie *tNode = movieList;

         while(tNode!=NULL && tNode->movieName!=movieName)
         {
             tNode = tNode->next;
         }

         if(tNode->noOfSeat==0)
         {
             cout<<"Sorry! No Ticket is available at this moment!"<<endl;


         }
         else
         {
            customer_movie_list{}.add_Into_Movie_list(movieName);
            //add_Into_Movie_list(movieName);
            tNode->noOfSeat = tNode->noOfSeat - 1;
         }
    }

    void ticketprice(){
        string day;
        cout<<"Enter day :";
        cin>>day;
        int price;
        cout<<"Enter ticket price :";
        cin>>price;

        if (day=="friday"|| day=="saturday" )
        {
            cout<<"Price for ticket after discount : "<<(price - ((price*20)/100))<<endl;;
        }
        else
        {
            cout<<"No discount available : "<<price<<endl;
        }
    }
    void deleteCustomerAccount()
    {
        int id;
        cout<<"Enter customer id  : "<<endl;
        cin>>id;

         Customer *pNode = NULL;
         Customer *tNode = customerList;
         while(tNode!=NULL && tNode->customerId!=id)
         {
            pNode = tNode;
            tNode = tNode->next;
         }
         if(pNode==NULL)
         {
             customerList = customerList->next;
             delete tNode;
         }
         else
         {
             pNode->next = tNode->next;
             delete tNode;
         }
    }


    void createCustomerAccount()
    {
        Customer *newNode = new Customer;
        newNode->setCustomerInfo();
        newNode->next = NULL;

        if(customerList==NULL)
        {
            customerList  = newNode;
        }
        else
        {
            Customer *tNode = customerList;
            while(tNode->next!=NULL)
            {
                tNode = tNode->next;
            }
            tNode->next = newNode;
        }

    }

    void addToMovieList(Movie *&t)
    {
        Movie *tNode  = movieList;
        while(tNode->next!=NULL)
        {
            tNode = tNode->next;
        }
        tNode->next = t;
    }

   void premierAMovieFromUpcomingMovie(int id)
    {
        Movie *pNode  = NULL;
        Movie *tNode = upcomingMovie;
        while(tNode!=NULL && tNode->movieId!=id)
        {
            pNode= tNode;
            tNode = tNode->next;
        }
        if(pNode==NULL)
        {
            upcomingMovie = upcomingMovie->next;
            tNode->next = NULL;
           addToMovieList(tNode);
        }
        else
        {
           pNode->next = tNode->next;
           tNode->next = NULL;

           addToMovieList(tNode);
        }
    }

    void deleteMovie(int movieId)
    {
        Movie *pNode = NULL;
        Movie *tNode = movieList;
        while(tNode!=NULL && tNode->movieId != movieId)
        {
            pNode  = tNode;
            tNode  = tNode->next;
        }
        if(pNode==NULL)
        {
            movieList = movieList->next;
            delete tNode;
        }
        else
        {
            pNode->next = tNode->next;
            delete tNode;
        }
    }

    void viewUpcomingMovieInfo()
    {
        Movie *tNode= upcomingMovie;
        while(tNode!=NULL)
        {
            tNode->showMovieInfo();
            tNode = tNode->next;
        }
    }


    void createUpcomingMovie()
    {
        Movie *newNode  = new Movie;
        newNode->setMovieInfo();
        newNode->next = NULL;

        if(upcomingMovie==NULL)
        {
            upcomingMovie = newNode;
        }
        else
        {
            Movie *tNode = upcomingMovie;
            while(tNode->next!=NULL)
            {
                tNode  = tNode->next;
            }
            tNode->next = newNode;
        }

    }

    void createNewMovie()
    {
        Movie *newNode = new Movie;
        newNode->setMovieInfo();
        newNode->next  = NULL;

        if(movieList==NULL)
        {
            movieList = newNode;
        }
        else
        {
            Movie *tNode = movieList;
            while(tNode->next!=NULL)
            {
                tNode = tNode->next;
            }
            tNode->next = newNode;
        }

    }

    void showMovieList()
    {
        Movie *tNode = movieList;
        while(tNode!=NULL)
        {
            tNode->showMovieInfo();
            tNode = tNode->next;
        }
    }

    void setCineplexInfo()
    {
        cout<<"Enter cineplex name : ";
        cin>>name;
        cout<<"Enter cineplex address : ";
        cin>>address;
        cout<<"Enter cinplex phone no : ";
        cin>>phoneNo;

        cout<<endl;
    }

    void showCineplexInfo()
    {
        cout<<"Cineplex name : "<<name<<" Address : "<<address<<" Phone No  : "<<phoneNo<<endl;
    }

};

int main()
{
    Cineplex starCineplex;

    int choice;

    do
    {
        cout<<"Enter 1 to set cineplex info : "<<endl;
        cout<<"Enter 2 to show cineplex Info : "<<endl;
        cout<<"Enter 3 to create new movies : "<<endl;
        cout<<"Enter 4 to delete a particular movie : "<<endl; //cineplex Authority
        cout<<"Enter 5 to create account : "<<endl; //customer
        cout<<"Enter 6 to view movie list : "<<endl; //customer
        cout<<"Enter 7 to buy a ticket "<<endl; //customer
        cout<<"Enter 8 to create upcoming Movie : "<<endl; //cineplex Authority
        cout<<"Enter  9  to see upcoming movie list : "<<endl;
        cout<<"Enter 10 to premier a movie from upcoming movie"<<endl; //cineplex Authority
        cout<<"Enter 11 to delete Customer Accout "<<endl;
        cout<<"Enter 12 to buy tickect "<<endl;
        cout<<"Enter 13 to set ticket price"<<endl;
        cout<<"enter 14 to exit"<<endl;


        cin>>choice;

        if(choice==1)
        {
            starCineplex.setCineplexInfo();
        }
        else if(choice ==2)
        {
            starCineplex.showCineplexInfo();
        }
        else if(choice==3)
        {
            starCineplex.createNewMovie();
        }
        else if(choice==4)
        {
            int id;
            cout<<"Enter movie id to be deleted ";
            cin>>id;
            starCineplex.deleteMovie(id);
        }
        else if(choice==5)
        {
           starCineplex.createCustomerAccount();
        }
        else if(choice==6)
        {
            starCineplex.showMovieList();
        }
        else if(choice==8)
        {
            starCineplex.createUpcomingMovie();
        }
        else if(choice==9)
        {
            starCineplex.viewUpcomingMovieInfo();
        }
        else if(choice==10)
        {
            int id;
            cout<<"Enter upcoming movie id : ";
            cin>>id;
            starCineplex.premierAMovieFromUpcomingMovie(id);
        }
        else if(choice==11)
        {
            starCineplex.deleteCustomerAccount();
        }
        else if(choice==12)
        {
            starCineplex.buyTicket();
        }
        else if(choice==13)
        {
           starCineplex.ticketprice();
        }

    }
    while(choice!=14);


    return 0;

}
