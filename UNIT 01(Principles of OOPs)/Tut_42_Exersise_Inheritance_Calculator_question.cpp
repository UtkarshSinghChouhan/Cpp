/*
    Q. Create two classes:
       1. {{SimpleCalculator}} - which takes input of two numbers using utility and perform  +,-,*,/
          and display the result using another function.
       2. {{ScientificCalculator}} - which takes input of two numbers using a utility function and
          performs any four scientific operation of your choice and display the result using another function.
       3. Create another class {{HybridCalculator}} and display results of {{SimpleCalculator}} and {{ScientificCalculator}}.

*/


#include<iostream>
#include<math.h>
using namespace std;

class SimpleCalculator
{
protected:
    int a,b;
public:
    void setData()
    {
      cout<<"Enter any two numbers : "<<endl;
      cin>>a>>b;
    }
     void basicOperations()
     {
         cout<<"The addition of two numbers is : "<<(a+b)<<endl;
         cout<<"The subtraction of two numbers is : "<<(a-b)<<endl;
         cout<<"The multiplication of two numbers is : "<<(a*b)<<endl;
         cout<<"The quotient when "<<a<<" is divided by "<<b<<" is : "<<(a/b)<<endl;
     }
};

class ScientificCalculator : public SimpleCalculator
{
public:
    void scientificOperations()
    {
        cout<<"The square root of "<<a<<" and "<<b<<" is : "<<sqrt(a)<<" and "<<sqrt(b)<<" respectively "<<endl;
        cout<<"The value of "<<a<<"^"<<b<<" is : "<<pow(a,b)<<endl;
        cout<<"The sine of "<<a<<" and cos of "<<b<<" is : "<<sin(a)<<" and "<<cos(b)<<endl;
        cout<<"The logarithm to the base e of "<<a<<" and "<<b<<" is : "<<log(a)<<" and "<<log(b)<<" respectively"<<endl;
    }
};

class HybridCalculator : public ScientificCalculator
{
public:
    void display()
    {
        basicOperations();
        scientificOperations();
    }
};



int main(){

    HybridCalculator h1;
    h1.setData();

    int x;
    cout<<"Select any option : \n"<<"1. Basic operations \n"<<"2. Scientific operations \n"<<"3. Both \n"<<endl;
    cin>>x;

    switch(x)
    {
    case 1 :
        h1.basicOperations();
        break;
    case 2:
        h1.scientificOperations();
        break;
    case 3:
        h1.display();
        break;
    default:
        cout<<"*********Invalid Response************"<<endl;
    }

    return 0;
}
