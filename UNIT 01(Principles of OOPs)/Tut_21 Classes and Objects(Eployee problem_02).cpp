#include<iostream>
using namespace std;

class Employee{
private:
    int a,b,c;
public:
    int d,e;

    void setData(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void getData(){
        cout<<"The value of a is = "<<a<<endl;
        cout<<"The value of b is = "<<b<<endl;
        cout<<"The value of c is = "<<c<<endl;
        cout<<"The value of d is = "<<d<<endl;
        cout<<"The value of e is = "<<e<<endl;
    }

};

int main(){
    Employee utkarsh;
    utkarsh.d=234;
    utkarsh.e=24;
    utkarsh.setData(34,22,23);
    utkarsh.getData();
    return 0;
}
