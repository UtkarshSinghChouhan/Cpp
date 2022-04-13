// NOTE :
//     Though template functions are compatible for all data-types, it will not save any memory.

//     After compilation the compiler cannot guess with which type of data the template function will work.
//     When template-function is called at that moment, from the type of argument passsed to the template
//     function, the compiler identifies the data type.
//     Every argument of the template-type is then replaced with the identified data-type and
//     this process is know as 'INSTANTIATING'.
//     Thus, according to different data-types respective versions of the template-functions are created.
//     Basically when we make a Function-template, it means that we are generalizing that Function for all data-type variables.

//Simple program to define the template function

#include<iostream>
using namespace std;

template <class T>
void display(T x)    //Here the template-type variable is passed as a formal argument which can accept all types of data.
{
    cout<<"The value of x is = "<<x<<endl;
}

int main()
{
    //Function is invoked and char, int and double type is passed arguments.
    display('A');
    display(25);
    display(25.25);
    return 0;
}