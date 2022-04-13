//EXAMPLE 01

#include<iostream>
using namespace std;

int number=0;

class Number
{

public:
    Number()
    {
        number++;
        cout<<"The constructor is called for object "<<number<<endl;
    }

    ~Number()
    {
        cout<<"The destructor is called for object "<<number<<endl;
        number--;
    }

};

int main()
{
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object"<<endl;
    Number o1;
    {
        cout<<"Now we are inside the block"<<endl;
        cout<<"Creating second object"<<endl;
        Number o2;
        cout<<"Creating third object"<<endl;
        Number o3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Now we are outside the block and inside the main again"<<endl;
    return 0;
}
