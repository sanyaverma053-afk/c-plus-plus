#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:string name;
    int roll_no;
    int marks[5];
    public:
    void readInfo()
    {
        cout<<"Enter student name:";
        getline(cin,name); 
        cout<<"Enter roll no";
        cin>>roll_no; 
        cout<<"Enter marks"; 
        for(int i=0;i<5;i++) 
        cin>>marks[i];
    }
    void displayInfo()
    {
        cout<<"Name is :"<<name<<endl;
        cout<<"Roll no. is :"<<roll_no<<endl;
        int sum=0; 
        double avg; 
        for(int i=0;i<5;i++) 
        {
            sum=sum+marks[i];
        } 
        avg=sum/5.0; 
        cout<<"Sum is :"<<sum<<endl; 
        cout<<"avg is :"<<avg<<endl;
    }};

int main(){
Student st;
st.readInfo();
st.displayInfo();
return 0;
}
    
