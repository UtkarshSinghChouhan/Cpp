//Using 'this' pointer, when the local variable name is same as the data-members's name.

#include<iostream>
using namespace std;

class Number
{
    int data;
public:
    void setData(int data)
    {
        this->data = data;
    }

    void displayData()
    {
        cout<<"The value of the variable data is : "<<data<<endl;
    }
};

int main(){

    Number n1;

    n1.setData(25);
    n1.displayData();

    return 0;
}
