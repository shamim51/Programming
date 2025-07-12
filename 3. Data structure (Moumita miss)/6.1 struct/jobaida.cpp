#include<iostream>
using namespace std;

struct goal{
    int teamNumber, id;

    void set_goal_info(){
        int t_n, id_n;
        cout<<"enter team No: ";
        cin>>t_n;
        teamNumber = t_n-1;
        cout<<"enter player Id: ";
        cin>>id_n;
        id = id_n-1;
        // team[teamNumber][id] = 1;
    }
    void show_goal_info(){
        cout<<teamNumber<<endl;
        cout<<id<<endl;
    }
    
};

int main()
{
    int **team = new int*[2];
    for(int i = 0; i < 2; i++){
        team[i] = new int[10];
    }
    for(int i = 0; i < 2; i = i + 1){
        for(int j = 0; j < 10; j = j + 1){
            team[i][j] = 0;
        }
    }
    goal goal1;
    goal1.set_goal_info();
    // goal1.show_goal_info();
    team[goal1.teamNumber][goal1.id]++;

    goal goal2;
    goal2.set_goal_info();
    team[goal2.teamNumber][goal2.id]++;

    goal goal3;
    goal3.set_goal_info();
    team[goal3.teamNumber][goal3.id]++;

    goal goal4;
    goal4.set_goal_info();
    team[goal4.teamNumber][goal4.id]++;

    goal goal5;
    goal5.set_goal_info();
    team[goal5.teamNumber][goal5.id]++;

    for(int i = 0; i < 2; i = i + 1){
        cout<<"Team-"<<i<<endl;
        cout<<"id    : ";
        for(int k = 1; k < 11; k = k + 1){
            cout<<k<<" ";
        }
        cout<<endl;
        cout<<"goals : ";
        for(int j = 0; j < 10; j = j + 1){
            cout<<team[i][j] <<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}