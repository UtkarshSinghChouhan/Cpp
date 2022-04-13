// NOTE:
//     1. Exceptions are certain disastrous error conditions that occur during the execution of the 
//        program (i.e., run-time anomalies). They could be the errors that cause the program to fail or
//        certain conditions that lead to the errors. 
//        If these run time errors are not handled by the program, the OS handles them and the 
//        program terminates abruptly, which is not good.

//     2. Exception handling in C++ consists of three keywords: try, throw and catch:

//        2.1 The try statement allows you to define a block of code to be tested for errors while it is being executed.
//            Hence, the statements which may cause problems are put in try block.
//             Also, the statements which should not be executed after a problem occured, are also put in try block. 
//             Syntax:
//                 try
//                 {
//                     statement 1;
//                     statement 2;
//                 }

//        2.2 The throw keyword throws an exception when a problem is detected.
//            Syntax:
//                   Either   throw (excep);
//                   Or       throw excep;
//                        The argument excep is allowed in any data type and it can be a constant.

//        2.3 The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.
//             Syntax:
//                 catch(argument)
//                 {
//                     statement 3;  //Action to be taken
//                 }
//              The Prameter 'argument' need to be of the same type as the parameter 'excep' thrown by the throw-statement.
//              Further a catch block cannot have more than one argument

//     3. In case no error is found and no exception is thrown, in such a situation catch block is discarded and the statement
//        after the catch block is executed.

//     4. In case of mismatch (i.e., the data-type used by try and catch block is not same), the program gets aborted using the 
//        abort() function which is executed implicitly by the compiler.

//     5. When an exception is thrown, statements or codes written in the try block after the throw statement are not executed.
//        When exception is caught, the code after catch block is executed.

//     6. When an exception is thrown and not caught, the program terminates abnormally.

//     7. Code within the try-catch block is reffered to as the "Protected code"

//     8. A function can specify the list of exceptions that it can throw using comma separated list, like following :
//          void fun(int a, char b) throw (Exception1, Exception2, ..) 


//Simple Program to understand try, throw and catch statements. Write a program to find to out who is allowed into the party.

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;

   try
   {
       if(age>=18)
       {
           cout<<"Access granted...You're old enough"<<endl;
       }

       else
       {
           throw 505;
        //    throw (505);  //Both statements works for throwing the constant value
       }
   }
   catch(int excep)
   {
       cout<<"Access Denied - You have to be atleast 18 years old"<<endl;
       cout<<"Error "<<excep<<endl;
   }
   
   
     
    return 0;
}