#include<bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int,int>> &v1)
{
    cout<<"The elements of the vector are : "<<endl;;
    for(int i = 0; i<v1.size(); i++)
    {
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }
}

int main()
{
    //Declaring a vector of pair.
    // vector<pair<int,int>> v = {{1,2}, {3,4}, {5,6}};        //vector 'v' has three elements each of which is a pair.
    // printVector(v);



    // Taking input from the user and initializing then vector of pairs.
    vector<pair<int,int>> v2;
    int size, pFirst, pSecond;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    for(int i = 0; i<size; i++)
    {
        cout<<"Enter the "<<(i+1)<<" element of the vector : "<<endl;
        cout<<"Now enter the "<<(i+1)<<" and "<<(i+2)<<" elements of the pair : ";
        cin>>pFirst>>pSecond;

        v2.push_back({pFirst,pSecond});
        // v2.push_back(make_pair(pFirst,pSecond));     //We can also make pair and insert it in vector like this.
    }

    printVector(v2);
    return 0;
}