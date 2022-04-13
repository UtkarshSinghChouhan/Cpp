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