#include<iostream>
using namespace std;

class Complex;

class Calculator{

public:
    int sumRealComplex(Complex o1,Complex o2);
    int sumImgComplex(Complex i1,Complex i2);
};

class Complex{
    int a,b;
public:
    void setNumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }

    void printNumber()
    {
        cout<<"The complex number is : ["<<a<<" + i("<<b<<")]"<<endl;
    }

    //friend int Calculator::sumRealComplex(Complex o1,Complex o2);
    //friend int Calculator::sumImgComplex(Complex o3,Complex o4);

    //or

    friend class Calculator;


};

int Calculator::sumRealComplex(Complex o1,Complex o2){
    return (o1.a+o2.a);
}

int Calculator::sumImgComplex(Complex i1,Complex i2){
    return (i1.b+i2.b);
}

int main(){

    Complex o1,o2;

    o1.setNumber(1,3);
    o1.printNumber();

    o2.setNumber(4,5);
    o2.printNumber();

    Calculator c1;

    cout<<"The sum of Real part of the complex numbers is : "<<c1.sumRealComplex(o1,o2)<<endl;
    cout<<"The sum of Imaginary part of the complex numbers is : "<<c1.sumImgComplex(o1,o2)<<endl;

    return 0;
}
