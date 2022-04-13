//The difference beteen SET and Unordered-SET.
// 1. unordered-set stores value in a random in contrast to the SET which stores value in ordered manner.

// 2. the time-complexities of the functions-

//     FUNCTION            SET                  UNORDERED-SET
//     insert()         O(log(n))                   O(1)
//     find()           O(log(n))                   O(1)


// 3. Similar to Unordered-MAPS we cannot put complex containers (like vectors, pairs, sets maps etc) in Unordered-SET too,
    // we can only put basic data-types in both Unordered-MAPS and Unordered-SETS.

#include<bits/stdc++.h>
using namespace std;

void printUnorderedSet(unordered_set<string> &s1)
{
    cout<<"The size of the unordered-set is : "<<s1.size()<<endl;

    //Loop to print the value in the unordered-set.
    for(auto value  : s1)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}

int main()
{
    //declararion of an unordered-set.
    unordered_set<string> s;

    //Function to insert values inside an unordered-set.
    s.insert("abc");
    s.insert("xyz");
    s.insert("efg");
    s.insert("uvw");
    s.insert("pqr");
    s.insert("mno");

    printUnorderedSet(s);
    return 0;
}