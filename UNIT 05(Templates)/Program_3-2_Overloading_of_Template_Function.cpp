//Simple Program to overload template-Functions.

#include<iostream>
using namespace std;

template <class T>
T display(T a, T b)
{
    return (a+b);
}

template <class T>
T display(T x, T y, T z)
{
    return (x*y*z);
}

int main()
{
    cout<<"Addition = "<<display(2,3)<<endl;
    cout<<"Multiplication = "<<display(2,3,4)<<endl;

    cout<<"Addition = "<<display(1.1,2.2)<<endl;
    cout<<"Multiplication = "<<display(1.1,1.1,1.1)<<endl;

    return 0;
}