/* BASIC EXAMPLE OF BINARY OPERATOR OVERLOADING USING FRIEND FUNCTION.*/

// Write a program to add two complex numbers using Binary operator overloading using friend function.

// #include<iostream>
// using namespace std;

// class Complex
// {
//     int real,img;
// public:
//     Complex() {}

//     Complex(int x,int y)
//     {
//         real = x;
//         img = y;
//     }

//     friend Complex operator +(Complex,Complex);   //Operator-Function Declaration

//     void display()
//     {
//         cout<<"The complex number is : ["<<real<<" + i("<<img<<")]"<<endl;
//     }

// };

// Complex operator +(Complex o1, Complex o2)     //Operator-Function Definition
// {
//     Complex o3;
//     o3.real = o1.real + o2.real;
//     o3.img = o1.img + o2.img;
//     return o3;
// }

// int main()
// {
//     Complex A(2,3),B(4,5),C;

//     cout<<"Calling for complex A"<<endl;
//     A.display();

//     cout<<"Calling for complex B"<<endl;
//     B.display();

//     cout<<"Calling for complex C"<<endl;
//     C = A + B;         //Operator-Function Call
//     //C = operator +(A,B);        //Another way to call.

//     C.display();

//     return 0;
// }


// Write a program to perform multiplication using an integer and an object.Use Friend Function.

#include<iostream>
using namespace std;

class Number
{
    int a,b;
public:
    Number(){}

    Number(int x, int y)
    {
       a = x;
       b = y;

    }

    friend Number operator *(int,Number);           //Operator-Function Declaration

    void display()
    {
        cout<<"The Multiplication of integer with object is : "<<a<<endl;
        cout<<"The Multiplication of integer with object is : "<<b<<endl;
    }
};

Number operator *(int x, Number o1)        //Operator-Function Definition
{
    Number o2;
    o2.a = x * o1.a;
    o2.b = x * o1.b;
    return o2;
}

int main(){
    int u,v;

    cout<<"Enter the value of integer a : "<<endl;
    cin>>u;

    cout<<"Enter the value of integer b : "<<endl;
    cin>>v;

    Number A(u,v),C;

    // C = 5 * A;          //Operator-Function Call
    // We can also call like operator *(5,A), similar to any normal friend function.
    C = operator *(5,A);
    C.display();

    return 0;
}


