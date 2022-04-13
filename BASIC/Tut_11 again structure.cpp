#include<iostream>
//#include<string.h>
using namespace std;

struct employee{
    int empId;
    float salary;
    char name[30];
};

int main(){
    struct employee e1;
    //e1.empId=1;
    //e1.salary=4577.56;
   // strcpy(e1.name,"Utkarsh");
    e1={1,457.545,"Utkarsh"};
    cout<<"The employee id is : "<<e1.empId<<endl;
    cout<<"The employee salary is : "<<e1.salary<<endl;
   // cout<<"The employee name is : "<<e1.name<<endl;

    return 0;
}
