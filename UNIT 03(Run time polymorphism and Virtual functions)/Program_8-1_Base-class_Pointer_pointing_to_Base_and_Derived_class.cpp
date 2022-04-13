//Write a program to declare a pointer to the base-class and access the member variables of base and derived-class.

#include<iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout<<"The value of the variable of the base-class is : "<<var_base<<endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout<<"The value of the variable of the derived-class is : "<<var_derived<<endl;
    }
};

int main(){

    Base obj_base;
    Base *base_class_pointer;
    base_class_pointer = &obj_base;

    Derived obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 20;
//  base_class_pointer->var_derived = 30;   //This will not work.
    base_class_pointer->display();      //This will not call the Derived-class display() function, even though we have provide the address of the Derived-class object.    

    ((Derived*)base_class_pointer)->display();   //We can call the Derived-class display() fucntion by type-casting, which will force the base_class_pointer to behave as Derived_class_pointer.
    // base_class_pointer->Derived::display();   //This will not work in case of base_class_pointer.

    return 0;
}

/*
NOTE:
    Although we can point the pointer of the base-class to a derived-class's object
    but we cannot access the data-members and member-functions of the derived-class
    using the base-class pointer.This is know as 'LATE BINDING'.
*/
