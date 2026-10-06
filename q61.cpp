//Ques 1. Check loan eligibility in a bank. Create 2 classes

#include<iostream>
using namespace std;
class Customer
{
protected:
    string name;
    int age;
    float salary;
public:
    void getData()
    {
        cout<<"enter customer name:";
        cin>>name;
        cout<<"enter age:";
        cin>>age;
        cout<<"entersalary:";
        cin>>salary;
    }
};
class Loan : public Customer
{
private:
    float loanAmount;
public:
    void checkEligibility()
    {
        cout << "Enter loan amount: ";
        cin >> loanAmount;

        if (age >= 21 && salary >= 30000)
        {
            cout << "\nCustomer is eligible for loan." << endl;
        }
        else
        {
            cout << "\nCustomer is not eligible for loan." << endl;
        }
    }
};

int main()
{
    Loan l;

    l.getData();
    l.checkEligibility();

    return 0;

}
