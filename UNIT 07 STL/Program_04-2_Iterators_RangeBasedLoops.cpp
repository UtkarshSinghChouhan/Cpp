#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Range based loops works for every 'container'.

    vector<int> v = {1, 2, 3, 4, 5};

    // print the value of the vector-elements using the range based loop.
    for (int value : v)       //here the value of each element of the vector 'v' stored in the variable 'value' is a copy of the actual value and not the actual value
    {
        cout << value << " ";
    }

    cout<<"\n------------"<<endl;

    for(int &x : v)         //'x' is the reference variable which stores the actual-value of each element of the vector.
    {
        cout<<x<<" ";
    }

    cout<<"\n----------------------------------"<<endl;

    vector<pair<int,int>> v_p = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}};
    //printing the elements of the vectors of pairs using the range based loop.
    for(pair<int,int> &p : v_p)          //here the actual-value of each pair of the vector 'v' is being passed to pair 'p' during each iteration.
    {
        cout<<"{"<<p.first<<","<<p.second<<"} ";
    }
    return 0;
}