<a href="#01">Program_01_Pairs</a> <br>
<a href="#02">Program_02_Vector</a> <br>
<a href="#03">Program_02-1_Vectors</a> <br>
<a href="#04">Program_02-2_Vector_of_Strings</a> <br>
<a href="#05">Program_03_Nesting_of_Vectors_VectorOfPairs</a> <br>
<a href="#06">Program_03-1_Nesting_of_Vectors_VectorOfArray</a> <br>
<a href="#07">Program_03-2_Nesting_Of_Vectors_VectorOfVector</a> <br>
<a href="#08">Program_04-0_Iterators</a> <br>
<a href="#09">Program_04-1_Iterators</a> <br>
<a href="#10">Program_04-2_Iterators_Auto-keyword</a> <br>
<a href="#11">Program_04-2_Iterators_RangeBasedLoops</a> <br>
<a href="#12">Program_05_MAPS</a> <br>
<a href="#13">Program_05_1_MAPS</a> <br>
<a href="#14">Program_05_2_MAPS_Functions</a> <br>
<a href="#15">Program_05_3_MAPS_Question</a> <br>
<a href="#16">Program_06_Unordered_MAPS</a> <br>
<a href="#17">Program_07_Unordered_MAPS_Practice_Problem</a> <br>
<a href="#18">Program_08_0_SETS</a> <br>
<a href="#19">Program_08_1_SETS_Question</a> <br>
<a href="#20">Program_08_3_UNORDERED_SETS_Question</a> <br>
<a href="#21">Program_08_3_UNORDERED_SETS</a> <br>
<a href="#22">Program_08_4_MULTI_SETS</a> <br>
<a href="#23">Program_11_0_Stacks_and_Queues</a> <br>
<a href="#24">Program_11_1_Stacks_and_Queues</a> <br>
<a href="#25">Program_11_2_Stacks_and_Queues_Balanced_Brackets_Matching</a> <br>


<h2 id="01">Program_01_Pairs</h2>

```cpp
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
```


<h2 id="02">Program_02_Vector</h2>

```cpp
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
```
<h2 id="03">Program_02-1_Vectors</h2>

```cpp
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
```
<h2 id="04">Program_02-2_Vector_of_Strings</h2>

```cpp
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
```
<h2 id="05">Program_03_Nesting_of_Vectors_VectorOfPairs</h2>

```cpp
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
```
<h2 id="06">Program_03-1_Nesting_of_Vectors_VectorOfArray</h2>

```cpp
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
```
<h2 id="07">Program_03-2_Nesting_Of_Vectors_VectorOfVector</h2>

```cpp
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
```

<h2 id="08">Program_04-0_Iterators</h2>

```cpp
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
```

<h2 id="09">Program_04-1_Iterators</h2>

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> v_p = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}};
    vector<pair<int,int> > :: iterator it;

    //printing the elements of 'vector of pairs' using the iterator.
    int i = 0;
    for(it = v_p.begin(); it != v_p.end(); it++)
    {
        cout<<"The value of v_p["<<i<<"] is : {"<<(*it).first<<", "<<(*it).second<<"}"<<endl;
        i++;
    }

    cout<<"---------------------------------------------"<<endl;

    //Another method to print elements of containers using iterators only int he case of 'pairs;.
    i = 0;
    for(it = v_p.begin(); it != v_p.end(); it++)
    {
        cout<<"The value of v_p["<<i<<"] is : {"<<(it->first)<<", "<<(it->second)<<"}"<<endl;
        i++;
    }
    return 0;
}
```

<h2 id="10">Program_04-2_Iterators_Auto-keyword</h2>

```cpp
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
```

<h2 id="11">Program_04-2_Iterators_RangeBasedLoops</h2>

```cpp
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
```

<h2 id="12">Program_05_MAPS</h2>

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string>  m;
    m[1] = "abc";
    m[8] = "xyz";
    m[5] = "uvw";

    m.insert({3,"pqr"});

    m[7];       //Since we have not assigned any string corresponding to this 'key', hence it will associate itself with a null string.

    map<int, string> :: iterator it;

    for(it = m.begin(); it != m.end(); it++)    
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }



    map<int, int> m1;
    m1[1];          //Since we have not associate these 'keys' with any value, hence it will by default
    m1[8];          //assign 'zero' as values to these 'key', in cap of map of int, int type.
    m1[6];
    m1[9];

    for(auto &p : m1)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}
```

<h2 id="13">Program_05_1_MAPS</h2>

