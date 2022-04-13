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