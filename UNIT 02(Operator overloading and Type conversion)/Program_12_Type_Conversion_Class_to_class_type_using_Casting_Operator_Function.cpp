#include<iostream>
using namespace std;

class A
{
public:
    int a;
    A(){}

    A(int x)
    {
        a = x;
    }

    void display()
    {
        cout<<"The value of the member variable a of the object of class A is : "<<a<<endl;
    }
};

class B
{
    int b;
public:
    B(){}

    B(int y)
    {
        b = y;
    }

    void display()
    {
        cout<<"The value of the member variable b of the object of class B is : "<<b<<endl;
    }

    operator A()
    {
        cout<<"**************************** Inside operator function.........Converting B to A **********************************"<<endl;
        A o1;
        o1.a = b;
        return o1;
    }

};

int main(){
    A a1(1);
    B b1(2);

    cout<<"(BEFORE TYPE CONVERSION)"<<endl;
    a1.display();
    b1.display();

    a1 = b1;           //Converting from B(source) to A(destination) class type.
   // b1.operator A();   //This call is not working.


    cout<<"(AFTER TYPE CONVERSION)"<<endl;
    a1.display();
    b1.display();

    return 0;
}

/*
NOTE:
      1. In this case, when compiler executes a1 = b1, the operator conversion member function
         gets invoked(called). The operator function assigns the value of member variable of
         the object of class B to the member variable of the object of class A.

         It means that initially b = 2 and after conversion becomes a = 2.This implies that
         object of type B gets converted into object of type A, hence the type conversion.


      2. Further note that the data member of class A(i.e., the destination class) needs to be
         public in order to be accessible to the operator member function of the
         class B(i.e., the source class).To avoid such issue we can also do as in Program 13.


      3. In this case the Casting Operator Function needs to be in the source class.
         Since the object b1 invokes the operator function and we are overloading data type A.
         Here we are passing the value of object b1 to object a1.
         Since object b1 invokes the operator function, hence the member variable of object b1
         will be available directly inside the operator fucntion.

*/
