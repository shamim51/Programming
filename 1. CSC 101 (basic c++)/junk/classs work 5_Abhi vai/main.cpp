#include <iostream>

using namespace std;

int main()
{
  /*
    int i = 1;

    while(i<=10)
    {
        cout<<"Hello World!"<<endl;
        //i = i +1;
        i++;
    }
 */
    int i;
    for(i = 1; i <= 10;i = i+1){

        cout<<"hello world"<<endl;
    }

 /*

   int i=1;

   while(i<=10)
   {
       cout<<i<<endl;

       i++;
   }
   */
   int i;
   for(i = 1;i <=10; i = i+1;){

    cout<<i<<endl;
   }

   //1 - 10  odd number

   /*
   int i=1;

   while(i<=10)
   {
       cout<<i<<endl;

       i = i +2;
   }
   */
   int i;
   for(i =1;i <= 10; i = i+2){

    cout<<i<<endl;
   }

   // 1- 10 even number

   /*
   int i=2;

   while(i<=10)
   {
       cout<<i<<endl;
       i = i +2;
   } */

   int i;
   for(i = 2; i <=10; i = i+2){

    cout<<i<<endl;
   }

   // 10....1

   /*
   int i=10;

   while(i>=1)
   {
     cout<<i<<endl;
     i--;
   }
  */
  int i;
  for(i = 10; i>=1; i = i-1){

    cout<<i<<endl;
  }

  //10 -1

  /*
  int i=10;

  while(i>=1)
  {
      cout<<i<<endl;
      i = i-2;
  }
*/
    int i;
    for(i = 10; i>=1; i = i-2){
        cout<<i<<endl;
    }

//1- 10 even number
/*
  int i = 1;

  while(i<=10)
  {
      if(i%2==0)
      {
          cout<<i<<endl;
            //i++;
      }

      i++;

  }
*/
    int i;
    for(i = 1; i<=10; i = i+1){

        if(i%2==0){
            cout<<i;
        }
    }

/*
  int i=1;

  while(i<=10)
  {
      if(i%2!=0)
      {
          cout<<i;
      }
     // i++;
  }

  //111111.........1111
*/

    int i;
    for(i = 1; i<=10; i = i+1){

        if(i%2!=0){
            cout<<i<<endl;
        }
    }
/*
  int i =1;

  while(i<=100)
  {
      //cout<<i<<endl;

      if(i>=10)
      {
          break;
      }
      cout<<i<<endl;


      i++;
  }
*/

    int i;
    for(i = 1; i<=100; i = i+1){
        cout<<i<<endl;
        if(i>=10){
            break;
        }
    }


//continue
/*
int n=0;

while(n<10)
{
    n = n +1;

    if(n%2 == 0)
    {
        continue;
    }
    cout<<n<<endl;
}
*/
    int i;
    for(i = 0; i<10; i = i + 1){

        if (i%2==0){

            continue;
        }

        cout<<i<<endl;
    }

/*

int i=1;

while(i<=10)
{
    if(i%2==0)
    {
        continue;
    }
    cout<<i<<endl;
    i++;
}
*/

    int i;
    for(i = 1; i<=10; i = i+1){

        if (i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
/*
int n;
cin>>n; //2

int i = 1;

while(i<=10)
{
    cout<<n<<" * "<<i<<" =  "<<n*i<<endl;

    i++;
}
*/
    int i;
    for(i = 1; i<=10; i = i+1){

        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }

//while loop
/*
int i = 1;

while(i<=10)
{
    cout<<i<<endl;
    i++;
}
*/

//For loop
/*
for( int i = 1;  i<=10;   i++)
{
    //execution
     cout<<i<<endl;
}
*/

    int i, j;
    for(i = 1; i<=10; i = i+1){
        for(j = 1; j<=10; j = j+1){

            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
    }


    return 0;
}
