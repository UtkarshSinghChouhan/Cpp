#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;         //Declaring a pair.
    p = {5,"abc"};              //Initializing a pair.
//  p = make_pair(5,"abc");     //Another method to initialize a pair.
    cout<<"first element is : "<<p.first<<" and the second element is : "<<p.second<<endl;  //Accessing the elements of a pair.

    pair <int,string> p1 = p;       //Copying pair 'p' into pair 'p1'.
    cout<<"first element is : "<<p.first<<" and the second element is : "<<p.second<<endl;

    p1.first = 3;           //trying to change the first element using the copied pair.
    cout<<"First element : "<<p.first<<endl;    //We cannot change the value of the original pair using the copied pair, because the values are passed as 'copy' and not by 'reference'.

    pair<int,string> &p2 = p;   //To change the value of the elements of the original pair, we need to make a reference pair similiar to a reference variable. 
    p2.first = 3;
    cout<<"First element : "<<p.first<<endl;
    
    

    //Pair Array.
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {3,4};
    p_array[2] = {5,6};

    //Printing the pair array.
    for(int i = 0; i<3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<" "<<endl;
    }

    cout<<"After Swapping : "<<endl;
    swap(p_array[0], p_array[2]);
    
    //Printing the pair array again after swapping.
    for(int i = 0; i<3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<" "<<endl;
    }


    //Taking input in a pair.
    pair<int,string> p3;
    cout<<"Enter the first and Second element of the array : ";
    cin>>p1.first>>p1.second;
    cout<<"First element is : "<<p1.first<<" and second element is : "<<p1.second<<endl;

    return 0;
}