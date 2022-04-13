//Simple Program to understand catch-all block.

#include<iostream>
using namespace std;

void num(int k)
{
    try
    {
        if(k == 0)
        {
            throw k;   //throwing an integer value
        }

        else if (k>0)
        {
            throw 'A';   //throwing a character
        }

        else
        {
            throw 1.1;   //throwing a double value
        }
        
    }

    catch(...)      //Here instead of multiple catch blocks, a single catch block is defined. For all the exceptions thrown, the same catch block is executed.
    {
        cout<<"Exception caught"<<endl;
    }
}

int main()
{
    num(0);
    num(25);
    num(-20);

    return 0;
}

// NOTE:

//     1. This catch-block is defined for one or more exception of different types.

//     2. The block catch(...) is used for catch all, when a data type of a thrown exception doesn't match
//        with any other catch block, the code inside catch(...) is executed.
//        Note that the implicit type conversion doesn't happen when exceptions are caught.
//        (i.e., The character 'a' is not automatically converted to int.)

//     3. Generic catch(...) handler must be the last catch block.
   