//Simple program to understand the working of 'this' pointer.

#include<iostream>
using namespace std;

class Number
{
public:
    void displayAddress()
    {
        cout<<"The address of the object which invokes this member function is : "<<this<<endl;
    }
};

int main(){

    Number n1;
    n1.displayAddress();

    return 0;
}
