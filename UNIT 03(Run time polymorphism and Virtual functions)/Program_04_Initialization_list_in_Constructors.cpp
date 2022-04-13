// SIMPLE EXAMPLE TO UNDERSTAND 'IITIALIZATION LIST' IN CONSTRUCTORS.

/*
    Syntax:
      Constructor(argument-list) : initialization-section
      {
        assignment of data members + other code ;
      }
*/


#include<iostream>
using namespace std;

class Test
{
    int a;  //Declared first
    int b;  //Declared second
public:
    // Test(int i, int j) : a(i), b(j)    //works
    // Test(int i, int j) : a(i), b(i+j)  //works
    // Test(int i, int j) : a(i), b(2*j)  //works
    // Test(int i,int j) : a(i), b(a+j)   //works, as the data-member a is declared first
    Test(int i,int j) : b(a+j), a(i)   //works, as the data-member a is declared first
    // Test(int i, int j) : b(j), a(i+b)    //will not work as the data-member b is declared second
    {
        cout<<"Constructor executed"<<endl;
        cout<<"The value of the first data-member is : "<<a<<endl;
        cout<<"The value of the second data-member is : "<<b<<endl;
    }
};

int main(){
    Test obj1(4,6);
    return 0;
}


/*
NOTE:
    Initialization list is just another way of initializing the data-member
    of a class, in contrast to the classical approach where we initialize the
    data-members of a class inside the constructor.

    This approach to initialize the data-members of a class is used when
    the other codes inside body of the constructor is very complex and
    hence we initialize the data-members outside the body of the constructor.
*/






