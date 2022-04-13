
#include<iostream>
using namespace std;

int sum(int x,int y);
int d(int f,int g);

int main(){
    int num1,num2;
    cout<<"Enter the value of first number : ";
    cin>>num1;
    cout<<"Enter the value of second number : ";
    cin>>num2;

    cout<<"The sum of the two numbers is : "<<sum(num1,num2);

    return 0;
}

int c(int f,int g){
    int d=f+g;
    return d;
}


int sum(int a,int b){
    int summation=c(a,b);
    return summation;
}
