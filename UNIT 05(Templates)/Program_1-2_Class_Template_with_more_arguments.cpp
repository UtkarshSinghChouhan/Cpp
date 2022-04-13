#include<iostream>
using namespace std;


template <class  T, class U> //This statement declares that the following class contains two template-type variables.

class Data
{
    T x;
    U y;
public:
    Data(T a, U b)
    {
        x = a;
        y = b;
        cout<<"The value of x+y is = "<<x+y<<endl;
    }
};

int main()
{
    Data <float,float> obj1(2.7,2.5);  //This statement tells the compiler that the first argument is of float type and the second argument is of float type too.
    Data <int,int> obj2(2,2);

    return 0;
}