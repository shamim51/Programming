#include <iostream>

using namespace std;
void display();
void insert();
void Remove();
void find();
void RemoveAll();
void Exit();
void edit();
void prompt();

int main()
{
  prompt();

  return 0;
}
void display(){
  cout<<"printing"<<endl;
  prompt();
  
}
void insert(){
  cout<<"inserting"<<endl;
  prompt();
}
void Remove(){
  cout<<"removing"<<endl;
  prompt();
}
void find(){
  cout<<"finding"<<endl;
  prompt();
}
void RemoveAll(){
  cout<<"removing All"<<endl;
  prompt();
}
void Exit(){
  cout<<"exiting"<<endl;
  //prompt();
}
void edit(){
  cout<<"editing"<<endl;
  prompt();
}

void prompt(){
  string command;
  cout<<"enter command: ";
  cin>>command;
  
  if(command == "display"){
    display();
  }
  else if(command == "insert"){
    insert();
  }
  else if(command == "remove"){
    Remove();
  }
  else if(command == "find"){
    find();
  }
  else if(command == "removeall"){
    RemoveAll();
  }
  else if(command == "edit"){
    edit();
  }
  else if(command =="exit"){
    Exit();
  }
  else{
    cout<<"Invalid Command"<<endl;
  }
}
