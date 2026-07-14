#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int f=1;//store karega highest factor
    for(int i=n/2;i>=1;i--)
    {
        if (n%i==0){
           f=i;
           break;
            
        }
    }
    cout<<f;
}
