/*  EXAMPLE 01(Single Inheritance) : HERE AMBIDUITY IS RESOLVED AUTOMATICALLY.

#include<iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout<<"Hello world"<<endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout<<"I am Utkarsh"<<endl;
    }
};

int main()
{
    Derived o1;
    o1.display(); //The function display() which is
                  //derived from the base-class gets
                  //overridden by the display() function
                  //inside the Derived-class in run-time.

    return 0;
}
*/


/* EXAMPLE 02(Multiple Inheritance) :HERE AMBIGUITY IS RESOLVED USING THE SCOPE RESOLUTION OPERATOR.

#include<iostream>
using namespace std;

class Base1
{
public:
    void display()
    {
        cout<<"Hello world"<<endl;
    }
};

class Base2
{
public:
    void display()
    {
        cout<<"This is a program to understand Ambiguity resolution"<<endl;
    }
};

class Derived : public Base1, public Base2{};


int main(){
    Derived o1;
    o1.Base1::display();
    o1.Base2::display();

    return 0;
}
*/


/* EXAMPLE 03(Multi-level Inheritance) : HERE AMBIGUITY IS RESOLVED AUTOMATICALLY.
                                         BUT WE CAN USE THE SCOPE RESOLUTION OPERATOR TO ACCESS THE OVER-WRITTEN FUNCTION.

#include<iostream>
using namespace std;

class Base1
{
public:
    void display()
    {
        cout<<"Hello world"<<endl;
    }
};

class Base2 : public Base1//The function display() which is
                          //derived from the Base1 gets
                          //overridden by the display() function
                          //inside the Base2 in run-time.
{
public:
    void display()
    {
        cout<<"This is a program to understand Ambiguity resolution"<<endl;
    }
};

class Derived : public Base2 {};


int main()
{
    Derived o1;
    o1.Base1::display();
    o1.display();

    return 0;
}
*/


/* EXAMPLE 04 : UNDERSTANDING MORE.

#include<iostream>
using namespace std;

class Base1
{
public:
    void display()
    {
        cout<<"Hello world"<<endl;
    }
};

class Base2 : public Base1//The function display() which is
                          //derived from the Base1 gets
                          //overridden by the display() function
                          //inside the Base2 in run-time.
{
public:
    void display()
    {
        cout<<"This is a program to understand Ambiguity resolution"<<endl;
    }
};

class Derived : public Base2 //Although the display() function of Base1 and Base2
                             //get inherited inside the Derived-class but since Derived-class
                             //itself has a display()function,hence the display() of both the
                             //base classes get over-written by this function.
{
public:
    void display()
    {
        cout<<"This is the display function inside the derived class"<<endl;
    }
};


int main(){
    Derived o1;
    o1.display();
    o1.Base1::display();
    o1.Base2::display();

    return 0;
}
*/


/*NOTE:
       1.This case will also happen in case of Multiple Inheritance too.
       2.This means that the function of the Derived-class will always over-write the function of the base-class.
       2.We can access the over-written function of the base-class using the object of the derived class using the scope resolution operator.
*/
