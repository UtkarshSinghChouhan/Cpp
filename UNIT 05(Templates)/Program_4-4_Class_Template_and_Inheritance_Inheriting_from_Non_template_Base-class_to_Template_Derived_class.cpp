#include<iostream>
using namespace std;

class Base
{
protected:
    int x;

    Base(int a)
    {
        x= a;
    }
};

template <class T>
class Derived : public Base
{
public:
    T y,z;

    Derived(int a, T b, T c) : Base(a)
    {
        y = b;
        z = c;
    }

    void display()
    {
        cout<<"x = "<<x<<" and y = "<<y<<" and z = "<<z<<endl;
    }
};

int main()
{
    Derived <int> obj1(1,2,3);
    obj1.display();

    
    Derived <float> obj2(1,2.345,3.897);
    obj2.display();

    Derived <char> obj3(1,'A','B');
    obj3.display();


    return 0;
}