//Simple example of class template and inheritance in which the Base-class is non-template and the Derived-class is template-class.

#include<iostream>
using namespace std;

class Base
{
protected:
    int x,y;
public:
    Base(int a, int b)
    {
        x = a;
        y = b;
    }
};

template <class T>
class Derived : public Base
{
public:
    T z;
    Derived(int u, int v, T w) : Base(u, v)
    {
        z = w;
    }

    void display()
    {
        cout<<"x = "<<x<<" and y = "<<y<<" and z = "<<z<<endl;
    }
};

int main()
{
    Derived <int> derived_obj1(2,3,5);
    derived_obj1.display();

    Derived <float> derived_obj2(2,3,5.5);
    derived_obj2.display();

    
    Derived <char> derived_obj3(2,3,'A');
    derived_obj3.display();


    return 0;
}