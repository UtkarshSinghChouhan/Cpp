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