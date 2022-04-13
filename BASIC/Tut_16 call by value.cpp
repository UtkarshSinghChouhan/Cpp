#include<iostream>
using namespace std;

void swap(int x,int y){
    int z=x;
    x=y;
    y=z;
}

int main(){
    int a=4,b=5;
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    swap(4,5);
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    return 0;
}
