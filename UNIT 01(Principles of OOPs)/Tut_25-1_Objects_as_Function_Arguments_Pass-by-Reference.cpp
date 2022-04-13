/*
PASS-BY-REFERENCE:
    In this method the address of the object is implicitly sent to the function.
*/



/*Simple program to understand the reference object.

  #include<iostream>
  using namespace std;

  class Number
  {
    public:
      int a;
      int b;
  };

  int main()
  {
      Number n1;

      n1.a = 10;
      n1.b = 20;

      cout<<"The value of the a is "<<n1.a<<" and  b is "<<n1.b<<endl;

      //Creating reference to the object n1.
      Number &obj = n1;
      cout<<"The value of the a is "<<obj.a<<" and  b is "<<obj.b<<endl; //printing the value of a and b using the reference object.


      //Changing the value of a and b using the reference object
      obj.a = 30;
      obj.b = 40;
      cout<<"The value of the a is "<<n1.a<<" and  b is "<<n1.b<<endl;//printing the value of a and b using the original object.


      return 0;
  }
*/





// Write a program to pass the object to the function by pass-by-reference method.


#include<iostream>
using namespace std;

class  Number
{
public:
    int a = 10;
    int b = 20;

    void change(Number &obj)
    {
        obj.a = 30;   //Here we are changing the value of the variables 'a' and 'b' of the object n1(declared in main)
        obj.b = 40;   //using the reference object 'obj', as 'obj' is just another name of the object 'n1'.
    }
};

int main()
{

    Number n1;

    cout<<"Initially the value of the variables are :"<<endl;

    cout<<"\nThe value of the variable 'a' is : "<<n1.a<<endl;
    cout<<"The value of the variable 'b' is : "<<n1.b<<endl;

    cout<<"\n Now the value of the variables are :"<<endl;

    n1.change(n1);
    cout<<"\nThe value of the variable 'a' is : "<<n1.a<<endl;
    cout<<"The value of the variable 'b' is : "<<n1.b<<endl;

    return 0;
}





