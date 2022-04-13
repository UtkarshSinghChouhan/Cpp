#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}

int main(){
    int x=4,y=5;
    cout<<"The value of x is "<<x<<"The value of y is "<<y<<endl;
    swap(x,y);
    cout<<"The value of x is "<<x<<"The value of y is "<<y<<endl;
    return 0;
}
