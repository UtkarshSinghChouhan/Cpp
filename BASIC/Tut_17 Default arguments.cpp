#include<iostream>
using namespace std;

int moneyReceived(int currentMoney,float intrest=1.04){
    return currentMoney*intrest;
}

int main(){
    int money;
    cout<<"Enter the money U have in Ur account : "<<endl;
    cin>>money;
    cout<<"If U have "<<money<<" in Ur account,U will receive "<<moneyReceived(money)<<" rupees after 1 year."<<endl;
    cout<<"If U have "<<money<<" in Ur account,U will receive "<<moneyReceived(money,1.10)<<" rupees after 1 year."<<endl;

    return 0;
}
