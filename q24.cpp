#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x:";
    cin>>x;
    cout<<"enter y:";
    cin>>y;
    if(x>0 && y>0){
        cout<<"x and y in first quadrant";
    }
    else if(x<0 && y>0){
       cout<<"x and y in second quadrant";
    }
    else if(x<0 && y<0){
       cout<<"x and y in third quadrant";
    }
    else if(x>0 && y<0){
        cout<<"x and y in fourth quadrant";
    }
    else if(x==0 && y==0){
        cout<<"x and y at origin";
    }
    else{
        cout<<"Invalid";
    }
}
