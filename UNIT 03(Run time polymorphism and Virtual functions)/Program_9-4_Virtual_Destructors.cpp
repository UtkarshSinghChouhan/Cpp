// Write a program to define the virtual-destructors

#include<iostream>
using namespace std;

class Base
{
    public:

    Base()
    {
        cout<<"Base class constructor"<<endl;
    }

    virtual ~Base()
    {
        cout<<"Base class destructor"<<endl;
    }
};

class Derived : public Base
{
    public:

    Derived()
    {
        cout<<"Derived class constructor"<<endl;
    }

    ~Derived()
    {
        cout<<"Derived class Destructor"<<endl;
    }

};

int main()
{
    Base *base_pointer = new Derived;
    delete base_pointer;
    return 0;
}