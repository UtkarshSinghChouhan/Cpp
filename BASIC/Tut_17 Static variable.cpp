#include<iostream>
using namespace std;

inline int product(int x,int y){
    static int c=0;
    c=c+1;
    return (x*y)+c;
}

int main(){
    int a,b;
    cout<<"Enter the value a and b : "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    return 0;
}
