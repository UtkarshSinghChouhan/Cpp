#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int c=*x;
    *x=*y;
    *y=c;
}

int main(){
    int a=4,b=5;
    cout<<"The value of a is "<<a<<" and the value of b  is "<<b<<endl;
    swap(&a,&b);
    cout<<"The value of a is "<<a<<" and the value of b  is "<<b<<endl;

    return 0;
}
