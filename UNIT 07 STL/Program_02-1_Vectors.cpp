// As we know that the time-complexity of copying one vector to another is O(n) which is an expensive task, hence
// always remember that while passing vector to a function as in below case always pass the reference of the vector 
// so that actual vector passes not that its copy passes this will save the time complexity.

#include<bits/stdc++.h>
using namespace std;

//Function to print the vector.
void printVector(vector<int> &v)
{
    cout<<" Size : "<<v.size()<<endl;          //size() function returns the size of the vector and its time-complexity is O(1).
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    //Creating a vector.
    vector<int> v1(5,3);    //the size of the vector is '5' and the value of all the elements is '3'.

    //Creating another vector.
    vector<int> v2 = v1;         //copies the entire list of elements of from vector 'v2' to vector 'v3', here the time-complexity of copying one vector into the another is O(n).
    printVector(v2);        //we are passing the actual vector 'v2' and not its copy as the function will accept the reference only.

    //Further rather than creating a copy of one vector to another we can always use the reference vector (this is just another name of the original vector and it is not the copy of the orinal vector),
    //which will save the time complexity.
    //Syntax is below : 
    vector<int> &v3 = v1;   //vector v3 is a reference if vector v1.
    v3.push_back(2);
    printVector(v3);
    printVector(v1);        //changes done by the reference vector will also refelect in the original vector.

    return 0;
}