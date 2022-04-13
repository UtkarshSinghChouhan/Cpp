 #include<iostream>

using namespace std;

int main(){
        int a;
        cout<<"Enter your age : "<<endl;
        cin>>a;
        switch(a){
            case(18):
            {
                cout<<"Ur eighteen year of age"<<endl;
                break;
            }
            case (22):
            {
                cout<<"Ur tweenty two years of age"<<endl;
                break;
            }
            default :
            {
                cout<<"Your age is not special"<<endl;
                break;
            }
        }
    return 0;
}

