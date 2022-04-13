#include<iostream>
using namespace std;

class Bill
{
    int quantity;
    float price,amount;
public:
    Bill()
    {
        int p;
        float q;

        cout<<"Enter the price : "<<endl;
        cin>>p;
        cout<<"Enter the quantity : "<<endl;
        cin>>q;

        quantity = q;
        price = p;
    }

    void display()
    {
        cout<<"The total amount is : "<<price<<" X "<<quantity<<" = "<<price*quantity<<endl;
    }
};

int main(){
    Bill *ptr = new Bill[3];

    for(int i = 0;i<3;i++)
    {
        (ptr+i)->display();
    }
    
    return 0;
}
