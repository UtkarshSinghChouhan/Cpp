#include<iostream>
using namespace std;

class B;

class A{
    int data;
public:
    void setData(int value){
        data=value;
    }

    void displayData(){
        cout<<"The value of integer on class A is : "<<data<<endl;
    }

    friend void swap(A &,B &);
};

class B{
    int data;
public:
    void setData(int value){
        data=value;
    }

    void displayData(){
        cout<<"The value of integer on class B is : "<<data<<endl;
    }
    friend void swap(A &,B &);
};



void swap(A &x,B &y){
    int temp;
    temp = x.data;
    x.data = y.data;
    y.data = temp;
}



int main(){

    A a;
    a.setData(3);
    a.displayData();

    B b;
    b.setData(7);
    b.displayData();

    swap(a,b);
    cout<<"Swapping the values of the integer on class A and class B"<<endl;

    a.displayData();
    b.displayData();

    return 0;
}
