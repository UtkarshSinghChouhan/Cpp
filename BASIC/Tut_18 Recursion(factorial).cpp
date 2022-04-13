#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    cout<<"The value of the factorial of "<<a<<" is : "<<factorial(a)<<endl;
    return 0;
}
