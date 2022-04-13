/* BASIC EXAMPLE OF UNARY OPERATOR OVERLOADING.*/

// Write a program to pre-increment member variables(or data members) of object.

// #include<iostream>
// using namespace std;

// class Number
// {
//     int a,b;
// public:
//     Number (int,int);
//     void operator ++();             //Operator Function Declaration or Prototype.
//     void display();
// };

// Number :: Number(int x, int y)
// {
//     a = x;
//     b = y;
// }

// void Number :: operator ++()         //Operator Function Definition
// {
//     ++a;
//     ++b;
// }

// void Number :: display()
// {
//     cout<<"The value of a is : "<<a<<endl;
//     cout<<"The value of b is : "<<b<<endl;
// }

// int main()
// {
//     Number o1(1,2);

//     cout<<"Before the increment"<<endl;
//     o1.display();

//     ++o1;  //Operator Function Call
//     //We can also call the operator-function as o1.operator ++() , just like we call a member function of a class

//     cout<<"After the pre-increment"<<endl;
//     o1.display();

//     return 0;
// }


// Write a program to post-increment member variables(or data members) of object.


#include<iostream>
using namespace std;

class Number
{
    int a,b;
public:
    Number (int,int);
    void operator ++(int);  //Operator-Function Declaration
    void display();
};

Number :: Number(int x, int y)
{
    a = x;
    b = y;
}

void Number :: operator ++(int)  //Operator-Function Definition
{
    a++;
    b++;
}

void Number :: display()
{
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
}

int main()
{
    Number o1(1,2);

    cout<<"Before post-Increment"<<endl;
    o1.display();

    cout<<"After post-Increment"<<endl;
    //o1++;                                 //Operator-Function Call
    //We can also call the operator-function as o1.operator ++(int) , just like we call a member function of a class
    o1.operator ++(2);  //Whenever calling like this,just put any integer value as argument it need not to be '2'.
    o1.display();

    return 0;
}


/* NOTE:
   When ++ and -- operators are overloaded, no difference exists between prefix and postfix overloaded operator functions.
   The system has no way of determining weather the operators are overloaded for prefix or postfix operations.
   To make a distinction between prefix and postfix notion of operator,we use different syntaxes:
        {{returnType}} operator ++()       //prefix notation
        {{returnType}} operator ++(int)    //postfix notation
*/
