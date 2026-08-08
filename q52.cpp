#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
    private:string name;
    int accountNo;
    float accountBalance;
    public:
    void read()
    {
        cout<<"Enter account holder name :";
        getline(cin,name);
        cout<<"Enter account no :";
        cin>>accountNo;
        cout<<"Enter account balance :";
        cin>>accountBalance;
    }
    void deposit()
    {
        float depositamount;
        cout<<"enter deposit amount:";
        cin>>depositamount;
        accountBalance=accountBalance+depositamount;
    }
    void withdraw()
    {
        float withdrawamount;
        cout<<"enetr withdraw amount:";
        cin>>withdrawamount;
        if(withdrawamount<=accountBalance)
        {
            accountBalance=accountBalance-withdrawamount;
        }
        else
        {
            cout<<"exit";
        }
    }
    void display()
    {
        cout<<"Account holder Name:"<<name<<endl;
        cout<<"Account number is:"<<accountNo<<endl;
        cout<<"Account Balance is:"<<accountBalance<<endl;
    }
};
int main()
{
    BankAccount b;
    b.read();
    b.deposit();
    b.withdraw();
    b.display();
    return 0;
}
