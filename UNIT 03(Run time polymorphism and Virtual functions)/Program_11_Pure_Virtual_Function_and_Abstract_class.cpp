// Write a program to declare pure virtual-function program and abstract class

#include <iostream>
using namespace std;

// Abstact Base class
class Base
{
protected:
    int var_base;

public:
    Base(int a)
    {
        var_base = a; 
    }

    virtual void display() = 0;    //Declaration of the pure virtual-function
};

class Derived : public Base
{
    int var_derived;
    public:
    Derived(int x, int y) : Base(x)
    {
        var_derived = y;
    }

    void display ()                //Redefinition of the pure virtual-function
    {
        cout<<"The value of var_base is : "<<var_base<<endl;
        cout<<"The value of var_derived is : "<<var_derived<<endl;
    }
};

int main()
{
    // Base obj_base;                            //Will throw an error
    Base *base_pointer;                          //Will not throw error

    
    base_pointer = new Derived(10,20);     //Base-class pointer pointing to the nameless object of the Derived-class.
    base_pointer->display();               //Accessing the display function of the derived class using the base class pointer.

    return 0;
}

// NOTE:
//     1. Pure virtual functions are also called do-nothing funtion, dummy function.
//        Pure virtual functions are defined with null body, this is because derived-class should be able to override them.
//        After declaration of pure virtual function in a class, the class becomes 'ABSTRACT'.
//        All the derived classes without the pure virtual-function are called 'CONCRETE-CLASSES'.

//     2. We cannot declare any object of Abstract-class. Although we can have pointers of the 
//        Abstract-class.

//     3. In the pure virtual-function declaration, the assignment operator is not used to assign zero to the fucntion.
//        It is used to instruct the compiler that the function is pure virtual-fucntion and it will not have any definition 
       
//     4. If we do not redefine the pure virtual-function in the derive-class, then the derive-class also becomes and ABSTRACT-CLASS.