#include<iostream>
using namespace std;
union money{
    int gold;
    int silver;
};

int main(){
    union money m1;
    m1.gold=25;
    cout<<m1.gold<<endl;
    m1.silver=55;
    cout<<m1.gold<<endl;

    return 0;
}
