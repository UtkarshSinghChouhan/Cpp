/* Write a program to perform addition of an integer and an object using the operator overloading concept.
   Use Member Function Method.
 */

#include<iostream>
using namespace std;

class Number
{
    int a;
public:
    Number(){}
    Number(int);
    Number operator +(int);  //Operator-Function Declaration
    void display();
   };

Number :: Number(int x)
{
    a = x;
}

Number Number :: operator +(int y)            //Operator-Function Definition
{
    cout<<"Calling operator function"<<endl;
    Number o2;
    o2.a = a + y;
    return o2;
}

void Number :: display()
{
    cout<<"The addition of the integer and the object is : "<<a<<endl;
}

int main(){
    Number A(3),B;

    B = A + 5;               //Operator-Function Call
    //B = A.operator +(5);   //Another way to call the Operator-Function.

    B.display();
    return 0;
}


/* NOTE:

   In the main function, we use the expression B = A + 5 to call the member operator-function
   but the expression B = 5 + A will not work.

   This is due to the fact that, the first operand (i.e, A) need to be an object type,
   Since a member-function(i.e., operator-function) can only be called using an object.

   Also we know that the first operand invokes(calls) the operator-function and the
   second operand is passed as an argument.

   Further note that in the operator-function definition the members variable of the
   object A (i.e., a) will be available directly as it is used to used to invoke the function.

   If we solve this problem using the friend function, both the statements
       B = A + 5
   or  B = 5 + A
   can be used to call the Friend operator-function(As seen in previously Tut 06, C = 5*A).

*/





