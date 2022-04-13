/* BASIC EXAMPLE OF BINARY OPERATOR OVERLOADING USING MEMBER FUNCTION.*/

// Write a program to perform multiplication of two objects using member function.

// #include<iostream>
// using namespace std;

// class Number
// {
//     int x,y;
// public:
//     Number() {}
//     Number(int,int);
//     void display();
//     Number operator *(Number ); //Operator-Function Declaration
// };

// Number :: Number(int a, int b)
// {
//     x = a;
//     y = b;
// }

// void Number :: display()
// {
//     cout<<"The value of x is : "<<x<<endl;
//     cout<<"The value of y is : "<<y<<endl;
// }

// Number Number :: operator * (Number obj1)   //Operator-Function Declaration
// {
//     Number obj2;
//     obj2.x = x*obj1.x;
//     obj2.y = y*obj1.y;
//     return obj2;
// }

// int main()
// {
//     Number A(2,3),B(4,5),C;

//     cout<<"Calling for object A"<<endl;
//     A.display();

//     cout<<"Calling for object B"<<endl;
//     B.display();

//     cout<<"Calling for object C"<<endl;
//     C = A*B;    //Operator-Function Call
//     //We can also call the operator-function like A.operator(B)  , just like we call a normal friend-function of a class.

//     C.display();

//     return 0;
// }


// Write a program to add two complex numbers using operator overloading using member function.

#include<iostream>
using namespace std;

class Complex
{
    int real,img;
public:
    Complex(){};
    Complex(double,double);
    Complex operator +(Complex);     //Operator-Function Declaration
    void display();
};

Complex :: Complex(double a, double b)
{
    real = a;
    img = b;
}

Complex Complex :: operator +(Complex o1)      //Operator-Function Definition
{
   Complex o2;
   o2.real = real + o1.real;
   o2.img = img + o1.img;
   return o2;
}

void Complex :: display()
{
    cout<<"The Complex number is : ["<<real<<" + i("<<img<<")]"<<endl;
}

int main(){

    Complex A(4,5),B(6,7),Resultant;

    cout<<"Calling for the Complex number A"<<endl;
    A.display();

    cout<<"Calling for the Complex number B"<<endl;
    B.display();

    cout<<"Calling for the Complex number Resultant"<<endl;
    //Resultant = A + B;                                          //Operator-Function Call
    //We can also call the operator-function like A.operator +(B)  , just like we call a normal friend-function of a class.
    Resultant = A.operator +(B);
    Resultant.display();

    return 0;
}
