/*
PASS-BY-ADDRESS:
    Here the address of the object is passed explicitly.In both pass-by-reference and -address methods,
    the address of the actual object(argument) is sent to the function.The formal argument is a reference
    pointer to the actual object.Hence the changes made in the object is reflected to the actual object.
*/

// Write a program to pass the object to the function by pass-by-reference method.

#include<iostream>
using namespace std;

class Product
{
    int mfgYear;
    int expYear;
    int selfLife;
public:
    void setYear()
    {
        cout<<"Enter the manufacturing year o the product : "<<endl;
        cin>>mfgYear;
        cout<<"Enter the expiry year o the product : "<<endl;
        cin>>expYear;
    }

    void calculateSelfLife(Product *obj)   //Here the dereference operator(*) indicates that the function will accept address of the actual argument.
    {
        selfLife = obj->expYear - obj->mfgYear;                     //Here we need to use the arrow operator to access the data-members,
        cout<<"The self life of the product is : "<<selfLife<<endl; // Since the obj is a pointer which stores the address of the object p1.
    }                                                               // Product *obj = &p1.

};

int main(){

    Product p1;
    p1.setYear();
    p1.calculateSelfLife(&p1); //passing the address of the actual argument

    return 0;
}
