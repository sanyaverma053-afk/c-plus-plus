#include<iostream>
#include<string>
using namespace std;
int main()
{
    char type;
    int age;
    float amount,discount,netPayment;
    cout<<"enter product type(F for Food,C for Cloth ):";
    cin>>type;
    cout<<"enter age:";
    cin>>age;
    cout<<"enter purcahse amount:";
    cin>>amount;
    discount=0;
    if(type=='F'||type=='f')
    {
        if(amount>=5000)
        discount=amount*0.50;
        else if(amount>=2000)
        discount=amount*0.20;
        else if(amount>=500)
        discount=amount*0.10;
        else
        discount=0;
    }
    else if(type=='c'||type=='C')
    {
        cout<<"enter age:";
        cin>>age;
        if(age>=40)
        {
            if(amount>=5000)
            discount=amount*0.50;
            else if(amount>=2000)
            discount=amount*0.20;
            else if(amount>=500)
            discount=amount*0.10;
            else
            discount=0;
        }
        else if(age>=20)
        {
            if(amount>=5000)
            discount=amount*0.60;
            else if(amount>=2000)
            discount=amount*0.30;
            else if(amount>=500)
            discount=amount*0.15;
            else
            discount=0;
        }
        else
        {
            if(amount>=2500)
            discount=amount*0.50;
            else
            discount=0;
        }
    }
    else
    {
        cout<<"invalid input:";
        return 0;
    }
    netPayment=amount-discount;
    cout<<"\nProduct type:"<<type;
    cout<<"\ndiscount rs:"<<discount;
    cout<<"\nNet Payment:"<<netPayment;
    return 0;
}
