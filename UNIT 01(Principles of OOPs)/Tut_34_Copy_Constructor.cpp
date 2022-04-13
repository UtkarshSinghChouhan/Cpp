#include<iostream>
using namespace std;

class Number
{
    int a;
public:
    Number();
    Number(int);
    Number(Number &);  //Copy Constructor 
    void display();
};

Number::Number()
{
    a = 0;
}

Number::Number(int x)
{
    a = x;
}

// When copy constructor is not found the compiler provides its own copy constructor
Number::Number(Number &obj)
{
    cout<<"Calling Copy Constructor"<<endl;
    a = obj.a;    //Here LHS is the instance of object o3 and RHS is the instance of the object o2 in main.
}



void Number::display()
{
    cout<<"The value of a is : "<<a<<endl;
}

int main()
{

    /* Number o1,o2(5),o3(o2);  //we can create the objects like this also.

    o1.display();
    o2.display();
    o3.display(); */

    Number o1;          //Initialized using Default constructor
    o1.display();

    Number o2(45);      //Initialized using Parameterized constructor
    o2.display();

    Number o3(o2);      //Initialized using Copy constructor
    o3.display();
    return 0;
}
