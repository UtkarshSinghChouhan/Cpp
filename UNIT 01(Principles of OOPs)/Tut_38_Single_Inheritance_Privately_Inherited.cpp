#include<iostream>
using namespace std;

class Base
{
    int data1;
public:
    int data2;
    void setData();
    int getData1();
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

class Derived:private Base //Here the Data members and member functions are being inherited privately.
{                          //It means we cannot directly call the member-functions of the base class in main.
    int data3;             //Member-functions of the base class can only be called inside the derived class.
public:
    int processData();
    void display();
};

int Derived::processData()
{
    setData();            //Here we are indirectly calling the setData() function in main through the processData() function of the derived-class.
    data3=data2*getData1();
    return data3;
}

void Derived::display()
{
    cout<<"The value of data 1 is : "<<getData1()<<endl;
    cout<<"The value of data 2 is : "<<data2<<endl;
    cout<<"The value of data 3 is : "<<data3<<endl;
}

int main()
{
    Derived o1;
    o1.processData();
    o1.display();
    return 0;
}
