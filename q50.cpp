
#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:string name;
    int age;
    int rollNo;
    public:
    void readData()
    {
        cout<<"Enter the name :";
        getline(cin,name);
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter roll no:";
        cin>>rollNo;
    }
    void displayData()
    {
        cout<<"Name is"<<name<<endl;
        cout<<"Age is"<<age<<endl;
        cout<<"Roll no"<<rollNo<<endl;
    }
};
int main()
{
    Student st;
    st.readData();
    st.displayData();
    return 0;
}

    
    

