
#include<iostream>
#include<string>
using namespace std;
class Player
{
    private:string playerName;
    string teamName;
    int matchesPlayed;
    int runsScored;
    float battingAverage;

    void inputDetails()
    {
        cout<<"enter player name:";
        getline(cin, playerName);
        cout<<"enter team name:";
        getline(cin,teamName);
        cout<<"enter matches played";
        cin>>matchesPlayed;
        cout<<"enter runs scored:";
        cin>>runsScored;
    }
    public:
    void calculateBattingAverage()
    {
        if(matchesPlayed == 0){
            battingAverage=0;
            cout<<"Batting avg can not be calculate ";
        }
        else
        {
            battingAverage=(float)runsScored/matchesPlayed;
        }

    }
    void displayStatistics()
    {
        cout<<"Player name:"<<playerName<<endl;
        cout<<"team name:"<<teamName<<endl;
        cout<<"matches played:"<<matchesPlayed<<endl;
        cout<<"runs score:"<<runsScored<<endl;
        cout<<"batting average:"<<battingAverage<<endl;
    }
    Player()
    {
        inputDetails();
    }
};
int main()
{
    Player p;
    p.calculateBattingAverage();
    p.displayStatistics();
    return 0;

}
