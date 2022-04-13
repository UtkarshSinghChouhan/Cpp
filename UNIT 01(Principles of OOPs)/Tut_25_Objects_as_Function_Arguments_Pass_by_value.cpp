// Write a program to pass the object to the function by pass-by-value method.(i.e., passing the copy of the object to the function)

#include<iostream>
using namespace std;

class Product
{
    int mfgYear;
    int expYear;
    int selfLife;
public:

    void setYears()
    {
        cout<<"Enter the manufacturing Date : "<<endl;
        cin>>mfgYear;
        cout<<"Enter the expiry Date : "<<endl;
        cin>>expYear;
    }

    void caculateSelfLife(Product p1)
    {
        selfLife = p1.expYear - p1.mfgYear;
        cout<<"The self life of the product is : "<<selfLife<<endl;
    }
};

int main(){

    Product p1;
    p1.setYears();
    p1.caculateSelfLife(p1);

    return 0;
}


/*
EXPLANATION :
     1. In the above program the two data-members (mfgYear and expYear) of the object p1
        are initialized using the member-function setYears() whereas the third data-member
        of the object p1 is initialized using the member-function calculateSelfLife().

     2. In the member-function calculateSelfLife(), the data-member 'selfLife' of the object p1
        is present directly inside the function as the function is invoked by the object p1.

        p1.mfgYear and p2.expYear represents the data-members of the objects which is passed as
        an argument during the call to the member-function calculateSelfLife().
*/








