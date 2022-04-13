#include<iostream>
using namespace std;

class Test1
{
public:
    Test1()
    {
        cout<<"Constructing the object of Test1"<<endl;
    }

    ~Test1()
    {
        cout<<"Destructing the object of Test1"<<endl;
    }
};

class Test2
{
public:
    Test2()
    {
        cout<<"Inside Constructor Test2"<<endl;
        throw 10;                 //Integer Exception thrown.
        cout<<"Exiting Constructor Test2"<<endl;
    }

    ~Test2()
    {
        cout<<"Destructing the object of Test2"<<endl;
    }
};

int main()
{
    try
    {
        Test1 t1;  //Constructed and Destructed.
        Test2 t2;  //Partially constructed.
        Test1 t3;  //Not Constructed as this statement never gets executed.
    }
    
    catch(int i)
    {
        cout<<"Integer Exception caught : "<<i<<endl;
    }
    return 0;
}

// Explanation:
//     As soon as the the exception is thrown immediately the control passes to the exception Handler (i.e., the catch-block).
//     And now the Destructors are called only for the completey constructed object.

//     Oject t2 is Partially constructed because when the throw statement is executed immediately the control passes to the catch-block,
//     hence it didn't even exited the constructor Test2 that why it is partially constructed. 