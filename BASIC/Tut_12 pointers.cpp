#include<iostream>
using namespace std;

int main(){
     int a=3;
     int* b=&a;
     int &c=a;
     cout<<"The address of a is : "<<&a<<endl;
     cout<<"The address of a is : "<<b<<endl;
     cout<<"The value of c is : "<<c<<endl;


     cout<<"The value at b is : "<<*b<<endl;
     cout<<"The value at b is : "<<*(&a)<<endl;

     int** d=&b;
     cout<<"The address of b is : "<<d<<endl;
     cout<<"The address of b is : "<<&b<<endl;
     cout<<"The value at address of  b is : "<<*(&b)<<endl;
     cout<<"The value at address of  b is : "<<*d<<endl;
     cout<<"The value at address of  b is : "<<**(&b)<<endl;
     cout<<"The value at address of  b is : "<<**d<<endl;


     return 0;
}
