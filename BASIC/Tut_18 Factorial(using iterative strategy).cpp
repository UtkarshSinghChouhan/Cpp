#include<iostream>
using namespace std;

int main(){
    int a;
    int fact=1;
    cout<<"Enter any number :"<<endl;
    cin>>a;
    for(int i=a;i>0;i--){
        fact=fact*i;
    }
    cout<<"The value of the factorial of "<<a<<" is : "<<fact;
    return 0;
}
