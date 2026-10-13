#include<iostream>
#include<string>
using namespace std;
class Cab
{
private:
int cabID;
string name;
float distance,ratePerKm,totalFare;
void inputDetails()
{
    cout<<"enter cab ID:";
    cin>>cabID;
    cin.ignore();
    cout<<"enter customer name:";
    getline(cin,name);
    cout<<"enter distance:";
    cin>>distance;
    cout<<"enter rate per km:";
    cin>>ratePerKm;
}
public:
void calculateFare()
{
    inputDetails();
    totalFare=distance*ratePerKm;
}
void displayDetails()
{
    cout<<"cab id is:"<<cabID<<endl;
    cout<<"customer name is:"<<name<<endl;
    cout<<"distance is :"<<distance<<endl;
    cout<<"rate per km is:"<<ratePerKm<<endl;
    cout<<"total fare is:"<<totalFare<<endl;
}
};
int main()
{
    Cab c[5];
    for(int i=0;i<5;i++)
    {
        cout<< "\nEnter details for Cab Ride " << i + 1 << endl;
        c[i].calculateFare();
    }

    for(int i = 0; i < 5; i++)
    {
        c[i].displayDetails();
    }

    return 0;
}
