// EXAMPLE 01 : BASIC

// #include<iostream>
// using namespace std;

// class Employee
// {
// public:
//     void display()
//     {
//        cout<<"******Employee Details*******"<<endl;
//     }
//     void display(string name)
//     {
//         cout<<"The Employee name is : "<<name<<endl;
//     }
//     void display(int x)
//     {
//         cout<<"The Employee Id is : "<<x<<endl;
//     }
//     void display(double salary)
//     {
//         cout<<"The Employee salary is "<<salary<<endl;
//     }
// };


// int main(){
//     Employee e1;
//     e1.display();
//     e1.display("Utkarsh Singh Chouhan");
//     e1.display(1);
//     e1.display(5400.223242);

//     return 0;
// }


// EXAMPLE 02 : CALCULATING THE AREA

#include<iostream>
using namespace std;

class Area
{
public:
    int length,breadth;
    double base,height;
    int radius;
    Area()
    {
        cout<<"Enter the length and breadth of rectangle : "<<endl;
        cin>>length>>breadth;

        cout<<"Enter the base and height of triangle: "<<endl;
        cin>>base>>height;

        cout<<"Enter the radius of the circle : "<<endl;
        cin>>radius;
    }

    void calculateArea(int L,int B)
    {
        cout<<"The area of the rectangle is : "<<L*B<<endl;
    }

    void calculateArea(double b,double h)
    {
        cout<<"The area of the triangle is : "<<(b*h)/2<<endl;
    }

    void calculateArea(int r)
    {
        cout<<"The area of the circle is : "<<3.14*r*r<<endl;
    }


};

int main(){
    Area a1;
    a1.calculateArea(a1.length,a1.breadth);
    a1.calculateArea(a1.base,a1.height);
    a1.calculateArea(a1.radius);
    return 0;
}


/* NOTE:
     1. 'int' and 'float' data-type argument on overloaded functions show ambiguity,
           e.g.,       display(int) and display(float) show ambiguity
                       even though their argument data types are different.
     2. Use 'double' in place of 'float' data-type to resolve this ambiguity.
*/
