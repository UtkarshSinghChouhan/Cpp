#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> v_p = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}};
    vector<pair<int,int> > :: iterator it;

    //printing the elements of 'vector of pairs' using the iterator.
    int i = 0;
    for(it = v_p.begin(); it != v_p.end(); it++)
    {
        cout<<"The value of v_p["<<i<<"] is : {"<<(*it).first<<", "<<(*it).second<<"}"<<endl;
        i++;
    }

    cout<<"---------------------------------------------"<<endl;

    //Another method to print elements of containers using iterators only int he case of 'pairs;.
    i = 0;
    for(it = v_p.begin(); it != v_p.end(); it++)
    {
        cout<<"The value of v_p["<<i<<"] is : {"<<(it->first)<<", "<<(it->second)<<"}"<<endl;
        i++;
    }
    return 0;
}