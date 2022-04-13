//EXAMPLE OF DYNAMIC INITIALIZATION OF OBJECTS USING CONSTRUCTOR AND CONSTRUCTOR OVERLOADING

#include<iostream>
using namespace std;

class BankDeposit
{
    int principal;
    float rate;
    int time;
    float returnValue;
public:
    BankDeposit() {};   /*we have used this default constructor here
                        to initialize objects
                        before they get assigned any value
                        from their respective parameterized constructors*/
    BankDeposit(int p,float r,int t);//here the value of r is like 0.04(represent rate)
    BankDeposit(int p,int r,int t);//here the value of r is like 4(represent rate)
    void display();
};

BankDeposit::BankDeposit(int p,float r,int t) //This function takes the value of rate in float.
{
    principal=p;
    rate=r;
    time=t;
    returnValue=principal;
    for(int i=0; i<t; i++)
    {
        returnValue=returnValue*(1+rate);/*Here we have calculated the returnValue using,
                                            Amount = P + S.I. = [P + (P*R*T)/100]
                                                              = [P(1 + R/100 )]  */
    }
}

BankDeposit::BankDeposit(int p,int r,int t)   //This function takes the value of rate in int.
{
    principal=p;
    rate=(float)r/100;
    time=t;
    returnValue=principal;
    for(int i=0; i<t; i++)
    {
        returnValue=returnValue*(1+rate);/*Here we have calculated the returnValue using,
                                            Amount = P + S.I. = [P + (P*R*T)/100]
                                                              = [P(1 + R/100 )]  */
    }
}

void BankDeposit::display()
{
    cout<<"The return amount is "<<returnValue
        <<" for the principal "<<principal
        <<" at the rate of "<<rate<<"%"
        <<" after time "<<time
        <<" years. "<<endl;
}



int main()
{
    BankDeposit o1,o2; //these objects get initialized using the default constructor
    int p;
    float r; //for the rate in float format
    int t;
    int R;   //for the rate in integer format

    cout<<"Enter the value of principal,rate and time : "<<endl;
    cin>>p>>r>>t;
    o1 = BankDeposit(p,r,t);  /* we can initialize object like
                                BankDeposit o1 = BankDeposit(p,r,t)
                                if we are not using the default constructor*/
    o1.display();

    cout<<"**********************************************************************************"<<endl;

    cout<<"Enter the value of principal,rate and time : "<<endl;
    cin>>p>>R>>t;
    o2 = BankDeposit(p,R,t);  /*BankDeposit o2 = BankDeposit(p,R,t)*/
    o2.display();



    return 0;
}
