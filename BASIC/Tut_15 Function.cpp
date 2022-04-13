#include<iostream>
using namespace std;

int sum(int x,int y);


int main(){
    int num1,num2;
    cout<<"Enter the value of first number : ";
    cin>>num1;
    cout<<"Enter the value of second number : ";
    cin>>num2;

    cout<<"The sum of the two numbers is : "<<sum(num1,num2);

    return 0;
}




int sum(int a,int b){
    int summation=a+b;
    return summation;
}
