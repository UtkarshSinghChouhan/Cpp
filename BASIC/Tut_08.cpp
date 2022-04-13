#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    const int a=5;
    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of a is :"<<a<<endl;

    int b=3,c=34,d=123;
    cout<<"The value of a is :"<<setw(4)<<a<<endl;
    cout<<"The value of b is :"<<setw(4)<<b<<endl;
    cout<<"The value of c is :"<<setw(4)<<c<<endl;

    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of c is :"<<c<<endl;


    return 0;
}
