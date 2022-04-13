/*REVIEWING FUNCTIONS*/

/* EXAMPLE: CHANGING THE VALUE OF VARIABLE USING ITS COPY.

#include<iostream>
using namespace std;

int funct(int a)
{
    a = 5;       //Here we have changed the value of variable x using its copy 'a'.
    return a;
}

int main()
{
    int x = 3;
    cout<<"The value of x is : "<<x<<endl;
    int c = funct(x);                      //Here we have passed the changed value of x in some other variable and we are using this variable to print the updated value of x.
    cout<<"The value of x is : "<<c<<endl;

    return 0;
}
*/

// EXAMPE: CHANGING THE VALUE OF A VARIABLE USING CALL BY REFERENCE.


#include<iostream>
using namespace std;

void funct(int &a)
{
    a=5;  //Here we have permanently changed the value of the variable x.

}

int main(){
    int x = 3;
    cout<<"The value of x is : "<<x<<endl;
    funct(x);
    cout<<"The value of x is : "<<x<<endl;   //Since the value of x is changed permanently,hence we can print the value using the same variable 'x'.

    return 0;
}

