//Vector-array is some-what similar to 2D-array in which the number of rows is fixed whereas the no. of columns in each row is dynamic.

#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v1)
{
    cout<<"Size : "<<v1.size()<<endl;
    for(int i = 0; i<v1.size(); i++)    
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // vector<int> v[10];      //here we have created '10' vectors of each of size '0'.




    //Creating a vector-array whose size is taken as input from user.
    int size;
    cout<<"Enter the size of the vector-array : ";
    cin>>size;                  //represents the size of the vector-array or the total number of vectors in the vector-array.
    vector<int> v[size];        //here we have created a 'size' no. of vectors of each of size '0'.


    
    int totalElement;           //represent the size of each element(i.e. vector) of the vector-array.
    int element;                //represents the 'value' of the element of a vector of the vector-array.

    //Taking elements of each vector of the vector-array as a input from the user.

    //Outer loop for iterating the number of vector in a vector-array.
    for(int i = 0; i<size; i++)
    {
        cout<<"Enter the total no. of elements U want in vector "<<(i+1)<<" : ";
        cin>>totalElement;

        //Inner loop for taking element inside a vector.
        for(int j= 0; j<totalElement; j++)
        {
            cout<<"Enter the "<<(j+1)<<" element of the vector "<<(i+1)<<" : ";
            cin>>element;

            v[i].push_back(element);
        }
    }

    for(int i = 0; i<size; i++)
    {
        printVector(v[i]);
    }
    return 0;
}