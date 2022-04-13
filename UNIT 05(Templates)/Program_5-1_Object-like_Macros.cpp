// NOTE:

//    0. Macros are preprocessors.A macro is a piece of code in a program that is replaced by the value of the macro
//       before the compilation of the program starts. Macro is defined by #define directive. 
//       Whenever a macro name is encountered by the compiler, it replaces the
//       name with the definition of the macro. Macro definitions need not be terminated by semi-colon(;). 

//    1.  Macros are defined as shown:
//         #define {{macros_name}} {{text/function}}
//        Macro do not need semi-colon(;) at the end of the statement.
   
//    2. Macro name is case sensitive. Further it is a tradition to write macro name in capital letters.

//    3. Types of macros:
//       3.1) Object-like macros - It is used to replace a symbolic name to a numerical value or variable represented as constant.
//       3.2) Function-like macros - These macros are the same as a function call.These macros are the same as a function call.
//                                   It replaces the entire code instead of a function name.
//             Syntax of Function-like macros:
//                             #define macros_name() code
//       3.3) Chain macros -  Macros inside macros are termed as chain macros. In chain macros first-of-all parent macro is expanded
//                            then child macro is expanded.  

//    4. Further an object-like macro could have a multi-line. So to create a multi-line macro we need to use backslash (\).

// Example-01

#include<iostream>
using namespace std;
#define PI 3.12

int main()
{
    int r = 2;
    cout<<"The area of the circle is : "<<PI*r*r<<endl;
    return 0;
}


//Example-02

// #include<iostream>
// using namespace std;
// #define LIMIT 10

// int main()
// {
//     int x;
//     cout<<"Enter the number whose table U want : "<<endl;
//     cin>>x;

//     for(int i = 0; i<LIMIT; i++)
//     {
//         cout<<x<<" X "<<(i+1)<<" = "<<x*(i+1)<<endl;
//     }
    
//     return 0;
// }