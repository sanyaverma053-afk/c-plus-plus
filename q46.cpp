#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of array:";
cin>>n;
int a[n],i,even=0,odd=0;
cout<<"enter elements:"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
if(a[i]%2==0){
even++;
}
else
{
odd++;
}
}
cout<<"even="<<even;
cout<<"odd is="<<odd;
return 0;
}

