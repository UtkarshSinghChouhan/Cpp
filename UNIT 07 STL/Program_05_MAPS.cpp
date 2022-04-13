#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string>  m;
    m[1] = "abc";
    m[8] = "xyz";
    m[5] = "uvw";

    m.insert({3,"pqr"});

    m[7];       //Since we have not assigned any string corresponding to this 'key', hence it will associate itself with a null string.

    map<int, string> :: iterator it;

    for(it = m.begin(); it != m.end(); it++)    
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }



    map<int, int> m1;
    m1[1];          //Since we have not associate these 'keys' with any value, hence it will by default
    m1[8];          //assign 'zero' as values to these 'key', in cap of map of int, int type.
    m1[6];
    m1[9];

    for(auto &p : m1)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}