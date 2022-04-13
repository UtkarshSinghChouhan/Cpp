//Example : Pointer to objects a deep-dive into the concepts.

/*
"Dereferencing a pointer" is just simply means obtaining the value of the
                          variable whose address does the pointer stores.
*/

#include<iostream>
using namespace std;

class Shop
{
    int productId;
    float price;
public:
    Shop() {}
    Shop(int,float);
    void displayData();
};

Shop :: Shop(int x, float y)
{
    productId = x;
    price = y;
}

void Shop :: displayData()
{
    cout<<"The product Id is : "<<productId<<endl;
    cout<<"The price of the product is : "<<price<<endl;
}

int main(){
    Shop *ptr = new Shop[2];
    Shop *ptr1 = ptr;           //Pointer ptr1 stores the value of the pointer ptr(i.e, the address  of the first element of the array)
    int a;
    float b;

    for(int i=0; i<2; i++)
    {
        cout<<"Enter the product Id and the price of the product : "<<endl;
        cin>>a>>b;

      //CALLING PARAMETRIZED CONSTRUCTOR USING POINTER.
      //*(ptr+i) = Shop(a,b);    //we can also pass arguments to the parametrized constructor like this,
        ptr[i] = Shop(a,b);    //Since we can dereference a pointer either by using *ptr or by ptr[i].
        (ptr+i)->displayData();
        cout<<"----------------------------------------------------------"<<endl;
    }

    /*
    In the next for-loop we need to use the pointer ptr1 instead of ptr,
    This is due to the fact that when first 'for' loop finishes the
    pointer ptr does not point to the address of the first element of the array.
    */

    // for(int i = 0; i<2; i++)
    // {
    //     ptr1->displayData();
    //     ptr1++;
    // }

    return 0;
}
