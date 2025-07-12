#include<iostream>
using namespace std;

struct Employee
{
int empid;
int workprogress = 0;
string name, address, phoneno, gender, qualification, position;
float salary;
//Date dateofjoining;
int *dailyworkprogress = new int[2];
void calcworkprogress (){
    float sum = 0;
    for (int i = 0; i < 2; i++){
	    if (dailyworkprogress[i] == 0){
	        return;
	    }
    }

    for (int i = 0; i < 2; i++){
        sum = sum +  dailyworkprogress[i];
    }
    workprogress = sum / 2;

  }

  void updatedailyworkprogress ()
  {
    int n, workprogress;
    cout << "Enter day no : ";
    cin >> n;
    cout << "Enter work progress of that day : ";
    cin >> workprogress;
    dailyworkprogress[n - 1] = workprogress;
    calcworkprogress ();
  }
  void setjobapplicantemployeeinfo ()
  {
    cout << "Enter Employee Id : ";
    cin >> empid;
    cout << "Enter Employee Name : ";
    cin >> name;
    cout << "Enter Employee Address : ";
    cin >> address;
    cout << "Enter Phone No : ";
    cin >> phoneno;
    cout << "Enter Gender : ";
    cin >> gender;
    cout << "Enter Qualification : ";
    cin >> qualification;
    cout << "Apply for which Position ? ";
    cin >> position;
    cout<<"salary";
    cin>>salary;
  }
  void showjobapplicantemployeeinfo ()
  {

    cout << "Employee Id : " << empid << " Name : " << name << " Address : "<< address
    << " Phone No : " << phoneno << " Gender : " << gender <<
    " Qualification : " << qualification << " Position : " << position <<" salary"<<salary<<
      endl;
  }
  void setemployeeinfo ()
  {
    cout<<"Enter Employee Id : ";
    cin>>empid;
    cout<<"Enter Employee Name : ";
    cin>>name;
    cout<<"Enter Employee Address : ";
    cin>>address;
    cout<<"Enter Phone No : ";
    cin>>phoneno;
    cout<<"Enter Gender : ";
    cin>>gender;
    cout<<"Enter Qualification : ";
    cin>>qualification;
    cout<<"Enter salary : ";
    cin>>salary;

   // dateofjoining.setdate ();
  }
  void showemployeeinfo ()
  {

    cout << "Employee Id : " << empid << " Name : " << name << " Address : "
      << address << " Phone No : " << phoneno << " Gender : " << gender <<
      " Qualification : " << qualification << " Salary : " << salary << endl;
  //  dateofjoining.showdate ();
  }
  Employee *next;
};

struct offerjob
{
  int vacancy;
  string position, requirements;
  float salary, deadline;

   float getofferedsalary()
    {
        return salary;
    }

  void setofferjob ()
  {
    cout<<"Enter Vacancy : ";
    cin>>vacancy;
    cout<<"Enter Position : ";
    cin>>position;
    cout<<"Enter Salary : ";
    cin>>salary;
    cout<<"Enter Deadline : ";
    cin>>deadline;
    cout<<"Enter Educational Requirements : ";
    cin>>requirements;
  }
  void showofferjob()
  {
    cout<<"Vacancy : "<<vacancy<<" Position : "<<position<<" Salary : "<<salary<<" Deadline : "<<deadline
    <<" Educational Requirements : "<<requirements<<endl;
  }

  offerjob *next;

};

struct office
{
   string name, address, phoneno;
   int noofemployee;
   Employee *permanentemployee;
   Employee *jobapplicant;
   offerjob *givenjob;
   office() //constructer
   {
     name=address=phoneno="NULL";
     noofemployee=0;
     permanentemployee=NULL;
     jobapplicant=NULL;
     givenjob=NULL;
   }
   void firedemployee(Employee *firedemp ){
     Employee *pnode=NULL;
     Employee *tnode=permanentemployee;
     while( tnode!=NULL && tnode!=firedemp )
     {
        pnode=tnode;
        tnode=tnode->next;
     }
     if(pnode==NULL)
     {
        cout<<tnode->name<<", you are fired"<<endl;
        permanentemployee=permanentemployee->next;
        delete tnode;
     }
     else
     {
        cout<<tnode->name<<", you are fired"<<endl;
        pnode->next=tnode->next;
        delete tnode;
     }
}

