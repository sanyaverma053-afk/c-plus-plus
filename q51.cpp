
#include<iostream>
#include<string>
using namespace std;
class Employee
{
    private:string name;
    int employeeID;
    float monthlySalary;
    public:
    void readInfo()
    {
        cout<<"Enter employee name:";
        getline(cin,name); 
        cout<<"Enter employee ID";
        cin>>employeeID; 
        cout<<"Enter monthly salary ";
        cin>>monthlySalary;
    }
    void displayInfo()
    {
        cout<<"Name is :"<<name<<endl;
        cout<<"Employee ID is :"<<employeeID<<endl;
        cout<<"Monthly Salary is:"<<monthlySalary<<endl;
        cout<<"Annual Salary is:"<<monthlySalary*12<<endl;
    }};

int main()
{
Employee e;
e.readInfo();
e.displayInfo();
return 0;
}
    


