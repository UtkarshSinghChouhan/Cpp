/*
NOTE:
     1. When a variable is declared as a reference, it becomes an alternative name for an existing variable.
     2. If we change the value of the reference variable it will change the value of the original variable and vice-versa.
     3. If a function receives a reference to a variable, it can modify the value of the variable.
*/

/*

#include<iostream>
using namespace std;

int main(){
    int x=20;
    int &y=x;
    cout<<"The address of x is "<<&x;
    cout<<"\n The address of x is "<<&y;
    cout<<"\n The value  of x is "<<y;
    cout<<"\n The value  of x is "<<x;
    y=70;
    cout<<"\n The value  of x is "<<x;
    return 0;
}

*/

/*

#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    // ref is a reference to x.
    int& ref = x;

    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << endl ;

    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << endl ;

    return 0;
}

*/

/*

#include<iostream>
using namespace std;

void swap (int& first, int& second)  //It means that variables 'first' and 'second' are reference (just another names) of the variables 'a' and 'b'.
                                     //And if we change the value of 'first' and 'second' it will change the values of 'a' and 'b'.
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
    int a = 2, b = 3;
    swap( a, b );
    cout << a << " " << b;
    return 0;
}

*/
