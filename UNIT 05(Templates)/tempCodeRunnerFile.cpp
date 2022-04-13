#include<iostream>
using namespace std;
#define LIMIT 7
#define ELEMENTS 'U',\
                 't',\
                 'k',\
                 'a',\
                 'r',\
                 's',\
                 'h'


int main()
{
    char arr [] = {ELEMENTS};

    cout<<"Elements of the array are : "<<endl;
    for(int i = 0; i<LIMIT; i++)
    {
        cout<<arr[i];
    }
    return 0;
}