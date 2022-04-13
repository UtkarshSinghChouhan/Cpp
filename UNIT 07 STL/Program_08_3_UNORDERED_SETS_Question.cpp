// Given N number of string and Q number of queries.
// In each query you are given a string print yes if the string is present 
// else print no.

// N <= 10^5
// Size of the string |s| <= 100
// Q <= 10^6


#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;

    int n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);        
    }

    int q;
    cin>>q;

    for( int i = 0; i < q; i++)
    {
        string str;
        cin>>str;
        auto it = s.find(str);
        if(it != s.end())
        {
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}