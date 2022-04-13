//Simple program to perform division of two numbers and perform Exception-Handling when the denominator is zero.

#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"Enter any two numbers : "<<endl;
    cin>>a>>b;

    try
    {
        if(b==0)
        {
            throw "Division by zero is not defined";  //inside the double quotes "" represent character array.
        }

        else
        {
            throw (a/b);
        }
    }

    catch(int ans)
    {
        cout<<"The division a/b = "<<ans<<endl;
    }

    catch(const char *excep)  //const char * excep means that excep is an object in the memory which points to an array of char pointers
                              //Here in this case it points 32 char pointers pointing to "Division by zero is not defined".
    {
        cout<<excep<<endl;
    }
    
    return 0;
}