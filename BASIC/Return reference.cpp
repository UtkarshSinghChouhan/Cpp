#include<iostream>
using namespace std;

int & returnRef(int &x){
    return x;
}

int main(){
    int a=50;
    cout<<"The value of a is "<<a<<endl;
    returnRef(a)=60;
    cout<<"The value of a is "<<a<<endl;
    return 0;
}
