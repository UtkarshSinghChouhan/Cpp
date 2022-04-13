//Write a program to declare arrays of objects.

#include<iostream>
using namespace std;

class Player
{
    string name;
    int age;
public:
    void setDetails();
    void displayDetails();
};

void Player :: setDetails()
{
    cout<<"Enter the player name : "<<endl;
    cin>>name;
    cout<<"Enter the player age : "<<endl;
    cin>>age;
}

void Player :: displayDetails()
{
    cout<<"Player's name is : "<<name<<endl;
    cout<<"Player's age is : "<<age<<endl;
}

int main(){
    Player cricket[3];

    for(int i = 0; i<3; i++)
    {
        cricket[i].setDetails();
    }

    cout<<"\n"<<endl;
    cout<<"-------------------------------------------"<<endl;

    for(int i = 0; i<3; i++)
    {
        cricket[i].displayDetails();
        cout<<"\n"<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"\n"<<endl;
    }

    return 0;
}
