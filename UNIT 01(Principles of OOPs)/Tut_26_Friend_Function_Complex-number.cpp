#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }

    void printNumber(){
        cout<<"The complex number 1 is : ["<<a <<" + i("<<b<<")]"<<endl;
    }

    friend Complex sumComplex(Complex o1,Complex o2);  //We can declare friend function either in the public section or in the private section of the class.
};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    Complex c1,c2;

    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(3,7);
    c2.printNumber();

    Complex  sum;
    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}
