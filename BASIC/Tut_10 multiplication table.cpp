#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number U want the table of :"<<endl;
    cin>>a;
    for(int i=0; i<10; i++)
    {
        cout<<a<<" X "<<(i+1)<<" = "<<a*(i+1)<<endl;
    }
    return 0;
}
