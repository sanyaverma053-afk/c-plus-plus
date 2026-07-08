#include<iostream>
using namespace std;
int main(){
    int Ram,Shyam,Ajay;
    cout<<"enter Ram age:";
    cin>>Ram;
    cout<<"enter Shyam age:";
    cin>>Shyam;
    cout<<"enter Ajay age:";
    cin>>Ajay;
    if(Ram<Shyam && Ram<Ajay){
        cout<<"Ram is youngest";
    }
    else if(Shyam<Ram && Shyam<Ajay){
        cout<<"Shyam is youngest";
    }
    else{
        cout<<"Ajay is youngest";
    }
}
