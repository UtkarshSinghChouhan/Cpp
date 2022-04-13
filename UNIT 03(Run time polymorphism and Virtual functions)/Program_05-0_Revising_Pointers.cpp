#include<iostream>
using namespace std;

int main()
{
    int arr[3];
    int* ptr = arr;

    // ptr[0] = 1; //We can assign the values to the elements of the array like this too.
    // ptr[1] = 2;
    // ptr[2] = 3;

    *(ptr) = 1;  //We can assign the values to the elements of the array like this too.
    *(ptr+1) = 1;
    *(ptr+2) = 1;

    cout<<"The value of the first elelment of the array is : "<<arr[0]<<endl;
    cout<<"The value of the second elelment of the array is : "<<arr[1]<<endl;
    cout<<"The value of the third elelment of the array is : "<<arr[2]<<endl;

    
    cout<<"\nThe value of the first elelment of the array is : "<<*ptr<<endl;
    cout<<"The value of the second elelment of the array is : "<<*(ptr+1)<<endl;
    cout<<"The value of the third elelment of the array is : "<<*(ptr+2)<<endl;

    cout<<"\nThe value of the first elelment of the array is : "<<ptr[0]<<endl;
    cout<<"The value of the second elelment of the array is : "<<ptr[1]<<endl;
    cout<<"The value of the third elelment of the array is : "<<ptr[2]<<endl;


    return 0;
}