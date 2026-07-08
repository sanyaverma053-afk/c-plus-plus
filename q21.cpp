#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b number:";
    cin>>b;
    cout<<"enter c number:";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<"is greatest";
        }
        else{
            cout<<c<<"is greatest";
        }
    }
    else{
        if(b>c){
            cout<<b<<"is greatest";
        }
        else{
            cout<<c<<"is greatest";
        }
    }
}

