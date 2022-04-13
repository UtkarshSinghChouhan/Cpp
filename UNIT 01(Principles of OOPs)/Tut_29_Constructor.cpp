/* 1.Constructor is a special member function with the same name as class name.
   2.Constructors do not have a return type.
   3.Constructor gets automatically called/invoked whenever an object is created.
   4.It is used to initialize the objects of a class.
   5.It should be declared inside the public section of a class.
   6.Constructors can have default arguments.
   7.We cannot refer to their address.
*/



#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
public:
    Complex();
    void printData(){
        cout<<"The complex number is : ["<<real<<" + i("<<img<<")]"<<endl;
    }
};

Complex::Complex(){
        real=10;
        img=20;
    }

int main(){
    Complex o1;         //As the object o1 is the created the default constructor is called automatically.
    o1.printData();
    return 0;
}
