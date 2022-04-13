#include<iostream>
using namespace std;

class A
{
    public:

    virtual void display()
    {
        cout<<"Inside the base A"<<endl;
    }
};

class B : public A
{
    public:

    void display()
    {
        cout<<"Inside the derived-class B"<<endl;
    }
};

class C : public A
{
    public:

    void display()
    {
        cout<<"Inside the derived-class C"<<endl;
    }
};

class D : public A
{
    public:

    void display()
    {
        cout<<"Inside the derived-class D"<<endl;
    }
};

class E : public A
{
    public:

    void display()
    {
        cout<<"Inside the derived-class E"<<endl;
    }
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    E e;
    
    A *ptr[5] = {&a, &b, &c, &d, &e};

    for(int i = 0; i<5; i++)
    {
        ptr[i]->display();
    }

    return 0;
}