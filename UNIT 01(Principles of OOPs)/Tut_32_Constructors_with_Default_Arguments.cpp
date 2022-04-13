//EXAMPLE OF CONSTRUCTORS WITH DEFAULT ARGUMENTS:

#include<iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;
public:
    Simple(int,int,int);
    void printData();
};

Simple::Simple(int x=0,int y=0,int z=0)
{
    data1=x;
    data2=y;
    data3=z;
}

void Simple::printData()
{
    cout<<"The values of data1,data2 and data3 are "<<data1<<" , "<<data2<<" and "<<data3<<endl;
}

int main()
{
    Simple o1;
    o1.printData();

    Simple o2(3,4);
    o2.printData();

    Simple o3(6,7,8);
    o3.printData();


    return 0;
}

