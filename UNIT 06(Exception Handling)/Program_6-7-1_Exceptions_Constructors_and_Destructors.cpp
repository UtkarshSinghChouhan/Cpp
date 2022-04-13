// NOTE:
//     When an exception is thrown, Destructorr of the object whose scope ends with the try block is automatically called 
//     before the catch block is executed.
//     In the following example thats why the the program prints "Destructing the object of the Test" before "Integer exception caught"

#include<iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout<<"Constructing the object of Test"<<endl;        
    }

    
    ~Test()
    {
        cout<<"Destructing the object of Test"<<endl;        
    }
};

int main()
{
    try
    {
        Test obj1;
        throw 10;   //Integer Exception thrown.
    }

    catch(int j)
    {
        cout<<"Integer exception caught : "<<j<<endl;
    }
    return 0;
}