```cpp
//Maps are similar to vector of pairs.

// Inbuilt-Implementation - MAPS uses Red-Black trees as inbuilt implementation.

#include<bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m1)
{
    cout<<"Size : "<<m1.size()<<endl;

    for(auto &pr : m1)    //Note that here we have used 'auto' keyword instead of using the entire declaraton of the iterator 'it'.
    {                     //And Range-based loop. Further note that we have used the reference of the pair 'pr' to avoid copying the values of the pair.
        cout<<pr.first<<" "<<pr.second<<endl;       
    }
}

int main()
{
    map<int, string>  m;
    m[1] = "abc";           //The time complexity of insertion operation is O(log (n));
    m[8] = "xyz";
    m[5] = "uvw";
    m[5] = "iaddjja";           //Note that a single 'key' cannot corresponds to more than one value in a map
                                //Further if we try to assign another 'value' to an already assigned 'key', it will
                                //overwrite the previously assigned 'value'.

    
                        
    printMap(m);

    // int arr[5] = {1,2,3,4,5};        //Just to understand the concept of the Range based loop further more.
    // for(auto  &value : arr)
    // {
    //     cout<<value<<" ";
    // }

    return 0;
}
```

<h2 id="14">Program_05_2_MAPS_Functions</h2>

```cpp
// NOTE: 
// All of these function works for almost every containers like vectors, maps, sets etc.


#include<bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m1)
{
    cout<<"Size : "<<m1.size()<<endl;

    for(auto &pr : m1)    //Note that here we have used 'auto' keyword instead of using the entire declaraton of the iterator 'it'.
    {                     //And Range-based loop. Further note that we have used the reference of the pair 'pr' to avoid copying the values of the pair.
        cout<<pr.first<<" "<<pr.second<<endl;       
    }
}

int main()
{
    //1. Functions in Maps:
    map<int, string>  m;

    //For "Insertion Operation".
    m.insert({1,"abc"});
    m.insert({15,"prq"});
    m.insert({6,"ubvw"});
    m.insert({8,"ubsdw"});
    m.insert({10,"scbvw"});
    printMap(m);


     
    //2. "Find-Operation", finding value corresponding to a paticular 'Key'.
    // auto it = m.find(15);       //this function returns the iterator pointing to the address where the 'value' corresponding to the 'key' is stored.
    auto it = m.find(22);          //In case if the value corresponding to the given 'key' doesn't exists,then the function returns the iterator pointing memory address after the last-element of the map (i.e. m.end()).
                                   //Further note that the Time-Complexity of the find() function is O(log(n)).
    if(it == m.end())
    {
        cout<<"No Value Available"<<endl;
    }

    else
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }




    // 3. "Erase-Operation", this function erases the "Key-Value" pair.

        //3.1 Method-01 : Either we can pass the 'Key' as an argument to the function.
                        m.erase(15);
                        printMap(m);
        
        //3.2 Method-02 : Or we can pass the 'iterator' to the function whose value we want to delete.
                        auto it1 = m.find(10);
                        m.erase(it1);
                        printMap(m); 

        
        // Further note that if we are trying to erase something which don't exists,then in that case the will give "Segmentation-Error",
        // to avoid this error we use following method.
            auto it2 = m.find(30);
            if(it2 == m.end())
            {
                cout<<"No value Exists!!!"<<endl;
            }
            else
            {
                m.erase(it2);
                printMap(m);
            }


        //4. Clear-Operation : To clear the entire map.
        m.clear();
        printMap(m);

    return 0;
}
```

<h2 id="15">Program_05_3_MAPS_Question</h2>

```cpp
// Given 'n' strings, print unique strings in Lexiographical order with their frequency.
// Constraints : n <= 10^5
//               Sizeof(string) <= 100

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin>>n;


    //Inserting values to the map.
    cout<<"Taking Input"<<endl;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin>>s;
        m[s] = m[s] + 1;
    }

    //Printing the values in the lexiographical order.
    cout<<"Output"<<endl;
    for(auto &p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}
```

<h2 id="16">Program_06_Unordered_MAPS</h2>

```cpp
// NOTE:
//     Unordered MAPS uses all the same functions as that in MAPS.

// The only difference between the MAPS and the Unordered MAPS is:
// 1. Inbuilt Implementation    ( MAPS uses red-black tree whereas unordered-MAPS uses HASH-tables)
// 2. Time Complexity.
// 3. Valid-Keys Data-Types.    (unordered_maps only valid for primitive data types like int, long long, double, float, char, string etc.)
 

#include<bits/stdc++.h>
using namespace std;

void printMap(unordered_map<int, string> &m1)
{
    cout<<m1.size()<<endl;

    for(auto &pr : m1)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    unordered_map<int, string> m;   //note that in case of the unordered_maps we cannot use very complex data-types like vectors, pairs, it will show an error but in case of maps we can.
    m[2] = "abc";   //In case of the unordered-MAPS the time complexity of the insertion operation is O(1).
    m[1] = "cde";
    m[6] = "efg";
    m[15] = "uvw";
    m[22] = "xyz";
    m[12] = "pqr";

    printMap(m);

    //Unordered MAPS Functions.
    auto it = m.find(22);       //In case of the unordered_maps the time complexity of the find() function is O(1).

    if(it != m.end())
    {
        m.erase(it);            //In case of the unordered_maps the time complexity of the erase() function is O(1).
        printMap(m);
    }

    else
    {
        cout<<"No Value Exists!!!"<<endl;
    }

    return 0;
}
```

