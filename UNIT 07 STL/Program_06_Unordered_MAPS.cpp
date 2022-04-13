// NOTE:
//     Unordered MAPS uses all the same functions as that in MAPS.

// The only difference between the MAPS and the Unordered MAPS is:
// 1. Inbuilt Implementation    ( MAPS uses red-black tree whereas unordered-MAPS uses HASH-tables)
// 2. Time Complexity.
// 3. Valid-Keys Data-Types.    (unordered_maps only valid for primitive data types like int, long long, double, float, char, string etc.)
 

#include<bits/stdc++.h>
using namespace std;

void printMap(unordered_map<int, string> &m1)
{
    cout<<m1.size()<<endl;

    for(auto &pr : m1)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    unordered_map<int, string> m;   //note that in case of the unordered_maps we cannot use very complex data-types like vectors, pairs, it will show an error but in case of maps we can.
    m[2] = "abc";   //In case of the unordered-MAPS the time complexity of the insertion operation is O(1).
    m[1] = "cde";
    m[6] = "efg";
    m[15] = "uvw";
    m[22] = "xyz";
    m[12] = "pqr";

    printMap(m);

    //Unordered MAPS Functions.
    auto it = m.find(22);       //In case of the unordered_maps the time complexity of the find() function is O(1).

    if(it != m.end())
    {
        m.erase(it);            //In case of the unordered_maps the time complexity of the erase() function is O(1).
        printMap(m);
    }

    else
    {
        cout<<"No Value Exists!!!"<<endl;
    }

    return 0;
}