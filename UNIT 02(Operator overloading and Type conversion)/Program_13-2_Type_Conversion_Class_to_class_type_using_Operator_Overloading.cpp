#include<iostream>
using namespace std;


class B
{
    int b;
public:
    B(){};

    B(int);

    int getData();

    void display();
};


class A
{
    int a;
public:

    A(){};

    A(int x)
    {
        a = x;
    }

    int getData()
    {
        return a;
    }

    void display()
    {
        cout<<"The value of the member variable 'a' of the object of class A is : "<<a<<endl;
    }

    void operator =(B o1)
    {
        a = o1.getData();
    }

};

B :: B(int y)
    {
        b = y;
    }

int B :: getData()
    {
        return b;
    }

void B :: display()
    {
        cout<<"The value of the member variable 'b' of the object of class B is : "<<b<<endl;
    }

int main(){
    A a1(2);
    B b1(3);

    cout<<"Before conversion"<<endl;

    a1.display();
    b1.display();

    a1 = b1;

    cout<<"After conversion"<<endl;

    a1.display();
    b1.display();


    return 0;
}