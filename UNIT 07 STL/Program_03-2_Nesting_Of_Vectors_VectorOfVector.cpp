//Vector of vector is some-what similar to 2D-array in which the number of rows is dynamic(i.e. each column can have as many number of rows and the number of rows in each column can be different) whereas the no. of columns in each row is also dynamic.
// (i.e. each row can have as many no. of column and the no. of columns in each row can be different )


// Here in case of Vector of vector, 
//                          the number of rows   => number of elements in inner vectors.
//                          the number of columns => number of vectors in outer-vector.


#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v1)
{
    cout<<"Size : "<<v1.size()<<endl;

    for(int i =0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<vector<int> > v;     //represent a vector whose each element is a vector itself or represents "a dynamic array of type vector" whose each element is itself "a dynamic array of type int"

    int size;           //represnt the size of the outer-vector.
    cout<<"Enter the size of the vector : ";
    cin>>size;

    int totalElements;      //represents the total number of elements in each inner-vector.
    int element;        //reprents the value of element in each inner-vector

    for(int i = 0; i<size; i++)
    {
        cout<<"For vector v["<<i<<"] : "<<endl;
        cout<<"Enter the total number of elements in vector v["<<i<<"] : ";
        cin>>totalElements;

        vector<int> temp;       //here we have created a temporary vector of type 'int', which represents an inner-vector.
        for(int j = 0; j<totalElements; j++)
        {
            cout<<"Enter the element at index "<<j<<" : ";
            cin>>element;
            temp.push_back(element);
        }
        v.push_back(temp);
    }

    for(int i = 0; i<v.size(); i++)
    {
        printVector(v[i]);  //here we are passing inner-vector one-by-one to printand not the entire outer vector.
    }

    return 0;
}