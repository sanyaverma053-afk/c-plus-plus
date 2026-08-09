
#include<iostream>
using namespace std;
class Demo
{
int a,b;
public:Demo(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<a<<" "<<b<<endl;
}
};
int main()
{
Demo ob1(100,200);
Demo ob2(ob1);
ob1.display();
ob2.display();
return 0;
}
