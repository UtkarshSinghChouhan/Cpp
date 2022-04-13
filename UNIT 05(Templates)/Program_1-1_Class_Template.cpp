//Write programs to show the difference between non-template class and template class.

//Program-01 : Constructor Overloading

// #include<iostream>
// using namespace std;

// class Data
// {
// public:
//     Data(char a)
//     {
//         cout<<"The value of a is = "<<a<<endl;
//         cout<<"The size of a is = "<<sizeof(a)<<endl;
//         cout<<"------------------------------------------"<<endl;
//     }

    
//     Data(int a)
//     {
//         cout<<"The value of a is = "<<a<<endl;
//         cout<<"The size of a is = "<<sizeof(a)<<endl;
//         cout<<"------------------------------------------"<<endl;
//     }

//     Data(double a)
//     {
//         cout<<"The value of a is = "<<a<<endl;
//         cout<<"The size of a is = "<<sizeof(a)<<endl;
//         cout<<"------------------------------------------"<<endl;
//     }
// };

// int main()
// {
//     Data obj1('A');
//     Data obj2(25);
//     Data obj3(26.255);
//     return 0;
// }


// NOTE:
//     1. The first statement template <class T> tells the compiler that the following class declaration uses the template data-type.
//     2. T is used inside the class to define the variable of template type.
//     3. Templates cannot be declared inside the class or function, they must be global not local.
//     4. In line 55 one or more template variables can be declared seperated by comma.
//     5. In main() function while declaring an object, the data type name must be given inside <> (angle brackets) before the object.
       
//     Basically when we make a class-template, it means that we are generalizing that class for all data-type variables.
//     We represent  generic-class or class-template as    template <class T> ;(where we can use any variable in place of T).

//Program-02 : Class Template

#include<iostream>
using namespace std;

template <class T> //This statement declares that the following class use template data type T
class Data
{
public:
    Data(T a)   //Here the variable of template type (i.e., a) can accept data of any type.
    {
        cout<<"The value of a is = "<<a<<endl;
        cout<<"The size of a is = "<<sizeof(a)<<endl;        
        cout<<"----------------------------------------"<<endl;
    }
};

int main()
{
    Data <char> obj1('A');
    Data <int> obj2(25);
    Data <double> obj3(25.255);

    return 0;
}