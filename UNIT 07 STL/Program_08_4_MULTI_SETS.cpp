// 1. the Time-complexities of the functions-

//     FUNCTION            SET                  UNORDERED-SET           MULTI-SET
//     insert()         O(log(n))                   O(1)                O(log(n))
//     find()           O(log(n))                   O(1)                O(log(n))


// 2. In contrast to SETS, UNORDERED-SETS, MULTI-SETS can store duplicate values.

#include<bits/stdc++.h>
using namespace std;

void printMultiSet(multiset<string> &s1)
{
    cout<<"The size of the multi-set is : "<<s1.size()<<endl;

    //Loop to print the value in the multi-set.
    for(auto value  : s1)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}

int main()
{
    //declaring multi-set.
    multiset<string> s;

    //Inserting values in multi-set.
    s.insert("abc");        
    s.insert("xyz");        
    s.insert("abc");        
    s.insert("xyz");        
    s.insert("xyz");        
    s.insert("abc");    

    printMultiSet(s);           //Note that the multiset can store the duplicate value


    auto it = s.find("abc");
    if(it != s.end())
    {
        s.erase(it);
        printMultiSet(s);
    }   

    //But if we try to delete an element using the following sytax of the erase() function then all the copies of that element gets deleted. 
    s.erase("abc");
    printMultiSet(s);

    //Function to clear the values stored in the multiset.
    s.clear();                  //Similar as in case of other containers clear() function clears the values stored in the multiset.
    printMultiSet(s);

    return 0;
}