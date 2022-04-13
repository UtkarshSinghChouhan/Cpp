#include<iostream>
using namespace std;

class Base
{
    int data1;
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData()
{
    int a,b;
    cout<<"Enter the value of data1 : "<<endl;
    cin>>a;

    cout<<"Enter the value of data2 : "<<endl;
    cin>>b;


    data1 = a;
    data2 = b;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}



class Derived: public Base //Here the Data members and member functions are being inherited publicly.
{                          //It means we can directly call the member-functions of the base class in the main.
    int data3;
public:
    void processData();
    void display();
};

void Derived::processData()
{
    data3 = getData1() * getData2();
}


void Derived::display()
{
    cout<<"The value of data1 is : "<<getData1()<<endl;
    cout<<"The value of data2 is : "<<data2<<endl;
    cout<<"The value of data3 is : "<<data3<<endl;
}

int main(){
    Derived o1;
    o1.setData();
    o1.processData();
    o1.display();
    return 0;
}
