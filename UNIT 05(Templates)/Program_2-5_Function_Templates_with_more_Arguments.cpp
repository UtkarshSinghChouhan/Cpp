//Write a program to exchange values of two variables. Use template variables as function arguments

#include<iostream>
using namespace std;

template <class T>
void exchange(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int x = 2, y = 3;
    
    cout<<"Before exchange : x = "<<x<<" and y = "<<y<<endl;
    exchange(x, y);           
    // exchange<int>(x, y);  //Both syntax works fine.
    cout<<"After exchange : x = "<<x<<" and y = "<<y<<endl;

    return 0;
}