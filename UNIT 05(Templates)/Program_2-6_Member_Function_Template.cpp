//Simple program to define the member function template outside the class.

#include<iostream>
using namespace std;

template <class T>
 class Number
 {
     T x;
public:
   Number(T);
   void display(); 
 };

template <class T>
 Number<T> :: Number(T a)
 {
     x = a;
 }

template <class T>
 void Number<T> :: display()
 {
     cout<<"The value of x is = "<<x<<endl;
 }

int main()
{
    Number <char> obj1('A');
    obj1.display();
    return 0;
}