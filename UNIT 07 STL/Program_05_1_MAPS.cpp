//Maps are similar to vector of pairs.

// Inbuilt-Implementation - MAPS uses Red-Black trees as inbuilt implementation.

#include<bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m1)
{
    cout<<"Size : "<<m1.size()<<endl;

    for(auto &pr : m1)    //Note that here we have used 'auto' keyword instead of using the entire declaraton of the iterator 'it'.
    {                     //And Range-based loop. Further note that we have used the reference of the pair 'pr' to avoid copying the values of the pair.
        cout<<pr.first<<" "<<pr.second<<endl;       
    }
}

int main()
{
    map<int, string>  m;
    m[1] = "abc";           //The time complexity of insertion operation is O(log (n));
    m[8] = "xyz";
    m[5] = "uvw";
    m[5] = "iaddjja";           //Note that a single 'key' cannot corresponds to more than one value in a map
                                //Further if we try to assign another 'value' to an already assigned 'key', it will
                                //overwrite the previously assigned 'value'.

    
                        
    printMap(m);

    // int arr[5] = {1,2,3,4,5};        //Just to understand the concept of the Range based loop further more.
    // for(auto  &value : arr)
    // {
    //     cout<<value<<" ";
    // }

    return 0;
}