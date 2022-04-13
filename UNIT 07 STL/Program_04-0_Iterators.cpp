//Iterators are similar to the pointer and stores the address of the elements of the 'containers'

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {7,2,3,4,5};
    vector<int> :: iterator it;     //Syntax for declaring an iterator.
    it = v.begin();                 //v.begin() return the memory adress of the 'first' element of the vector 'v'.

    // cout<<(*it)<<endl;              //here we are dereferencing the iterator 'it' to get the value stored at the memory address which is of type 'int'.
    // cout<<(*(it+1))<<endl;

    for(it = v.begin(); it!=v.end(); it++)          //v.end() function returns the memory address 'after' the last element of the vector 'v'
    {
        cout<<(*it)<<" ";
    }
    return 0;
}

// NOTE:
//     differenc between (it+1) and (it++) in case of iterator 'it'.
//     (it+1) - gives the next iterator pointing the next contiguous memory block weather it contains the value of the element of a 'container' or not.
//     (it++) - gives only that next iterator ponting to the  memory block which contains the value of the element of the 'container'.