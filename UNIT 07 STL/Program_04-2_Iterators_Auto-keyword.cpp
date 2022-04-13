#include<bits/stdc++.h>
using namespace std;

int main()
{
    auto a = 2;     //'auto' keyword determined=s the data type suring the 
    cout<<a <<endl;

    cout<<" ---------------------------"<<endl;

    vector<int> v = {7,2,3,4,5};    

    for(auto it = v.begin(); it!=v.end(); it++)     //here the 'auto-keyword' automatically determines the data type of the 'it' as iterator, since we have initialized the value of 'it' using v.begin().
    {
        cout<<(*it)<<" ";
    }

    cout<<"\n---------------------------"<<endl;

    vector<pair<int,int>> v_p = {{1,2}, {3,4}, {5,6}, {7,8}};
    for(auto &p : v_p)
    {
        cout<<"{"<<p.first<<","<<p.second<<"} ";
    }

    return 0;
}