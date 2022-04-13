/*BASIC EXAMPLE OF UNARY OPERATOR OVERLOADING USING FRIEND FUNCTION*/

// Write a program to pre-decrement member variables(or data members) of object using friend function.


// #include<iostream>
// using namespace std;

// class Number
// {
//     int x,y;
// public:
//     Number(int a,int b)
//     {
//         x = a;
//         y = b;
//     }

//     friend void operator --(Number &);   //Friend Operator-Function Declaration.

//     void display()
//     {
//         cout<<"The value of x is : "<<x<<endl;
//         cout<<"The value of y is : "<<y<<endl;
//     }
// };

// void operator --(Number &obj)   //Friend Operator-Function Definition.
// {
//     --obj.x;
//     --obj.y;
// }

// int main()
// {
//     Number o1(2,3);

//     cout<<"Before Decrement"<<endl;
//     o1.display();

//     cout<<"After Decrement"<<endl;
//     --o1;               //Friend Operator-Function Call
//     //We can also call the operator-function as  operator --(o1) , just like we call a normal friend-function of a class
//     o1.display();

//     return 0;
// }


// Write a program to post-decrement member variables(or data members) of object using friend function.

#include<iostream>
using namespace std;

class Number
{
    int x,y;
public:
    Number(int a, int b)
    {
       x = a;
       y = b;
    }

    friend void operator --(Number &, int);  //Friend Operator-Declaration

    void display()
    {
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y<<endl;
    }
};

 void operator --(Number &obj, int)  //Friend Operator-Function Definition
 {
     obj.x--;
     obj.y--;
 }

int main(){
    Number o1(2,3);

    cout<<"Before Decrement"<<endl;
    o1.display();

    cout<<"After Decrement"<<endl;
    //o1--;                            //Friend operator-Function Call
    //We can also call the operator-function like operator --(o1) , just like we call a normal friend-function of a class
    operator --(o1,2); //Whenever calling like this, just put any integer value in place of integer argument.It need not be '2'.
    o1.display();

    return 0;
}



/* NOTE:
   In case of post-decrement using friend function, see in operator-function declaration there are two argument.
   But we know that in unary operator overloading using friend function there must be only one argument.
   The other 'int' type argument is just to make distinction between prefix and postfix notation.
*/
