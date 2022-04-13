// SETS are similar to MAPS excluding the "value", SETS only contains the "Keys" in a sorted ordered just like MAPS.
// SETS store only unique values not any duplicate values.

#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> &s1)
{
    cout<<"The size of the SET is : "<<s1.size()<<endl;
    //  Either we can use range based loop to print the value of the SETS
    for(auto value : s1)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    //  or we can print like this too.
    for(auto it = s1.begin(); it != s1.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    set<string> s;      //declaring a set of string, it can be any data-type or continer.


    //Function to insert value inside the SET.
    s.insert("abc");    //the time-complexity of the insert() function is O(log(n)).
    s.insert("xyz");
    s.insert("uvw");
    s.insert("pqr");


    //printing the SET.
    printSet(s);    //notice in the output, although we have inserted "xyz" before "uvw", but "xyz" is printed afterward "uvw" as according to their alphabetic order.


    //Function to find the a particular value in SET, function returns an 'iterator' pointing to the "value" to be found.
    auto it = s.find("abc");    //the time-complexity of the find() function is also O(log(n)).

    if(it != s.end())
    {
        cout<<(*it)<<endl;
    }


    //Function to erase a value of the SET>
    auto it1 = s.find("uvw");

    if(it1 != s.end())
    {
        s.erase(it1);
        printSet(s);
    }

    //Similary we can also erase an element of the SET like this:
    s.erase("pqr");
    printSet(s);




    return 0;
}