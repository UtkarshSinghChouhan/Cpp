#include<iostream>
using namespace std;

class Rupees;

class Dollar
{
    int amount;
public:
    Dollar() {}
    Dollar(int);
    int getAmount();
    operator Rupees();
    void display();
};


class Rupees
{
    int amount;
public:
    Rupees() {}
    Rupees(int);
    int getAmount();
    operator Dollar();
    void display();
};


Rupees :: Rupees(int x)
{
    amount = x;
}
int Rupees :: getAmount()
{
    return amount;
}
Rupees :: operator Dollar()
{
    cout<<"*********** CONVERTING RUPESS INTO DOLLARS **********************"<<endl;
    int a;
    Dollar d1;
    a = d1.getAmount();
    a = amount;
    return a;

}
void Rupees :: display()
{
    cout<<"The amount in Dollar is : $"<<(float)amount/77<<endl;
}



Dollar :: Dollar(int x)
{
    amount = x;
}
int Dollar :: getAmount()
{
    return amount;
}
Dollar :: operator Rupees()
{
    cout<<"*********** CONVERTING DOLLAR INTO RUPEES **********************"<<endl;
    int a;
    Rupees r1;
    a = r1.getAmount();
    a = amount;
    return a;
}
void Dollar :: display()
{
    cout<<"The amount in Rupees is : "<<(float)amount*77<<endl;
}







int main()
{
    int choice;
    int amnt;
    Rupees r1;
    Dollar d1;

    cout<<"Which type of conversion do you want : \n"
        <<"1. Rupees To Dollar.\n"
        <<"2. Dollar To Rupees.\n"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
    {
        cout<<"Enter the amount in Rupees : ";
        cin>>amnt;

        Rupees r1 = Rupees(amnt);

        d1 = r1;     //Converting Rupees(Source) to Dollar(Destination).

        r1.display();

        break;
    }

    case 2:
    {
        cout<<"Enter the amount in Dollar : $";
        cin>>amnt;

        Dollar d1 = Dollar(amnt);

        r1 = d1;     //Converting Dollar(Source) to Rupees(Destination).

        d1.display();

        break;
    }

    default :
        cout<<"************* ENTER A VALID NUMBER ******************"<<endl;
    }


    return 0;
}