<h2 id="17">Program_07_Unordered_MAPS_Practice_Problem</h2>

```cpp
// Given N number of strings and Q no. of queries.
// In each query you are given a string print frequency of that string.

// Constraints:
//     N <= 10^6
//     |S| <= 100 (i.e. size of the string.)
//     Q <= 10^6

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    int size;   //represents the size of the map or the number of the string 'N'.
    cin>>size;

    //Inserting values to the map.
    for(int i = 0; i<size; i++)
    {
        string s;
        cin>>s;
        m[s] = m[s] + 1;
    }

    cout<<"Insertion Complete"<<endl;

    int q;      //no. of queries.
    cin>>q; 

    //the loop will iterate the queries number of times.
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }

    return 0;
}
```

<h2 id="18">Program_08_0_SETS</h2>

```cpp
// SETS are similar to MAPS excluding the "value", SETS only contains the "Keys" in a sorted ordered just like MAPS.
// SETS store only unique values not any duplicate values.

#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> &s1)
{
    cout<<"The size of the SET is : "<<s1.size()<<endl;
    //  Either we can use range based loop to print the value of the SETS
    for(auto value : s1)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    //  or we can print like this too.
    for(auto it = s1.begin(); it != s1.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    set<string> s;      //declaring a set of string, it can be any data-type or continer.


    //Function to insert value inside the SET.
    s.insert("abc");    //the time-complexity of the insert() function is O(log(n)).
    s.insert("xyz");
    s.insert("uvw");
    s.insert("pqr");


    //printing the SET.
    printSet(s);    //notice in the output, although we have inserted "xyz" before "uvw", but "xyz" is printed afterward "uvw" as according to their alphabetic order.


    //Function to find the a particular value in SET, function returns an 'iterator' pointing to the "value" to be found.
    auto it = s.find("abc");    //the time-complexity of the find() function is also O(log(n)).

    if(it != s.end())
    {
        cout<<(*it)<<endl;
    }


    //Function to erase a value of the SET>
    auto it1 = s.find("uvw");

    if(it1 != s.end())
    {
        s.erase(it1);
        printSet(s);
    }

    //Similary we can also erase an element of the SET like this:
    s.erase("pqr");
    printSet(s);




    return 0;
}
```

<h2 id="19">Program_08_1_SETS_Question</h2>

```cpp
// Given N number of strings, print unique strings in lexiographical order.
// N <= 10^5
// length of the string |s| <= 1000


//APPROACH USED : 
// Since it is only asked to print the elements in lexiographical order and not the frequency of the elements,
// hence we can simplify the question by using SET instead of using MAP.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string>  s;
    
    int n;
    cin>>n;

    for(int i = 0; i < n ; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }

    //printing the SET elements in lexiographical order.
    for(auto value : s)
    {
        cout<<value<<" ";
    }
    return 0;
}
```

<h2 id="20">Program_08_3_UNORDERED_SETS_Question</h2>

```cpp
// Given N number of string and Q number of queries.
// In each query you are given a string print yes if the string is present 
// else print no.

// N <= 10^5
// Size of the string |s| <= 100
// Q <= 10^6


#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;

    int n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);        
    }

    int q;
    cin>>q;

    for( int i = 0; i < q; i++)
    {
        string str;
        cin>>str;
        auto it = s.find(str);
        if(it != s.end())
        {
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
```

<h2 id="21">Program_08_3_UNORDERED_SETS</h2>

```cpp
//The difference beteen SET and Unordered-SET.
// 1. unordered-set stores value in a random in contrast to the SET which stores value in ordered manner.

// 2. the time-complexities of the functions-

//     FUNCTION            SET                  UNORDERED-SET
//     insert()         O(log(n))                   O(1)
//     find()           O(log(n))                   O(1)


// 3. Similar to Unordered-MAPS we cannot put complex containers (like vectors, pairs, sets maps etc) in Unordered-SET too,
    // we can only put basic data-types in both Unordered-MAPS and Unordered-SETS.

#include<bits/stdc++.h>
using namespace std;

void printUnorderedSet(unordered_set<string> &s1)
{
    cout<<"The size of the unordered-set is : "<<s1.size()<<endl;

    //Loop to print the value in the unordered-set.
    for(auto value  : s1)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}

int main()
{
    //declararion of an unordered-set.
    unordered_set<string> s;

    //Function to insert values inside an unordered-set.
    s.insert("abc");
    s.insert("xyz");
    s.insert("efg");
    s.insert("uvw");
    s.insert("pqr");
    s.insert("mno");

    printUnorderedSet(s);
    return 0;
}
```

