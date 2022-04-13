#include<iostream>
using namespace std;

class Y;

class X
{
    int data;
public:
    void setData(int);
    friend void add(X,Y);
};

void X::setData(int value)
{
    data = value;
}

class Y
{
    int data;
public:
    void setData(int);
    friend void add(X,Y);
};

void Y::setData(int value)
{
    data = value;
}



void add(X o1,Y o2)
{
    cout<<"The sum of the datas of class X and Y is :"<<o1.data+o2.data<<endl;
}




int main(){

    X o1;
    o1.setData(5);

    Y o2;
    o2.setData(15);

    add(o1,o2);
    return 0;
}
