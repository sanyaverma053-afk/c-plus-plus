#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"enter l:";
    cin>>l;
    int b;
    cout<<"enter b:";
    cin>>b;
    int area=l*b;
    int perimeter=2*(l+b);
    cout<<"Area is:"<<area<<endl;
    cout<<"Perimeter is:"<<perimeter<<endl;
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else{
        cout<<"perimeter is greater than area";
    }
}

