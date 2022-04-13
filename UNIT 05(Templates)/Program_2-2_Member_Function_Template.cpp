//Write a program to define data members of the template-type.

#include<iostream>
using namespace std;

template <class T>
class Data
{
    T x;
public:
    Data(T a)
    {
        x = a;
    }
    
    void display(T y)
    {
        cout<<"The value of x is = "<<x<<endl;
        cout<<"The value of y is = "<<y<<endl;
        cout<<"---------------------------------"<<endl;
    }
};

int main()
{
    Data <char> obj1('A');
    obj1.display('B');

    Data <int> obj2(25);
    obj2.display(26);
    return 0;
}