// Given N number of strings and Q no. of queries.
// In each query you are given a string print frequency of that string.

// Constraints:
//     N <= 10^6
//     |S| <= 100 (i.e. size of the string.)
//     Q <= 10^6

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    int size;   //represents the size of the map or the number of the string 'N'.
    cin>>size;

    //Inserting values to the map.
    for(int i = 0; i<size; i++)
    {
        string s;
        cin>>s;
        m[s] = m[s] + 1;
    }

    cout<<"Insertion Complete"<<endl;

    int q;      //no. of queries.
    cin>>q; 

    //the loop will iterate the queries number of times.
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }

    return 0;
}