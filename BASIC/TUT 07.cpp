#include<iostream>
using namespace std;

int c=69;

int main(){
  /*  int a,b,c;
    cout<<"Enter the value of a and b :"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"The value of the sum is = "<<c<<endl;
    cout<<"The value of the global value of c is = "<<::c;*/
    float d=34.4;
    long double e=34.4;
    cout<<"The value of 34.4 is :"<<sizeof(34.4)<<endl;
    cout<<"The value of 34.4 is :"<<sizeof(34.4f)<<endl;
    cout<<"The value of 34.4 is :"<<sizeof(34.4F)<<endl;
    cout<<"The value of 34.4 is :"<<sizeof(34.4d)<<endl;
    cout<<"The value of 34.4 is :"<<sizeof(34.4D)<<endl;
    return 0;
}

