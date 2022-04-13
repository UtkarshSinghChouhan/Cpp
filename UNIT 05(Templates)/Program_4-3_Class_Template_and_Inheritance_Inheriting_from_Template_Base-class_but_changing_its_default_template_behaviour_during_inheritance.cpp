#include<iostream>
using namespace std;

template <class T1>
class Base
{
protected:
    T1 x, y;
public:
    Base(T1 a, T1 b)
    {
        x = a;
        y = b;
    }
};

template <class T2>
class Derived : public Base<float>
{
public:
    T2 z;
    Derived(float a, float b, T2 c) : Base(a, b)
    {
        z = c;
    }

    void display()
    {
        cout<<"x = "<<x<<" and y = "<<y<<" and z = "<<z<<endl;
    }
};

int main()
{
    Derived <float> derived_obj1(2,3,5.5);
    derived_obj1.display();
    
    Derived <int> derived_obj2(2.568,6.367,5);
    derived_obj2.display();

    Derived <char> derived_obj3(2.543,3.778,'A');
    derived_obj3.display();


    return 0;
}