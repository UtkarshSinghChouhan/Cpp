/*HOW TO ACCESS MEMBERS OF STRING IN C++

#include<iostream>
using namespace std;

class str{
    public:
    string s={"Utkarsh"};

};

int main(){
    str obj;
    cout<<"The alphabet at the index 0 position is : "<<obj.s[0]<<endl;
    cout<<"The alphabet at the index 1 position is : "<<obj.s[1]<<endl;
    cout<<"The alphabet at the index 2 position is : "<<obj.s[2]<<endl;
    cout<<"The alphabet at the index 3 position is : "<<obj.s[3]<<endl;
    cout<<"The alphabet at the index 4 position is : "<<obj.s[4]<<endl;
    cout<<"The alphabet at the index 5 position is : "<<obj.s[5]<<endl;
    cout<<"The alphabet at the index 6 position is : "<<obj.s[6]<<endl;
    return 0;
}
*/


/*SIMPLE PROGRAM TO CHECK BINARY FUNCTION

#include<iostream>
#include<string>          //since we have used stringName.length() function
using namespace std;

class Binary
{
private:
    string s;
public:
    void read();
    void checkBinary();
    void onesCompliment();
    void Display();
};

void Binary::read()
{
    cout<<"Enter a binary number : "<<endl;
    cin>>s;
}

void Binary::checkBinary()
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!= '0' && s[i]!='1')
        {
            cout<<"Not a binary number"<<endl;
            exit(0); //when void checkBinary function is called in main the exit(0) function inside checkBinary will help to exit the main function before return 0
        }

    }

}

void Binary::onesCompliment(){
    for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                s[i]='1';
            }

            else
            {
                s[i]='0';
            }
        }

}

void Binary::Display(){
    cout<<"The string that you have entered is : "<<s<<endl;
}

int main()
{
    Binary obj;
    obj.read();
    obj.checkBinary();
    obj.Display();
    obj.onesCompliment();
    obj.Display();
    return 0;
}
*/



/*NESTING OF MEMBER FUNCTION.


#include<iostream>
#include<string>

using namespace std;

class Binary{
    string s;
public:
    void read();
    void checkBinary();
    void display();
    void onesComplement();
};

void Binary::read(){
    cout<<"Enter a binary number : "<<endl;
    cin>>s;
}

void Binary::checkBinary(){
    for(int i=0;i<s.length();i++){
        if(s[i]!='0' && s[i]!='1'){
            cout<<"Not a binary number"<<endl;
            exit(0);
        }
    }
}

void Binary::onesComplement(){

    checkBinary();                     /*This is knows as "nesting of member function",
                                       here we have called the checkBinary function inside the onesComplement,
                                       as onesComplement function is dependent on checkBinary function
    for(int i=0;i<s.length();i++){
        if(s[i]=='0')
        {
            s[i]='1';
        }
        else
        {
            s[i]='0';
        }
    }
}

void Binary::display(){
    cout<<"Then binary number that U have entered is : "<<s<<endl;
}
int main(){
    Binary obj;
    obj.read();
    //obj.checkBinary();
    obj.display();
    obj.onesComplement();
    obj.display();

    return 0;
}

*/
