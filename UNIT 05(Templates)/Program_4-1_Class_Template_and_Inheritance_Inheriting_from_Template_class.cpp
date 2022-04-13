//Simple example of class template and inheritance in which the Base-class is template-class and the Derived-class is also template-class.


#include <iostream>
using namespace std;

template <class T1>
class Base
{
protected:
    T1 x;

    Base(T1 w)
    {
        x = w;
    }

    void display(T1 a)
    {
        x = a;
        cout<<"x = "<<x<<endl;
    }
};

template <class T2>

class Derived : public Base<T2>
{
    T2 y, z;

public:

    using Base<T2>::x;      //While inheriting from a template-class its members do not get inherited, hence we use this syntax.
    using Base<T2>::Base;     
   // using Base<T1>::display;

    Derived(T2 a, T2 b, T2 c) : Base<T2>(a)
    {
        y = b;
        z = c;
    }

    void show()
    {
        cout << "x = " << x << " and y = " << y << " and z = " << z << endl;
    }
};

int main()
{
    Derived<int> derived_obj1(24,25,26);
    derived_obj1.show();    

    Derived<float> derived_obj2(2.4,2.5,2.6);
    derived_obj2.show();

    Derived<char> derived_obj3('A','B','C');
    derived_obj3.show();

    return 0;
}