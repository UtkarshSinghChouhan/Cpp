#include<iostream>

using namespace std;
int main(){
    int a;
    cout<<"Enter your age :"<<endl;
    cin>>a;
    if(a<18){
        cout<<"U cann't come to the party"<<endl;
    }
    else if(a==18){
        cout<<"U get a pass to the party"<<endl;
    }
    else{
        cout<<"U can come to the party"<<endl;
    }
    return 0;
}
