
#include <iostream>
using namespace std;
class Rectangle
{
private:
int length, breadth;
public:
void input()
{
cout << "Enter length: ";
cin >> length;
cout << "Enter breadth: ";
cin >> breadth;
}
void area()
{
int a;
a = length * breadth;
cout << "Area is:" << a << endl;
}
void perimeter()
{
int p;
p = 2 * (length + breadth);
cout << "Perimeter is:" << p << endl;
}
};
int main()
{
Rectangle r;
r.input();
r.area();
r.perimeter();
return 0;
}
