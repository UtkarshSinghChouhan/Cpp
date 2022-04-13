#include<iostream>
using namespace std;

class Complex
{
    int real, img;
public:
    void setData()
    {
        int a,b;
        cout<<"Enter the value of the real part : "<<endl;
        cin>>a;

        cout<<"Enter the value of the imginary part : "<<endl;
        cin>>b;

        real = a;
        img = b;
    }

    void getData()
    {
        cout<<"The complex number is : ["<<real<<"+ i("<<img<<")]"<<endl;
    }
};

int main(){

    Complex *ptr = new Complex[4];    //Here are dynamically creating an object array of four elements and the pointer 'ptr' is pointing to the first element of the object-array.

    ptr->setData();
    ptr->getData();

    cout<<"-----------------------------------------------------"<<endl;

    (ptr+1)->setData();
    (ptr+1)->getData();

    cout<<"-----------------------------------------------------"<<endl;

    (ptr+2)->setData();
    (ptr+2)->getData();

    cout<<"-----------------------------------------------------"<<endl;

    (ptr+3)->setData();
    (ptr+3)->getData();



    return 0;
}
