/* BASIC EXAMPLE OF BASIC-TO-CLASS TYPE CONVERSION USING OPERATOR OVERLOADING */


#include<iostream>
using namespace std;

class Number
{
    int a;
public:
    Number(){}

    void operator =(int x)
    {

        a = x;

    }

    void display()
    {
        cout<<"The integer value is converted into object's member variable"<<endl;
        cout<<a<<endl;
    }
};

int main(){
    int y = 8;
    Number A;
    // A.operator =(y); //call for Operator member function.
    A = y;
    A.display();
    cout<<"The value of y is : "<<y<<endl;
    return 0;
}

/* NOTE:
   A = y
   We know that the left hand operand invoke the operator function and the right hand
   operand is passed as argument.
   The object A invokes the operator-function and the integer y is passed as argument.
   Further note that since A invokes the operator member function, hence its member variable
   will be available directly in the function.
   Copy of the passed argument is used to initialize the member variable of the object A.
*/
