#include<iostream>
using namespace std;

int main(){
    int arr[]={23,34,35,46};
    int* ptr=arr;
     cout<<*(ptr++)<<endl;
     cout<<*(ptr)<<endl;
     cout<<*(++ptr)<<endl;

     return 0;
}
