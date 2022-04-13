#include<iostream>
using namespace std;

int main(){
    enum family{Dad,mom,brother,sister};
    family m1=Dad;
    family m2=mom;
    family m3=brother;
    family m4=sister;
    cout<<(m1==0)<<endl;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    cout<<m4<<endl;
    //cout<<Dad<<endl;
    //cout<<mom<<endl;
    //cout<<brother<<endl;
    //cout<<sister<<endl;

    return 0;
}