    void increaseSalaryOrFiredBasedOnWorkProgress()
    {
        Employee *tnode = permanentemployee;
        while(tnode!=NULL)
        {
            if(tnode->workprogress<=10)
            {
                firedemployee(tnode);
            }
            else if(tnode->workprogress>90)
            {
                tnode->salary= ( tnode->salary + ( 0.3 * tnode->salary ) ); //30%increment
                cout<<tnode->name<<", Salary for progress: "<<tnode->salary<<endl ;
            }
            else if(tnode->workprogress>80)
            {
                tnode->salary = ( tnode->salary + ( 0.2 * tnode->salary ) ); //20%increment
                cout<<tnode->name<<", Salary for progress: "<<tnode->salary<<endl ;
            }
            else if(tnode->workprogress>50)
            {
                tnode->salary = ( tnode->salary + ( 0.1 * tnode->salary )) ; //10%increment
                cout<<tnode->name<<", Salary for progress: "<<tnode->salary<<endl ;
            }
            tnode = tnode->next;
        }
    }

    void updateemployeeworkprogress(int empid)
    {
        Employee *tnode = permanentemployee;
        while(tnode!=NULL)
        {
            if(tnode->empid==empid)
          {
            tnode->updatedailyworkprogress();
            break;
          }
         tnode=tnode->next;
        }
    }

    void officeofferajob()
    {
        offerjob *newnode = new offerjob;
        newnode->setofferjob();
        newnode->next=NULL;

        if(givenjob==NULL)
        {
            givenjob=newnode;
        }
        else
        {
            offerjob *tnode= givenjob;
            while(tnode->next!=NULL)
            {
                tnode=tnode->next;
            }
            tnode->next=newnode;
        }
    }
    void viewofferjob()
    {
        offerjob *tnode =givenjob;
        cout<<"\nCompany name : "<<name<<" Address : "<<address<<" Phoneno : "<<phoneno<<endl;
        while(tnode!=NULL)
        {
            tnode->showofferjob();
            tnode=tnode->next;
        }
    }
    void appointapplicant (Employee *&newnode) //permanent employee list e new employee add hocche
    {
        Employee *tnode=permanentemployee;
        while(tnode->next!=NULL)
        {
            tnode=tnode->next;
        }
        tnode->next=newnode;
    }
    void appointajobapplicant(int id) //hr will choose from cv list...
    {
        Employee *pnode=NULL;
        Employee *tnode=jobapplicant;
      while(tnode!=NULL && tnode->empid!=id)
      {
        pnode=tnode;
        tnode=tnode->next;
      }
      if(tnode==jobapplicant)
      {
        jobapplicant=jobapplicant->next;
        tnode->next=NULL;
        appointapplicant(tnode);
      }
      else
      {
        pnode->next=tnode->next;
        tnode->next=NULL;
        appointapplicant(tnode);
      }
    }
    void deletealljobapplicant()
    {
        Employee *tnode=jobapplicant;
        while(tnode!=NULL)
       {
           jobapplicant=jobapplicant->next;
           delete tnode;
           tnode=jobapplicant;
       }
    }
    void addajobapplicant() //cv will add like linked list
    {
        Employee *newnode= new Employee;
        newnode->setjobapplicantemployeeinfo();
        newnode->next=NULL;

        if(jobapplicant==NULL)
        {
            jobapplicant=newnode;
        }
        else
        {
            Employee *tnode=jobapplicant;
            while(tnode->next!=NULL)
            {
                tnode=tnode->next;
            }
            tnode->next=newnode;
        }
    }
    void viewalljobapplicant()
    {
        Employee *tnode=jobapplicant;
        while(tnode!=NULL)
        {
            tnode->showjobapplicantemployeeinfo();
            tnode=tnode->next;
        }
    }
    bool findaemployee(int empid)
    {
        Employee *tnode =permanentemployee;
        while(tnode!=NULL)
        {
          if (tnode->empid==empid)
          {
            return true;
          }
          tnode=tnode->next;
        }
        return false;
    }
    void appendemployee()
    {
        Employee *newnode=new Employee;
        newnode->setemployeeinfo();
        newnode->next=NULL;

        if(permanentemployee==NULL)
        {
            permanentemployee=newnode;
        }
        else
        {
            Employee *tnode=permanentemployee;
            while(tnode->next!=NULL)
            {
                tnode=tnode->next;
            }
            tnode->next=newnode;
        }
    }
    void showallemployee()
    {
        Employee *tnode=permanentemployee;
        while(tnode!=NULL)
        {
            tnode->showemployeeinfo();
            tnode=tnode->next;
        }
    }
    void setOffice()
    {
        cout<<"Enter Office Name : ";
        cin>>name;
        cout<<"Enter Office Address : ";
        cin>>address;
        cout<<"Enter Phone No : ";
        cin>>phoneno;
        cout<<"Enter No of Employee : ";
        cin>>noofemployee;
        for( int i=0; i<noofemployee;i++)
        {
            appendemployee();
        }
    }

