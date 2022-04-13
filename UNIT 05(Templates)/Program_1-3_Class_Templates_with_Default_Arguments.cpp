#include<iostream>
using namespace std;

template <class T, class U = int>
class Data
{
    T x;
    U y;
public:
    Data() {}
    Data(T a, U b)
    {
        x = a;
        y = b;
        cout<<"The value of x is = "<<x<<endl;
        cout<<"The value of y is = "<<y<<endl;
    }
    
};
int main()
{
    Data <int> obj1;
    Data <char> obj2('A',5);
    Data <double, double> obj3;
    cout<<"The size of obj1 is = "<<sizeof(obj1)<<endl;
    cout<<"The size of obj2 is = "<<sizeof(obj2)<<endl;
    cout<<"The size of obj3 is = "<<sizeof(obj3)<<endl;
    return 0;
}