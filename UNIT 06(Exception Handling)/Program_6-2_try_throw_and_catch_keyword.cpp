// Simple Program which performs subtraction if and only if the first number entered is greater than the second otherwise throws an error.

#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"Enter the value of x and y : "<<endl;
    cin>>x>>y;

    int j;
    j = (x>y)?0:1;

    try
    {
        if(j==0)
        {
            cout<<"Subtraction (x-y) = "<<(x-y)<<endl;
        }

        else
        {
            throw j;
        }
    }

    catch(int k)
    {
        cout<<"Cann't perform subtraction...\n"
            <<"Error 404"<<endl;
    }
    return 0;
}