/* SYNTAX OF MULTIPLE INHERITANCE:
    class {{derived class name}} : {{visibility mode}} {{base class 1}},{{visibility mode}}{{base class 2}}
    {
        data members/methods(member functions,constructors,destructors...)
    }
*/


#include<iostream>
using namespace std;

class Base1
{
protected:
    int data1;
public:
    void setData1(int x)
    {
        data1=x;
    }
};

class Base2
{
protected:
    int data2;
public:
    void setData2(int x)
    {
        data2=x;
    }
};

class Base3
{
protected:
    int data3;
public:
    void setData3(int x)
    {
        data3=x;
    }
};



class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout<<"The value of base1 variable is : "<<data1<<endl;
        cout<<"The value of base2 variable is : "<<data2<<endl;
        cout<<"The value of base3 variable is : "<<data3<<endl;
        cout<<"The sum of these variable is : "<<(data1+data2+data3)<<endl;
    }
};


int main(){
    Derived o1;
    o1.setData1(23);
    o1.setData2(23);
    o1.setData3(23);
    o1.show();
    return 0;
}


/*
   Here the inherited derived class will something like this:
    Data members:
      data1 ---> protected
      data2 ---> protected
    Member Functions:
      setData1 ---> public
      setData2 ---> public
      show ---> public

*/
