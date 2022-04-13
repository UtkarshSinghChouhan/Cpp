//Write a program to define private static member function.


#include<iostream>
using namespace std;

class Number
{
    static int a;
    static void increment()
    {
        a++;
    }
public:


    static void display()
    {
        increment();
        cout<<"\n\n The value of the static variable a : "<<a<<endl;
    }
};

int Number :: a; //we don't need to initialize the static data-member by default it is initialized with 0.

int main(){

    Number ::display();
    Number ::display();

    return 0;
}
