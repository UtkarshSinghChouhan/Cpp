// Given N number of strings, print unique strings in lexiographical order.
// N <= 10^5
// length of the string |s| <= 1000


//APPROACH USED : 
// Since it is only asked to print the elements in lexiographical order and not the frequency of the elements,
// hence we can simplify the question by using SET instead of using MAP.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string>  s;
    
    int n;
    cin>>n;

    for(int i = 0; i < n ; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }

    //printing the SET elements in lexiographical order.
    for(auto value : s)
    {
        cout<<value<<" ";
    }
    return 0;
}