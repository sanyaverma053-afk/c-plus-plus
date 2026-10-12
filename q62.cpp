#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int units;
    float bill;
    cout<<"enter user name:";
    getline(cin,name);
    cout<<"enter units used:";
    cin>>units;
    if(units<=100)
    {
        bill=units*0.60;
    }
    else if(units<=300)
    {
        bill=(100*0.60)+(units-100)*0.80;
    }
    else
    {
        bill=(100*0.60)+(200*0.80)+(units-300)*0.90;
    }
    if(bill<50)
    {
        bill=50;
    }
    if(bill>300)
    {
        bill=bill+bill*0.50;
    }
    cout<<"user name:"<<name<<endl;
    cout<<"unit consumed:"<<units<<endl;
    cout<<"electricity bill:"<<bill<<endl;
    return 0;
}
