// EXAMPLE OF MULTIPLE INHERITANCE TO UNDERSTAND THE SPECIAL SYNTAX OF THE DERIVED-CLASS CONSTRUCTOR

#include<iostream>
using namespace std;

class Base1
{
    int data1;
public:
    Base1(int a)
    {
        data1 = a;
        cout<<"*****Base1 constructor called*******"<<endl;
    }

    void printData1()
    {
        cout<<"The value of the data member of the Base class-1 is : "<<data1<<endl;
    }
};                                                                                                                 
                                                                                                                    
class Base2
{
    int data2;
public:
    Base2(int a)
    {
        data2 = a;
        cout<<"*****Base2 constructor called*******"<<endl;
    }

    void printData2()
    {
        cout<<"The value of the data member of the Base class-2 is : "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2 //The order in which we inherit the Base classes affects the order of the invoke(call) of the constructors.
{
    int derived1,derived2;
public:
    Derived(int w, int x, int y, int z) : Base2(w), Base1(x)   //Here in this line it does n't matter in which order we pass argument to the Base-class constructors.
    {
        derived1 = y;
        derived2 = z;
        cout<<"*****Derived-class constructor called*******"<<endl;
    }

    void printDerivedData()
    {
        printData1();
        printData2();
        cout<<"The value of the first data member of the Derived-class is : "<<derived1<<endl;
        cout<<"The value of the Second data member of the Derived-class is : "<<derived2<<endl;
    }
};



int main(){
    Derived d1(1,2,3,4);  //Due to the use of special-syntax of the Derived-class constructor,
                          // we need not to create the objects of the Base-classes too to initialize
                          //the data-members of the Base-classes.
    d1.printDerivedData();
    return 0;
}

/*
NOTE:
    1. The special syntax of the Derived-class constructor is used to initialize the
       data-members of the Base-classes by using the object of the Derived-class.

    2. In this case when we pass arguments to the Derived-class constructor in the
       main, these arguments are used to initialize the data-members of the Base-classes
       as well as the data-members of the Derived-class using the special syntax.

    3. Further The order in which we inherit the Base-classes is important, as it decides
       the order of the invoke of the constructors.
       It does n't matter in which order in the special syntax we pass arguments to the
       Base-classes constructor.
          It means that, in this case the Base-class 1 is inherited first than Base-class 2.
          Hence the constructor of the Base-class 1 is called before the constructor of the
          Base-class 2.
          But we pass arguments to the constructor of the Base-class 2 first than Base-class 1,
          even then the constructor of the Base-class 1 is called first.

    4. The order of the invoke of the constructors are:
          Base-class 1 --> Base-class 2 --> Derived-class
*/
