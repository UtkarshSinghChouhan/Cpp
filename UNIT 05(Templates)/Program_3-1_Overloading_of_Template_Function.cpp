//Write a program to overload a template-function.

#include<iostream>
using namespace std;

template <class T>
void display(T a)   //This version of the template function contains template argument.
{
    cout<<"Template variable : a = "<<a<<endl;
}

void display(int b)  //This version of the template function contains integer argument.
{
    cout<<"Interger variable : b = "<<b<<endl;
}

int main()
{
    display('A');  //Invokes the template integer version of the function display()
    display(25);   //Invokes the interger version of the function display()
    display(35.5); //Invokes the template float version of the function display()

    return 0;
}