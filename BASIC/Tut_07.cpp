#include<iostream>
using namespace std;

int main(){
    int i=5;
    int &j=i;
    cout<<i<<endl;
    cout<<j<<endl;

    float a=45.676;
    int b=45;
    cout<<"The value of a+b is :"<<a+b<<endl;
    cout<<"The value of (int)a+b is :"<<(int)a+b<<endl;
    cout<<"The value of int(a)+b is :"<<int(a)+b<<endl;
    return 0;
}
