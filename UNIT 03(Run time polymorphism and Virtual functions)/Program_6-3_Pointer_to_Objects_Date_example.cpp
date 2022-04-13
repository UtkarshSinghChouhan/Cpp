#include<iostream>
using namespace std;

class Date
{
    int  dd,mm,yy;
public:
    Date()
    {
        int a,b,c;
        cout<<"Enter the Date : "<<endl;
        cin>>a;
        cout<<"Enter the month : "<<endl;
        cin>>b;
        cout<<"Enter the year : "<<endl;
        cin>>c;


        dd = a;
        mm = b;
        yy = c;
    }

    void displayDate()
    {
        cout<<"The date is : "<<dd<<"/"<<mm<<"/"<<yy<<"."<<endl;
    }
};



int main(){
    Date *ptr = new Date;      //Here we are creating a pointer pointing to a nameless variable of type 'Date'.

    cout<<"Accessing Data members using the pointer method 1"<<endl;
    (*ptr).displayDate();
    cout<<"Accessing Data members using the pointers method 2"<<endl;
    ptr->displayDate();

    return 0;
}
