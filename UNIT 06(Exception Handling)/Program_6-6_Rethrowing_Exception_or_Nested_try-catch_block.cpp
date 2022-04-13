//Simple program to calculate the Logarithm of a number. Use the concept of Nested try block and Rethrowing-Exception.


#include <iostream>
#include <cmath>
using namespace std;

void calculateLog(int i)
{
    try
    {
        if (i <= 0)
        {
            throw i;
        }

        else
        {
            cout << "The logarithm of the " << i << " is : " << log(i) << endl;
        }
    }

    catch(int j)
    {
        if(j == 0)
        {
            cout<<"***Logarithm of zero (i.e., "<<j<<") is not possible***"<<endl;
        }

        else
        {
            throw;
        }
    }
}



int main()
{
    int a;

    cout << "Enter any number : " << endl;
    cin >> a;

    try
    {
        calculateLog(a);
    }

    catch (int k)
    {
        cout<<"***The logarithm of a negative value (i.e., "<<k<<") is not possible***"<<endl;
    }
    return 0;
}