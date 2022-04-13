#include<iostream>
using namespace std;


class A
{
    int a;
public:

    A() {};

    A(int x)
    {
        a = x;
    }

    int getData()
    {
        return a;
    }

    void display()
    {
        cout<<"The value of the member variable 'a' of the object of class A is : "<<a<<endl;
    }

};

class B
{
    int b;
public:

    B() {};

    B(int y)
    {
        b = y;
    }

    int getData()
    {
        return b;
    }

    void display()
    {
        cout<<"The value of the member variable 'b' of the object of class B is : "<<b<<endl;
    }

    void operator =(A o1)     //Here the assignment operator(=) is overloaded.
    {
        cout<<"************************ INSIDE OPERATOR FUCNTION.........CONVERTING A TO B ****************************************"<<endl;
        b = o1.getData();    //getData() function is called here.
    }
};


int main()
{
    A a1(2);
    B b1(3);

    cout<<"BEFORE CONVERSION"<<endl;

    a1.display();
    b1.display();

    b1 = a1;                  //Conversion from class A(Source) to class B(Destination).
    //b1.operator =(a1);      //Another way to call.

    cout<<"AFTER CONVERSION"<<endl;

    a1.display();
    b1.display();


    return 0;
}


/*
NOTE:
      1. In this case the overloading function needs to be in the destination class.
         Since in case of operator overloading the left hand operator always invokes
         the function and the right hand operator is passed as an argument.
         Here we initializing b1(of class B) with a1(of class A).
*/