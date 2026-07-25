#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of array";
cin>>n;
int a[n],sum=0;
cout<<"enter elemrnts";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<"sum of all array is ="<<sum;
return 0;
}
