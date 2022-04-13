#include<iostream>

using namespace std;

int g=5;
void glow(){
    cout<<"The value of g  is : "<<g<<endl;
}

int main(){
    int a=5,b=6;
    float pi=3.1459;
    char c='d';
    int g=45;
    bool f=true;

    cout<<"The value of a is :"<<a<<endl<<"The value of b is : "<<b<<endl;
    cout<<"The value of pi is : "<<pi<<endl;
    cout<<"The value of character c is : "<<c<<endl;

    glow();
    cout<<g<<endl ;
    cout<<f;
    return 0;
}
