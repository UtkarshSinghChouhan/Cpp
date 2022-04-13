////Write a program to declare a pointer to the derived-class and access the member variables of base and derived-class


#include<iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout<<"The value of the base-class variable is : "<<var_base<<endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout<<"The value of the derived-class variable is : "<<var_derived<<endl;
    }
};

int main()
{
    Derived obj_derived;
    Derived *derived_class_pointer;

    derived_class_pointer = &obj_derived;

    Base obj_base;
//  derived_class_pointer = &obj_base;       //This will throw an error.
    derived_class_pointer->var_base = 20;   //Since var_base gets inherited to the derived-class.
    derived_class_pointer->var_derived = 30;

    //derived_class_pointer->Base :: display();  //To understand this see UNIT 01 'Ambiguity resolution'.
    ((Base*)derived_class_pointer)->display();   //Here we typecast the derived-class pointer to Base-class pointer.
    derived_class_pointer->display();

    return 0;
}


/*
NOTE:
  1. We cannot point the derived-class pointer to base-class's object.
     Although we can access the public data-members and member-functions
     of the base-class using the derived-class pointer.This is due to the
     fact that all the public data-members and member-functions base-class
     get inherited inside the derived-class.

  2. In order to access the Base-class member function we can use either of the two methods:

     METHOD 01: We can resolve the ambiguity between the display() function of Base-class and
                the display() function of the derived-class by using the scope resolution operator(::).

     METHOD 02: We can typecast the derived-class pointer into Base-class pointer.
                Typecasting forces the derived-class pointer to behave as base-class
                pointer.
*/
