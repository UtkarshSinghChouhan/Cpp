// Given 'n' strings, print unique strings in Lexiographical order with their frequency.
// Constraints : n <= 10^5
//               Sizeof(string) <= 100

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin>>n;


    //Inserting values to the map.
    cout<<"Taking Input"<<endl;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin>>s;
        m[s] = m[s] + 1;
    }

    //Printing the values in the lexiographical order.
    cout<<"Output"<<endl;
    for(auto &p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}