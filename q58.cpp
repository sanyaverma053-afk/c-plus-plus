
#include<iostream>
#include<string>
using namespace std;
class Employee
{
    private:int empID;
    string name;
    float basicSalary,hra,da,grossSalary;
    public:
    void inputDetails()
    {
        cout<<"enter employee ID:";
        cin>>empID;
        cout<<"enter employee name:";
        cin>>name;
        cout<<"enter basic salary:";
        cin>>basicSalary;
    }
    void calculateSalary()
    {
        hra=0.20*basicSalary;
        da=0.50*basicSalary;
        grossSalary=basicSalary+hra+da; 
    }
    void displaySalary()
    {
        cout<<"\nEmployee ID:"<<empID;
        cout<<"\nEmployee Name:"<<name;
        cout<<"\nGross Salary:"<<grossSalary;
    }
};
int main()
{
    Employee e;
    e.inputDetails();
    e.calculateSalary();
    e.displaySalary();
    return 0;
}
