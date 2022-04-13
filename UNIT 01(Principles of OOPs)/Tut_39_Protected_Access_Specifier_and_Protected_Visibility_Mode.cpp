/*
                        | Public Inheritance  | Private Inheritance  | Protected Inheritance
    1. Public members   | Public              | Private              | Protected
    2. Private members  | not inherited       | not Inherited        | not Inherited
    3. Protected members| Protected           | Private              | Protected
*/


#include<iostream>
using namespace std;

class Base
{
private:
    int a = 10;
protected:
    int b = 20;
public:
    int c = 30;
};

class Derived:protected Base {};

int main()
{
    Base o1;
    Derived o2;

    //cout<<o2.b; // Will not work since b is protected in both Base as well as Derived-class.
    //cout<<o2.c; //Will not work since c is protected in Derived-class.
    cout<<o1.c; //Will work since c is public in Base-class.

    return 0;
}
