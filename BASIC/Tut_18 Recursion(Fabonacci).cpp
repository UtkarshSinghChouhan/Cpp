#include<iostream>
using namespace std;

int fab(int a){
    if(a<2){
        return 1;
    }
    else{
        return fab(a-1)+fab(a-2);
    }
}

int main(){
    int n;
    cout<<"Enter the position to find its value in fabonacci sequence : "<<endl;
    cin>>n;
    cout<<"The value at the "<<n<<"th position is "<<fab(n)<<endl;
    return 0;
}
