#include<iostream>
using namespace std;
union money{
    int gold;
    int silver;
};

int main(){
     union money m1;
     m1.gold=48000;
     m1.silver=46000;
     cout<<m1.gold<<endl;
     cout<<m1.gold<<endl;
     return 0;
}
