<a href = "#01">Program_1_Summation_of_N_Natural_Numbers.</a><br>
<a href = "#02">Program_2_Factorial_of_a_Numbers.</a><br>
<a href = "#03">Program_3_Reverse_an_Array_using_Recursion.</a><br>
<a href = "#04">Program_4_Check_if_a_String_is_Palindrom_or_not_using_Recursion.</a><br>


<h2 id = "01">Program_1_Summation_of_N_Natural_Numbers.</h2>

```cpp
#include<iostream>
using namespace std;

int summation(int n)
{
    //Base Condition
    if(n == 1)
        return n;


    int sum = 0;
    //Hypothesis and Induction step. 
    sum = summation(n-1) + n;
    
    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout<<summation(n);
    return 0;
}
```

<h2 id = "02">Program_2_Factorial_of_a_Numbers.</h2>

```cpp
#include<iostream>
using namespace std;

int factorial(int n)      
{
    //Base Condition
    if(n == 0)
        return 1;
    
    int value = 1;
    //Hypothesis step and Induction Step.
    value = factorial(n-1)*n; 
    return value;
}

int main()
{
    int n;
     cin >> n;

     cout<<factorial(n);
    return 0;
}
```
<h2 id = "03">Program_3_Reverse_an_Array_using_Recursion.</h2>

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> &v) 
{
    //Base Condition
    if(v.size() == 1)
    {        
        return v;
    }

    int element = v[0];    
    v.erase(v.begin() + 0);

    //Hypothesis Step(call to smaller input).
    reverse(v); 

    //Induction Step.
    v.push_back(element);

    return v;
}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int> p = reverse(v);

    for(int value:p)
    {
        cout<<value<<" ";
    }
    return 0;
}
```

```cpp
//Striver's Method:

// arr and arr[] represents the address of the element at index zero.

#include<bits/stdc++.h>
using namespace std;

void funct(int l, int arr[], int size)
{
    if(l == size/2)
        return;

    swap(arr[l], arr[size-(l+1)]);

    funct(l+1, arr, size);
    return;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for(int i = 0; i<size; i++)
    {
        cin >> arr[i];
    }

    funct(0, arr, size);

    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
```
<h2 id = "04">Program_4_Check_if_a_String_is_Palindrom_or_not_using_Recursion.</h2>

```cpp
#include<bits/stdc++.h>
using namespace std;

bool funct(int l, string &s)
{
    if(l == s.size()/2)
    {
        cout<<"cat"<<endl;
        return true;
    }

    if(s[l] != s[s.size() - (l+1)])
    {
        cout<<"monkey"<<endl;
        return false;
    }
    
    cout<<"man"<<endl;
    return funct(l+1, s);
    
}

int main()
{
    string s1 = "110011";   //Palindrom
    string s2 = "MADAM";    //Palindrom
    string s3 = "madsm";    //not-Palindrom

    cout<<funct(0, s1)<<endl;
    cout<<funct(0, s2)<<endl;
    cout<<funct(0, s3)<<endl;
    return 0;
}
```