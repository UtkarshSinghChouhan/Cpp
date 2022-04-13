#include<iostream>
using namespace std;

class B
{
    int b;
public:
    B(){}

    B(int);

    int getData();

    void display();
};

class A
{
    int a;
public:
    A(){}

    A(int x)
    {
        a = x;
    }

    void display()
    {
        cout<<"The value of the member variable 'a' of the object of the class A is : "<<a<<endl;
    }

    A(B o1)
    {
        cout<<"**************Inside Conversion Constructor.........converting B to A****************"<<endl;
        a = o1.getData();
    }
};

B :: B(int y)
{
    b = y;
}

int B :: getData()
{
    return b;
}

void B :: display()
    {
        cout<<"The value of the member variable 'b' of the object of the class B is : "<<b<<endl;
    }



int main(){
    A a1(2);
    B b1(3);

    cout<<"BEFORE CONVERSION"<<endl;
    a1.display();
    b1.display();

    a1 = b1;           //Conversion from B(Source) to A(Destination).

    cout<<"AFTER CONVERSION"<<endl;
    a1.display();
    b1.display();

    return 0;
}


/*
NOTE:
      1. In this case the Conversion-Constructor needs to be in the destination class.
         Since we are initializing the variable(i.e., object) of class type A with the
         variable(i.e., object) of class type B.
         Since object of class A (destination-class) invokes the conversion constructor,
         hence the member variable of object of class A will be available directly inside
         the conversion constructor.
*/
