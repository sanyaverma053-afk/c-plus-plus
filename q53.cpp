
#include<iostream>
#include<string>
using namespace std;
class Player
{
    private:string name;
    int no_of_innings_played;
    int total_no_of_runs;
    int no_of_not_out;
    public:
    void readData()
    {
        cout<<"enter player name: ";
        getline(cin,name);
        cout<<"innings palyed";
        cin>>no_of_innings_played;
        cout<<"Total no of runs:";
        cin>>total_no_of_runs;
        cout<<"no of not out:";
        cin>>no_of_not_out;
    }
    void displayData()
    {
        cout<<"Player name is:"<<name<<endl;
        cout<<"Number of innings played:"<<no_of_innings_played<<endl;
        cout<<"Number of runs:"<<total_no_of_runs<<endl;
        cout<<"Number of not out:"<<no_of_not_out<<endl;
        cout<<"Batting avg:"<<total_no_of_runs/no_of_innings_played-no_of_not_out;
    }
};
int main()
{
Player p;
p.readData();
p.displayData();
return 0;
}
