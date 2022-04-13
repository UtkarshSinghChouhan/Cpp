//Explanation of Base-class pointer pointing to Base and Derived-class in Multilevel inheritance.

#include<iostream>
using namespace std;

class Base1
{
protected:
    int var_base1;
public:

    Base1(int a)
    {
        var_base1 = a;
    }

     void display()
    {
        cout<<"The value of the data-member of the base-class 1 is : "<<var_base1<<endl;
    }
};

class Derived1 : public Base1
{
protected:
    int var_derived1;
public:

    Derived1(int b, int c) : Base1(b)
    {
        var_derived1 = c;
    }

     void display()
    {
        cout<<"The value of the data-member of the derived-class 1 is : "<<var_derived1<<endl;
    }
};

class Derived2 : public Derived1
{
protected:
    int var_derived2;

};

int main(){

    Base1 *base1;              //Creating Base class-1 pointer
    base1 = new Base1(10);     //Dynamically Creating a nameless object of Base class-1 whose address will be stored in the 'base1' pointer.
    base1->display();          //Accessing the display() function of the Base class-1 using base1 pointer

    //Base class-1 pointer pointing to Derived class-1 nameless object
    base1 = new Derived1(20,30);
    base1->display();
    ((Derived1*)base1)->display();                      



    return 0;
}
