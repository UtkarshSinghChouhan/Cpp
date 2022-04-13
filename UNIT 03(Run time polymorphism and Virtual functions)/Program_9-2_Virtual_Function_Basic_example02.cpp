// Write a program to declare virtual funtion and execute the same function in base and derived class.

#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;

    // Base() {}

    Base(int x)
    {
        var_base = x;
    }

    virtual void display()
    {
        cout << "Inside the display fucntion of the base class" << endl;
        cout << "The value of the var_base is : " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    Derived(int y, int z) : Base(y)
    {
        var_derived = z;
    }

    void display()
    {

        cout << "Inside the display fucntion of the base class" << endl;
        cout << "The value of the var_base is : " << var_base << endl;
        cout << "The value of the var_derived is : " << var_derived << endl;
    }
};

int main()
{
    Base *base_pointer = new Base(10);  //Here we are dynamically creating the object of the base-class.
    base_pointer->display();

    cout << "\n" << endl;

    base_pointer = new Derived(20, 30); 
    base_pointer->display();

    return 0;
}

// NOTE:
//     We use virtual-functions to override the normal behaviour of the base-class pointer, which is to call the
//     the member-function of the base-class even when we provide the derived-class object's address to the
//     base-class pointer.