//Write a program to create square() member function using template.

#include<iostream>
using namespace std;

template <class T>
class Number
{
    T x;
public:
    Number(T a)
    {
        x = a;
    }

    void square()
    {
        cout<<"The square of x is = "<<x*x<<endl;
    }
};

int main()
{
    Number <int> obj1(25);
    obj1.square();

    Number <float> obj2(2.5);
    obj2.square();
    
    return 0;
}