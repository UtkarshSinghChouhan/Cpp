#include<iostream>
using namespace std;

class Employee{
private:
    int a,b,c;
public:
    int d,e;

    void setData(int x,int y,int z);
    void getData(){
        cout<<"The value of a is = "<<a<<endl;
        cout<<"The value of b is = "<<b<<endl;
        cout<<"The value of c is = "<<c<<endl;
    }
};

    void Employee :: setData(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }


int main(){
    Employee utkarsh;
    utkarsh.d=23;
    utkarsh.e=53;
    utkarsh.setData(32,23,23);
    utkarsh.getData();
    cout<<"The value of d is = "<<utkarsh.d<<endl;
    cout<<"The value of e is = "<<utkarsh.e<<endl;
    return 0;
}
