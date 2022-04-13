/* BASIC EXAMPLE TO UNDERSTAND OPERATOR OVERLOADING.

   SYNTAX FOR OPERATOR FUNCTION :

     {{returnType}} operator {{operator sign}} (argument)
     {
        //Body
     }
*/

// Write a program to perform addition of two objects.

#include<iostream>
using namespace std;

class Number
{
public:
    int x,y;

    Number(){}

    Number(int a,int b)
    {
        x = a;
        y = b;
    }

    // Operator Function Defination
    Number operator +(Number obj1)  //We can also define the function outside the class, using the scope resolution operator similar to any normal member function.
    {
        Number obj2;
        obj2.x = x + obj1.x;
        obj2.y = y + obj1.y;

        return obj2;
    }

    void display()
    {
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y<<endl;
    }
};

int main(){

    Number A(2,3),B(4,5),C;

    cout<<"Calling display function for object A"<<endl;
    A.display();

    cout<<"Calling display function for object B"<<endl;
    B.display();

    C = A + B;  //call to the operator function
    // We can also call the operator-function like, A.operator +(B) just like a normal member function
    //C = A.operator +(B);
    cout<<"Calling display function for object C"<<endl;
    C.display();

    return 0;
}

/* NOTE :
    1. Operator function is similar to a normal function, the only
       difference is that we can pass only zero or one argument to the operator-function.
    2. We need not to call the operator function in main(),
       whenever the corresponding operator sign(in this case '+') is used
       in the main the operator function will be called automatically.

    WORKING:
    1. In the above case,whenever the statement C=A+B is executed,the compiler
       will search for the definition of '+'.
    2. The object A invokes the operator function and the object B is passed as
       an argument.The copy of the object B is stored in the formal argument obj1.
    3. The member variable of object A (i.e., x and y) are available directly in
       the operator function, as the function is invoked by this object.
    4. The addition of the individual members are carried out and stored in the
       member variables of the object obj2 (i.e., x and y).
*/
