#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter n1";
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cout<<"enter n2";
    cin>>n2;
    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        default:
        cout<<"Invalid operstor"<<endl;
    }
}

