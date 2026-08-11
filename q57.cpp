#include <iostream>
using namespace std;
class Student
{
private:string name;
int age;
public:
Student(string n, int a)
{
name=n;
age=a;
}
void display()
{
cout <<"Name:"<<name<<endl;
cout <<"Age:"<<age<<endl;
}
};
int main()
{
Student s1("Sanya", 18);
Student s2("Rahul", 19);
s1.display();
s2.display();
return 0;
}
