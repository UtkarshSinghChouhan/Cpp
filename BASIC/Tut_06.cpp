#include<iostream>
using namespace std;

int main(){
    int a=5,b=4;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a/b is "<<(float)a/b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of ++a is "<<++a<<endl;

    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;

    cout<<"The value of ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of (!(a==b)) is "<<(!(a==b))<<endl;
    cout<<"The value of ((a==b)||(a>b)) is "<<((a==b)||(a>b))<<endl;

   return 0;
}
