#include<bits/stdc++.h>
using namespace std;

//Function to print the vector.
void printVector(vector<int> v1)
{
    cout<<" Size : "<<v1.size()<<endl;          //size() function returns the size of the vector and its time-complexity is O(1).
    for(int i = 0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    //Vector are similar to array but are dynamic in size.
    vector<int> v;      //Declaring a vector of type 'int'.

    //Initializing the vector by taking input from the user.
    int size,element;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    for(int i = 0; i<size; i++) 
    {
        cout<<"Enter the "<<(i+1)<<" element : ";
        cin>>element;
            printVector(v);             //After running the program it concludes that the size of the vectors is 'dynamic'.
        v.push_back(element);           //push_back() function pushes the element at the back of the vector and its time-complexity is O(1).
    }

    //Printing the vector elements.
    printVector(v);



    //Creating another vector v1.
    vector<int> v1(8);        //Here we are declaring that the size of this vector is '8' and all the elements are by-default initializes with '0'.
    v1.push_back(7);          //This statement changes the size of the vector from '8' to '9' as it insert element '7' at the back.
    printVector(v1);

    v1.pop_back();          //This function removes the last element from the vector and its time complexity is O(1).
    printVector(v1);


    //creating another vector v2.
    vector<int> v2(5,2);        //Here we are declaring a vector of size '5' in which the value of all the elements is '2'
    printVector(v2);
    

    //Creating another vector.
    vector<int> v3 = v2;         //copies the entire list of elements of from vector 'v2' to vector 'v3', here the time-complexity of copying one vector into the another is O(n).
    v3.push_back(6);
    printVector(v3);
    printVector(v2);        //changes done by v3 will not reflected in 'v2' the original vector

    return 0;
}