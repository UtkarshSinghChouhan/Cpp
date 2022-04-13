/*
NOTE:
    1. Static-Member Functions can access only static data-members or static member-functions.

    2. If public, Static data-members and member-functions can be accessed in main using the class name
       with the use of object.

    3. It is also possible to access data-member and invoke member functions using the objects.N

*/


//Write a program to declare the static member functions and call them from the main().

#include<iostream>
using namespace std;

class Number
{
    static int a;
public:

    static void increment()
    {
        a++;
    }

    static void display()
    {
        cout<<"\n\n The value of the static variable a : "<<a<<endl;
    }
};

int Number :: a; //we don't need to initialize the static data-member by default it is initialized with 0.

int main(){

    Number n;
    n.display();    //Accessing static member-function using the object

    Number ::display();   //Accessing static member-function without using the object
    Number ::increment();
    Number ::display();

    return 0;
}
