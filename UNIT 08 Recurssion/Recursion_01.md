<a href = "#01">Program_01_Print_1_to_n.</a><br>
<a href = "#02">Program_02_Print_n_to_1.</a><br>
<a href = "#03">Program_03_Sorting_an_Array_or_Vector.</a><br>
<a href = "#04">Program_04_Sorting_a_Stack.</a><br>
<a href = "#05">Program_05_Delete_Middle_Element_Of_a_Stack.</a><br>
<a href = "#06">Program_06_Reverse_a_Stack.</a><br>
<a href = "#07">Program_07_Print_Subsets_of_a_String.</a><br>
<a href = "#08">Program_08_Print_Only_Unique_Subsets_of_a_String.</a><br>
<a href = "#09">Program_09_Permutation_of_Spaces.</a><br>
<a href = "#10">Program_10_Permutation_with_Case_Change.</a><br>
<a href = "#11">Program_11_Letter_Case_Change_Permutation.</a><br>
<a href = "#12">Program_12_Generate_all_Balanced_Paranthesis.</a><br>
<a href = "#13">Program_13_Print_N_bit_BInary_Numbers.</a><br>
<a href = "#14">Program_14_Josephus_Problem.</a><br>

<h2 id = "01">Program_01_Print_1_to_n.</h2>

```cpp
#include<iostream>
using namespace std;

void print(int n)
{
    if(n==1)
    {
        cout<<n<<" "; 
        return ;
    }   


    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}

```

<h2 id = "02">Program_02_Print_n_to_1.</h2>

```cpp
#include<iostream>
using namespace std;

void printReverse(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }

    cout<<n<<" ";
    printReverse(n-1);
}

int main()
{
    int n;
    cin>>n;
    printReverse(n);
    return 0;
}

```


<h2 id = "03">Program_03_Sorting_an_Array_or_Vector.</h2>

```cpp
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v1)
{
    cout << "Size of the vector is : " << v1.size() << endl;

    for (int &value : v1)
    {
        cout << value << " ";
    }
    cout << endl;
}

// Again Inserting using the recursion;
void insert(vector<int> &v1, int temp)
{
    // Base Condition(Smallest valid input)
    if(v1.size() == 0 || v1[v1.size() - 1] <= temp)
    {
        v1.push_back(temp);
        return;
    }

    //Hypothesis step
    int lastValue = v1[v1.size() - 1];
    v1.pop_back();
    insert(v1,temp);

    //Induction Step
    v1.push_back(lastValue);

}

// Sorting the vector using the recursion
void sort(vector<int> &v1)
{
    // Base Condition(it means if there is only one element in the vector then it is sorted no need to sort it, just return the value)
    if (v1.size() == 1)
        return;

    // Hypothesis Step
    int temp = v1[v1.size() - 1];
    v1.pop_back();
    sort(v1);

    // Induction Step
    insert(v1, temp);
    return;    
}



int main() 
{
    vector<int> v;
    int size, element;

    cout << "Enter the size of the vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " element : ";
        cin >> element;
        v.push_back(element);
    }

    cout << "Unsorted Vector : ";
    printVector(v);

    cout<<"Sorted Vector : ";
    sort(v);
    printVector(v);

    return 0;
}
```

<h2 id = "04">Program_04_Sorting_a_Stack.</h2>

```cpp
#include<bits/stdc++.h>
using namespace std;

// using recursion
void printStack(stack<int> &s1)
{
    //Base Condition
    if(s1.size() == 0)
        return;

    //Hypothesis Step
    int topValue = s1.top();
    s1.pop();
    printStack(s1);

    //Induction Step
    cout<<" "<<topValue;
    s1.push(topValue);
}

//Sorting the stack using Recursion only

void insert(stack<int> &s1, int topValue)
{
    //Base Condition
    if(s1.size() == 0 || s1.top() <= topValue)
    {
        s1.push(topValue);
        return;
    }

    //Hypothesis Step
    int temp = s1.top();
    s1.pop();
    insert(s1,topValue);

    //Induction Step
    s1.push(temp);
}

void sort(stack<int> &s1)
{
    //Base Condition
    if(s1.size() == 1)
        return;

    //Hypothesis Step
    int topValue = s1.top();
    s1.pop();
    sort(s1);

    //Induction step
    insert(s1,topValue);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(0);

    cout<<"Unsorted Stack :";
    printStack(s);

    sort(s);
    cout<<"\n Sorted Stack :";
    printStack(s);
    
    return 0;
}

```

