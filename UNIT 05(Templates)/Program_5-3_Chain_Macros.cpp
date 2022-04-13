//Simple program to understand Chain-macros.

#include<iostream>
using namespace std;
#define IDENTITY NAME                   
#define NAME ("Utkarsh singh chouhan")  //Here child-macro NAME is depended on parent-macro IDENTITY.
                                        // Hence first parent-macro is expanded then child-macro is defined.

int main()
{
    cout<<"My name is : "<<IDENTITY<<endl;
    return 0;
}