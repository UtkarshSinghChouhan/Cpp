//Simple program to calculate the square of a number. Use the concept of Nested try block and Rethrowing-Exception.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    try
    {
        int a;

        cout << "Enter any number whose root U want : " << endl;
        cin >> a;

        try
        {
            cout<<"Inside the inner try block"<<endl;

            if (a < 0)
            {
                throw a;
            }

            else
            {
                cout << "The value of the square-root of " << a << " is : " << sqrt(a) << endl;
            }
        }

        catch(...)
        {
            throw;    //Rethrowing the exception, Here we donot need to pass any argument to the throw statement.
        }

        cout<<"Inside the outer try block"<<endl;
    }

    catch(int k)  //Note that the argument type on both the catch statement needs to be same.
    {
        cout<<"***Negative square-root is not allowed***"<<endl;
    }
    return 0;
}

// NOTE 
//    1. If inner catch handler is not able to handle the exception then Compiler will check for appropriate catch handler of outer try block.
//    2. In nested try block, if inner catch handler gets executed, then Compiler will execute remaining executable statements of outer try block and then the main().
