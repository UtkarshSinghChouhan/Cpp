#include <iostream>
using namespace std;

template<class T>
T myfunction(T * a,int n)
{
    T x;
    if(n == 1)
        return a[0];
    else
    {
        x = myfunction(a, n - 1); 
    }
    if(x > a[n - 1])
    return x;
    else
        return a[n - 1];
}


int main()
{
int arr1[] = {1,2,3,4,5};
double arr2[] = {1.1,1.2,1.3,1.4,1.5};
char arr3[] = {'A','B','C','D','E'};
cout<<myfunction(arr1,5)<<endl;
cout<<myfunction(arr2,4)<<endl;
cout<<myfunction(arr3,1)<<endl;
return 0;
}