<h2 id="22">Program_08_4_MULTI_SETS</h2>

```cpp
// 1. the Time-complexities of the functions-

//     FUNCTION            SET                  UNORDERED-SET           MULTI-SET
//     insert()         O(log(n))                   O(1)                O(log(n))
//     find()           O(log(n))                   O(1)                O(log(n))


// 2. In contrast to SETS, UNORDERED-SETS, MULTI-SETS can store duplicate values.

#include<bits/stdc++.h>
using namespace std;

void printMultiSet(multiset<string> &s1)
{
    cout<<"The size of the multi-set is : "<<s1.size()<<endl;

    //Loop to print the value in the multi-set.
    for(auto value  : s1)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}

int main()
{
    //declaring multi-set.
    multiset<string> s;

    //Inserting values in multi-set.
    s.insert("abc");        
    s.insert("xyz");        
    s.insert("abc");        
    s.insert("xyz");        
    s.insert("xyz");        
    s.insert("abc");    

    printMultiSet(s);           //Note that the multiset can store the duplicate value


    auto it = s.find("abc");
    if(it != s.end())
    {
        s.erase(it);
        printMultiSet(s);
    }   

    //But if we try to delete an element using the following sytax of the erase() function then all the copies of that element gets deleted. 
    s.erase("abc");
    printMultiSet(s);

    //Function to clear the values stored in the multiset.
    s.clear();                  //Similar as in case of other containers clear() function clears the values stored in the multiset.
    printMultiSet(s);

    return 0;
}
```

<h2 id="23">Program_11_0_Stacks_and_Queues</h2>

```cpp
//STACKS -> First In Last Out.
//      Important functions of the stacks:
//          push().
//          pop().
//          top().
//          empty().
//          size().


#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Declaring a stack of type 'int'.
    stack<int> s;

    //Pushing element into the stack -> void push(int x).
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<s.size()<<endl;   //tells us the size of the stack -> int size()

    while(!s.empty())      // the return type of the empty() function is bool -> bool empty().
    {
        cout<<s.top()<<endl;        //top() function return the value of the top element -> here return type of the topfunction will be 'int' as stack is declared of 'int' type
        s.pop();                    //pop() function removes the element at the top of the stack
    }

    return 0;
}
```

<h2 id="24">Program_11_1_Stacks_and_Queues</h2>

```cpp
//QUEUES -> First In First Out.
//      Important functions of the stacks:
//          push().
//          pop().
//          front().
//          empty().
//          size().

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Declaring a Queue of type 'string'.
    queue<string> q;

    q.push("abc");
    q.push("xyz");
    q.push("pqr");
    q.push("uvw");
    q.push("lmn");
    q.push("mno");

    cout<<q.size()<<endl;       //size function tells us about the size of the queue.

    while (!q.empty())          //empty() function check weather the queue is empty or not and returns true or false accordingly.
    {
        cout<<q.front()<<endl;      //front() funtion returns the value at the front of the queue.
        q.pop();                    //pop() function removes the element at the 'front' of the stack.
    }
    
    return 0;
}
```

<h2 id="25">Program_11_2_Stacks_and_Queues_Balanced_Brackets_Matching</h2>

```cpp
// "BALANCED PARENTHESIS MATCHING" USING STACKS
//  In this question we are given a string of 'parenthesis' and we need to find out weather it is balanced or not. 


//Note : See Logical Explanation of the problem's solution in LUV STL Video no.-12.
// See Hacker Rank for the Problem Statement.

#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols = {{'[',-1}, {'{', -2}, {'(',-3}, {')',3}, {'}',2}, {']',1}};
string isBalanced(string s)
{
    stack<char> st;

    //Loop to traverse entire given string
    for(char &bracket : s)
    {
        if(symbols[bracket] < 0)
        {
            st.push(bracket);
        }

        else{

            //Checks case:2 and part of case:3
            if(st.empty()){
                return "NO";
            }

            char top = st.top();
            st.pop();

            //Checks by Matching parenthesis
            if(symbols[top] + symbols[bracket] != 0)
            {
                return "NO";
            }
        }
    }


    //To check case:4
    if(st.empty())
    {
        return "YES";
    }

    else{
        return "NO";
    }
}

int main()
{
    int num;
    cin>>num;

    while(num--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }

    return 0;
}
```