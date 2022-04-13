#include<bits/stdc++.h>
using namespace std;

void printVector(vector<string> &v1)
{
    cout<<"The elements of the vector are : ";
    for(int i = 0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
}

int main()
{
    vector<string> v;
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;

    string s;
    
    //Taking input of the string from the user and inserting it in vector.
    for(int i = 0; i<size; i++)
    {
        cout<<"Enter the "<<(i+1)<<" string : ";
        cin>>s;

        v.push_back(s);
    }

    printVector(v);
    return 0;
}