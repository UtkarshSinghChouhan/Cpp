// Example-01 Calculing area

// #include<iostream>
// using namespace std;
// #define AREA(l, b) l*b 

// int main()
// {
//     int a = 10, b = 20;
//     cout<<"The area of the rectangle is : "<<AREA(a, b)<<endl;
//     return 0;
// }

// Example-02 Finding out the maximum value

#include<iostream>
using namespace std;
#define MAX(a,b) (((a)>(b)) ? (a) : (b))

int main()
{
    int  a = 18, b = 20;

    cout<<"The maximum value is : "<<MAX(a,b)<<endl;
    return 0;
}