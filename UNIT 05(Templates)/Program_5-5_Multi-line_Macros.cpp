//Simple example of Object-like Multi-line Macros.

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

//Simple Program to show Multi-line Function-like Macro.

// #include<iostream>
// using namespace std;
// #define TEXT ("The area of the rectangle is : ")
// #define AREA(l, b) \
//                      l*b

// int main()
// {
//     int a = 10, b = 20;
//     cout<<TEXT<<AREA(a, b)<<endl;
//     return 0;
// }