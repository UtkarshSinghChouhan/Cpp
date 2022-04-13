// NOTE:
     
//  1. When an exception is thrown but isn’t caught because the exception handling system fails
//      to find a matching catch-block for that particular exception then in that case -

//      terminate() function is invoked which by default invokes the abort() function and the 
//      program is aborted.

//  2. To change this default behaviour set_terminate() function is used which is defined in the
//     header <exception>.

//    The set_terminate() function requires only one argument 
//    i.e., a 'function_name' where control needs to be transferred. set_terminate() function has no return type,
//    it does not return anything.

//    When no function is specified the program terminates by implicit call to the abort() function.

#include<iostream>
// #include<exception>
using namespace std;

void customExceptionHandler()
{
    cout<<"Inside the custom Exception-handler"<<endl;
    abort();
}

int main()
{
    set_terminate(customExceptionHandler);

    try
    {
        cout<<"Inside the try-block"<<endl;
        throw 100;
    }

    catch(char a)
    {
        cout<<"Inside the catch-block"<<endl;
    }
    return 0;
}