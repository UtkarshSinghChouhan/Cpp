#include<iostream>
using namespace std;

class Animal{

    string name;
    string type;
    int legs;

public:
    void setData(){
        cout<<"Enter the name of the animal : "<<endl;
        cin>>name;
        cout<<"Enter the type of the animal : "<<endl;
        cin>>type;
        cout<<"Enter the number of legs that the animal have : "<<endl;
        cin>>legs;
    }
    void getData(){
        cout<<"The name of the animal is : "<<name<<endl;
        cout<<"The  type of the animal is : "<<type<<endl;
        cout<<"The number of legs that the animal have : "<<legs<<endl;

    }

};

int main(){
    Animal dog;
    Animal snake;
    dog.setData();
    dog.getData();
    cout<<"***********************************************************************"<<endl;
    snake.setData();
    snake.getData();
    return 0;
}
