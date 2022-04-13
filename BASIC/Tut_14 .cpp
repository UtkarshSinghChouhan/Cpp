#include<iostream>
using namespace std;
typedef struct employee{
    int empId;
    float salary;
}emp;

int main(){
    emp e1,e2;
    e1={1,12345};
    e2={2,1345};
    e1.empId=45;

    cout<<"The value of employee e1 Id is "<<e1.empId<<endl;
    cout<<"The value of employee e1 salary is "<<e1.salary<<endl;

    cout<<"The value of employee e2 Id is "<<e2.empId<<endl;
    cout<<"The value of employee e2 salary is "<<e2.salary<<endl;
     return 0;
}
