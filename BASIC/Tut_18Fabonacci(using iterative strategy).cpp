#include<iostream>
using namespace std;

int main(){
    int a=1,b=1,c,n;
    cout<<"Enter the position whose value U want in the fabonacci sequence : "<<endl;
    cin>>n;
    int temp=n;
    if(n==0){
        cout<<1<<endl;
    }

    else{
        while(n!=0){
        c=a+b;
        a=b;
        b=c;
        n--;
        }
    }
    cout<<"The value at the "<<temp<<"th position is : "<<a<<endl;
    return 0;
}
