/*Write a  program to declare static public member variable, global variable and
  local variable with the same name.
*/


#include<iostream>
using namespace std;

int a = 10;            //Global variable

class Number
{
public:
    static int a;      //static data-member
};

int Number :: a = 20;

int main(){
    int a = 30;       //local variable

    cout<<"The value of the Global variable is : "<<:: a<<endl;
    cout<<"The value of the Static data-member is : "<<Number :: a<<endl;
    cout<<"The value of the Local variable is : "<<a<<endl;

    return 0;
}
