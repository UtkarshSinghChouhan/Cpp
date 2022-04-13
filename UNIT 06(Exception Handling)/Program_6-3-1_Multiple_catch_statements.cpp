// NOTE:
//    1. In case of multiple catch-blocks, as soon as an exception is thrown, the compiler serches for the appropriate catch-block.
//       The matching catch block is executed and the control passes to the successive statements after the last catch-block

//    2. In case if the objects of many catch statements are similar to the type of exceptions, in such a situation
//       the first catch block is executed.

//Simple program to find out the number passed as an argument is zero, positive or negative.

#include <iostream>
using namespace std;

void test(int num)
{
    try
    {
        cout << "We're inside the try block..." <<endl;

        if (num == 0)
        {
            throw num;
        }

        if (num > 0)
        {
            throw 'A';
        }

        if (num < 0)
        {
            throw 1.0;
        }
    }

    catch (int a)
    {
        cout << "Caught an interger value..." << endl;
    }

    
    catch (char b)
    {
        cout << "Caught a character value..." << endl;
    }

    catch (double a)
    {
        cout << "Caught a negative value..." << endl;
    }
}

int main()
{
    cout << "Demo of the multiple catch statements : " << endl;
    test(0);
    test(1);
    test(-1);

    return 0;
}