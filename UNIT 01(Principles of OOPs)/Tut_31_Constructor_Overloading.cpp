//EXAMPLE OF CONSTRUCTOR OVERLOADING:

#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
    Complex();
    Complex(int);
    Complex(int,int);
    void printData();
};

Complex::Complex(){
    a=0;
    b=0;
    cout<<"Calling Default Constructor"<<endl;
}

Complex::Complex(int x){
    a=x;
    b=0;
    cout<<"Calling Parameterized Constructor with one argument"<<endl;
}

Complex::Complex(int x,int y){
    a=x;
    b=y;
    cout<<"Calling Parameterized Constructor with two arguments"<<endl;
}

void Complex::printData(){
    cout<<"The complex number is : ["<<a<<"+i("<<b<<")]"<<endl;
}

int main(){

    Complex o1;
    o1.printData();
    cout<<"********************************************************"<<endl;

    Complex o2(3);
    o2.printData();
    cout<<"********************************************************"<<endl;

    Complex o3(5,9);
    o3.printData();
    cout<<"********************************************************"<<endl;

    return 0;
}
