#include<iostream>
using namespace std;

bool funct(int l, string &s)
{
    if(l == s.size()/2)
    {
        cout<<"cat"<<endl;
        return true;
    }

    if(s[l] != s[s.size() - (l+1)])
    {
        cout<<"monkey"<<endl;
        return false;
    }
    
    cout<<"man"<<endl;
    return funct(l+1, s);
    
}

int main()
{
    string s1 = "110011";   //Palindrom
    string s2 = "MADAM";    //Palindrom
    string s3 = "madsm";    //not-Palindrom

    cout<<funct(0, s1)<<endl;
    cout<<funct(0, s2)<<endl;
    cout<<funct(0, s3)<<endl;
    return 0;
}