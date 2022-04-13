//Write a program to compare two numbers to discover the smaller number and take the value at run time.

#include<iostream>
using namespace std;

class Number
{
   int number;
public:

   void setNumber()
   {
       cout<<"Enter a number : "<<endl;
       cin>>number;
   }

   Number compare(Number obj)
   {
       if(obj.number < number)   //Here obj.number represents the data member of the object which is passed as an argument and 'number' represents the data member of the object which invokes the function.
       {
            return obj;
       }

       else
       {
           return *this;  //Here we are dereferencing the this-pointer to get the object which invokes the function.
       }
   }

   void displayResult()
   {
       cout<<"The smaller number is : "<<number<<endl;
   }
};

int main(){

    Number n1,n2,n;

    n1.setNumber();
    n2.setNumber();

    n = n1.compare(n2);

    n.displayResult();

    return 0;
}