<h2 id = "05">Program_05_Delete_Middle_Element_Of_a_Stack.</h2>

```cpp
#include <bits/stdc++.h>
using namespace std;

// using recursion
void printStack(stack<int> &s1)
{
    // Base Condition
    if (s1.size() == 0)
        return;

    // Hypothesis Step
    int topValue = s1.top();
    s1.pop();
    printStack(s1);

    // Induction Step
    cout << " " << topValue;
    s1.push(topValue);
}

void deleteMiddleElement(stack<int> &s1, int pos)
{
    // Base Condition
    if (s1.size() == pos)
    {
        s1.pop();
        return;
    }

    // Hypothesis Step
    int topValue = s1.top();
    s1.pop();
    deleteMiddleElement(s1, pos);

    // Induction Step
    s1.push(topValue);
}

int main()
{
    stack<int> s;
    int size, value;
    cout << "Enter the size of the stack : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " element : ";
        cin >> value;
        s.push(value);
    }

    printStack(s);

    if (s.size() == 0)
    {
        exit;
    }

    int pos = ((s.size() / 2) + 1);     //start counting from the stack bottom.
    deleteMiddleElement(s, pos);

    cout<<endl;
    printStack(s);

    return 0;
}

```

<h2 id = "06">Program_06_Reverse_a_Stack.</h2>

```cpp
#include<bits/stdc++.h>
using namespace std;

void printStack(stack<int> &s1)
{
    //Base Conddition
    if(s1.size() == 0)
    {
        return;
    }

    //Hypothesis Step
    int temp = s1.top();
    s1.pop();
    printStack(s1);

    //Induction Step
    cout<<" "<<temp;
    s1.push(temp);

}

void insert(stack<int> &s1, int temp1)
{
    //Base Condition
    if(s1.size() == 0)
    {
        s1.push(temp1);
        return;
    }

    //Hypothessis Step
    int temp2 = s1.top();
    s1.pop();
    insert(s1,temp1);

    //Induction Step
    s1.push(temp2);  
}

void reverseStack(stack<int> &s1)
{
    //Base Condition
    if(s1.size() == 0)
        return;
    //Hypothesis Condition
    int temp1 = s1.top();
    s1.pop();
    reverseStack(s1);

    //Induction Step
    insert(s1,temp1);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    printStack(s);

    reverseStack(s);
    cout<<endl;
    printStack(s);
    
    return 0;
}

```


<h2 id = "07">Program_07_Print_Subsets_of_a_String.</h2>

```cpp
#include <bits/stdc++.h>
using namespace std;

void solve(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout<<op<<" ";
        return;
    }

    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);

    ip.erase(ip.begin()+0);

    solve(ip,op1);
    solve(ip,op2);

    return;
}

int main()
{
    string ip;
    cin >> ip;

    string op = "";

    solve(ip,op);

    return 0;
}

```

<h2 id = "08">Program_08_Print_Only_Unique_Subsets_of_a_String.</h2>

```cpp
//Print Subsets of String in Lexiographical-Order duplicate values are not allowed.

#include <bits/stdc++.h>
using namespace std;

set<string> s;

set<string> solve(string ip, string op)
{
    if(ip.length() == 0)
    {
        s.insert(op);
        return s;
    }

    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);

    ip.erase(ip.begin()+0);

    solve(ip,op1);
    solve(ip,op2);

    return s;
}

int main()
{
    string ip;
    cin >> ip;

    string op = "";

    set<string> result = solve(ip,op);

    for(auto &value: result)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    return 0;
}


```
<h2 id = "09">Program_09_Permutation_of_Spaces.</h2>

