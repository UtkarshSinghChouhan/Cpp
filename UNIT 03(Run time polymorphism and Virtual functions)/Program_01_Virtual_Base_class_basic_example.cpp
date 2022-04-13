// Q1-Diamond Problem Solution

#include<iostream>
using namespace std;

class A
{
public:
    int a;

    A()
    {
        a = 10;
    }

    void getA()
    {
        cout<<"The value of A is : "<<a<<endl;
    }
};

class B: virtual public A
{
public:
    int b;

    B()
    {
        b = 20;
    }

    void getB()
    {
        cout<<"The value of B is : "<<b<<endl;
    }
};

class C: virtual public A
{
public:
    int c;

    C()
    {
        c = 30;
    }

    void getC()
    {
        cout<<"The value of C is : "<<c<<endl;
    }
};

class D:public B, public C
{
public:
    int d;

    D()
    {
        d = 40;
    }

    void getD()
    {
        cout<<"The value of D is : "<<d<<endl;
    }


};

int main(){
    D d1;
    d1.getA();
    d1.getB();
    d1.getC();
    d1.getD();


    return 0;
}