    void showoffice()
    {
        cout<<" Office Name : "<<name<<" Address : "<<address<<" Phone No"<<phoneno<<endl;
        for(int i=0;i<noofemployee;i++)
        {
            showallemployee();
        }
    }
};


int main ()
{
    office bjit;

    int choice;
    do
      {
          cout<<"Press 1 to set office and its all Permanent Employee info "<<endl;
	      cout<<"Press 2 to show all Employee "<<endl;
	      cout<<"Press 3 to offer a job "<<endl;
	      cout<<"Press 4 to view Company Information, position, Vacancy,Salary, Deadline Information..."<<endl;
          cout<<"Press 5 to drop CV "<<endl;
	      cout<<"Press 6 to find employee "<<endl;
          cout<<"Press 7 to view all job applicant "<<endl;
	      cout<<"Press 8 to appoint a job applicant "<<endl;
	      cout<<"Press 9 to delete all jobapplicant CV"<<endl;
          cout<<"Press 10 to update daily work progress after 30days month work progress will be auto calculated "<<endl;
	      cout<<"Press 11 increase Salary Or Fired Based On Work Progress "<<endl;
          cout<<"Press 12 to exit "<<endl;

      cin >> choice;

      if (choice == 1)
	  {
	    bjit.setOffice();
	  }
      else if (choice == 2)
	  {
	    bjit.showallemployee();
	  }
	  else if (choice == 3)
	  {
	    bjit.officeofferajob();
	  }
	  else if (choice == 4)
	  {
	    bjit.viewofferjob();
	  }
	  else if (choice == 5)
	  {
	    bjit.addajobapplicant();
	  }
      else if (choice == 6)
	  {
	    int id;
	    cout<<"Enter employee id to search ";
	    cin>>id;

	    if(bjit.findaemployee(id))
	    cout<<id<<" Employee id is found !"<<endl;
	    else
	    cout<<id<<" Employee id not found !"<<endl;
	  }
	  else if (choice == 7)
	  {
	    bjit.viewalljobapplicant();
	  }
      else if (choice == 8)
	  {
	    int id;
	    cout<<" Enter applicant id "<<endl;
	    cin>>id;
	    bjit.appointajobapplicant(id);
	  }
	  else if (choice == 9)
	  {
	    bjit.deletealljobapplicant();
	  }
	  else if (choice == 10)
	  {
	    int id;
	    cout<<"Enter employee id : ";
	    cin>>id;
	    bjit.updateemployeeworkprogress(id);
	  }
	  else if (choice == 11)
	  {
	    bjit.increaseSalaryOrFiredBasedOnWorkProgress();
	  }
    }
    while (choice != 12);

    return 0;
  }
