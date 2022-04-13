/* BASIC EXAMPLE OF BASIC-TO-CLASS TYPE CONVERSION USING CONSTRUCTOR*/


#include<iostream>
using namespace std;

class Number
{
    int a;
public:
    Number(){}

    Number(int x)
    {
        a = x;
    }

    void display()
    {
        cout<<"The integer value is converted into object's member variable : "<<endl;
        cout<<a<<endl;
    }
};

int main(){
    int y = 8;
    Number o1;
    o1 = y;
    o1.display();
    return 0;
}

/* NOTE:
   1. When the object o1 is created the default constructor gets invoked(called).
   2. When o1 is initialized with y, the parametrized constructor gets invoked.
      A copy of y is passed to the constructor as argument, which is then used to
      initialize the member variable of the object o1.
   3. Further note that the constructor which will be used for conversion from
      basic to class type, must have only a single argument.
*/
