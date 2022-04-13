//Write a program to display the elements of integer, float and char array using template-type variable with member-functions.

#include<iostream>
using namespace std;

template <class T1, class T2, class T3> //Here I have created three generic or template data-types or template variables T1, T2 and T3
                                        // and declared that the following class will use these template-type to define its variables.
class Number
{
    T1 x;
    T2 y;
    T3 z;
public:
    void display(T1 a, T2 b, T3 c)   //Here the display() member-fucntion has three arguments of template-type.
    {
        x = a;
        y = b;
        z = c;
        cout<<"x = "<<x<<" and y = "<<y<<" and z = "<<z<<endl;
    }
};


int main()
{
   int arr1[] = {1,2,3,4,5,6,7};
   float arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
   char arr3[] = {'A','B','C','D','E','F','G'};

   Number <int, float, char> obj1;   //Here we are passing data-types int, float and char as parameters for the template variables T1, T2 and T3. 

   for(int i =0; i<7; i++)
   {
       obj1.display(arr1[i], arr2[i], arr3[i]);
   }

    return 0;
}