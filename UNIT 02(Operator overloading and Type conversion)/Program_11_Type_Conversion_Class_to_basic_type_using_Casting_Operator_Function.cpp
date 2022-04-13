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

    operator int()   //Note that the target data-type of the object(here, int) can be built-in-data type or user-defined-data type
    {
        return a;
    }
};

int main(){
    int y ;
    Number o1(8);

    y = o1;
    //o1.operator int();  //Another way to call the operator conversion member function.

    cout<<"The value of y is : "<<y<<endl;

    return 0;
}


/* NOTE:
  1. Here we are overloading 'int' data type.
     It is behaving as basic data type as well as an object(class type).
  2. The conversion operator function should not have any argument.
  3. The conversion operator function must not have any return type.
  4. The conversion operator function must be a member of class.
*/