```cpp
//NOTE: INstead of providing space between the characters, I have used the underscore(_) sign.

#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout<<op<<" ";
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(ip[0]);    
    op2.push_back('_');
    op2.push_back(ip[0]);

    ip.erase(ip.begin()+0);

    solve(ip,op1);
    solve(ip,op2);

    return;
}

int main()
{
    string ip;
    cin >> ip;

    string op;
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    solve(ip,op);
    return 0;
}

```
<h2 id = "10">Program_10_Permutation_with_Case_Change.</h2>


```cpp
#include<iostream>
using namespace std;

void solve(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout<<op<<" ";
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));

    ip.erase(ip.begin()+0);

    solve(ip,op1);
    solve(ip,op2);

    return;
}

int main()
{
    string ip;
    cin >> ip;

    string op = "";

    solve(ip,op);
    return 0;
}

```
<h2 id = "11">Program_11_Letter_Case_Change_Permutation.</h2>

```cpp
//LeetCode Problem Pattern.

#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op, vector<string> &v)
{
    if(ip.length() == 0)
    {
        v.push_back(op);
        return;
    }

    if(isalpha(ip[0]))
    {
        string op1 = op;
        string op2 = op;

        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);

        solve(ip,op1,v);
        solve(ip,op2,v);

        return;
    }

    else
    {
        string op1 = op;

        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);

        solve(ip,op1,v);

        return;
    }
}

vector<string> letterCasePermutation(string s)
{
    string ip = s;   
    string op = "";   

    vector<string> v;

    solve(ip,op,v);
    
    return v;
}



    

int main()
{
    string s;
    cin >> s;

    vector<string> v = letterCasePermutation(s);

    for(auto &value:v)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    return 0;
}

```
<h2 id = "12">Program_12_Generate_all_Balanced_Paranthesis.</h2>

```cpp

#include<bits/stdc++.h>
using namespace std;

void solve(int open, int close, string op, vector<string> &v)
{
    if(open == 0 && close == 0)
    {
        v.push_back(op);
        return;
    }

    if(open != 0)
    {
        string op1 = op;
        op1.push_back('(');
        solve(open-1,close,op1,v);        
    }

    if(close>open)
    {
        string op2 = op;
        op2.push_back(')');
        solve(open,close-1,op2,v);        
    }

    return;
}

vector<string> generateAllBalacedParenthesis(int n)
{
    vector<string>v ;
    int open = n;
    int close = n;
    string op = "";

    solve(open,close,op,v);

    return v;
}

int main()
{
    int n;
    cin >> n;

    vector<string> v = generateAllBalacedParenthesis(n);

    for(auto &value:v)
    {
        cout<<value<<" ";
    }

    cout<<endl;

    return 0;
}

```
<h2 id = "13">Program_13_Print_N_bit_BInary_Numbers.</h2>


```cpp
#include<bits/stdc++.h>
using namespace std;

void solve(int one, int zero, int n,string op, vector<string> &v)
{
    if(n == 0)
    {
        v.push_back(op);
        return;
    }

    string op1 = op;
    op1.push_back('1');
    solve(one+1,zero,n-1,op1,v);

    if(one > zero)
    {
        string op2 = op;
        op2.push_back('0');
        solve(one,zero+1,n-1,op2,v);
    }

    return;
}

vector<string> printBinaryNumber(int n)
{
    int one = 0;
    int zero = 0;
    string op = "";
    vector<string> v;

    solve(one,zero,n,op,v);
    return v;
}

int main()
{
    int n;
    cin >> n;

    vector<string> v = printBinaryNumber(n);

    for(auto &value:v)
    {
        cout<<value<<" ";
    }

    cout<<endl;
    return 0;
}
```