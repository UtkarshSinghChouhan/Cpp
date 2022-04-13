#include<iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;
public:
    void setPrice();
    void displayPrice();
};

void Shop :: setPrice()
{
    cout<<"Enter the Id of your item : "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the Price of your item : "<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop :: displayPrice()
{
    for(int i=0; i<counter; i++)
    {
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop s1;
    s1.setPrice();
    s1.setPrice();
    s1.setPrice();
    s1.displayPrice();
    return 0;
}
