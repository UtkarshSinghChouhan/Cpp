// Write a program to use the pointer of both base and derived-class and call the member-functions, using the virtual-function.

#include <iostream>
using namespace std;

class Base
{
    int var_base;

public:
    virtual void display()
    {
        cout << "This is the display fucntion of the Base-class" << endl;
    }
};

class Derived : public Base
{
    int var_derived;

public:
    void display()
    {
        cout << "This is the display fucntion of the derived-class" << endl;
    }
};

int main()
{
    Base obj_base;
    Base *base_pointer;

    base_pointer = &obj_base;
    base_pointer->display();

    Derived obj_derived;
    base_pointer = &obj_derived;
    base_pointer->display();

    return 0;
}

// RULES FOR VIRTUAL-FUNCTIONS:

//     0. In order to create a virtual-function, Base and Derived-class both must contains a function
//        which are exactly the same, i.e., the same name,same return type and even the number and
//        types of arguments must also be the same.

//     1. The virtual-functions must not be static and must a member of class.

//     2. A virtual-function can be declared as a friend-function of another class.

//     3. In order to use virtual-function mechanism we need to create object's pointer.
//        In case if we are using base and derived class object only to invoke their
//        respective functions then there is no need to create the virtual-function.

//     4. Constructors cannot be declared as virtual but destructors can be declared as virtual.

//     5. In order to define virtual-function outside the class, the function declaration needs
//        to be done inside the class and the function definition is done outside the class.
//           In this case the 'virtual' keyword is used in the function declaration and not in
//           the function definition.

//     6. If a base-class contains a virtual-function and if the same function is not redefined in the
//        derived-class, then in that case the function of the base-class is invoked.

//     7. In case of any mis-match, between the functions of the base and derived-class, the compliler
//        will neglect the virtual function mechanism and treat them as the overloaded function.
