// EXAMPLE 01

#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
    Complex() {}
    Complex(int,int);

    void printData(){
        cout<<"The complex number is : ["<<a<<" + i("<<b<<")]"<<endl;
    }
};


Complex::Complex(int x,int y){
    a=x;
    b=y;
}

int main(){

    //Implicit call
    Complex obj1(4,-5);
    obj1.printData();

    //Explicit call[METHOD 01]
   // Complex obj2 = Complex(5,9); //NOTE THAT : in this the 'Complex' on the LHS is the class
                                   //            whereas the 'Complex on the RHS is the constructor.
    //Explicit call[METHOD 02]
    Complex obj2;
    obj2 = Complex(5,9);
    obj2.printData();

    return 0;
}


/* EXAMPLE 02

#include<iostream>
using namespace std;

class Point{
int x,y;
public:
    Point(int,int);
    void display();
};

Point::Point(int a,int b){
    x=a;
    y=b;
}

void Point::display(){
    cout<<"The point is :("<<x<<","<<y<<")"<<endl;
}

int main(){
    Point p1(5,7);
    p1.display();

    Point p2(6,11);
    p2.display();
    return 0;
}
*/


/* EXAMPLE 03

#include<iostream>
#include<math.h>

using namespace std;

class Point
{
int x,y;
public:
    Point(int,int);
    void display();
    friend void calculateDistance(Point,Point);
};

Point::Point(int a,int b)
{
    x=a;
    y=b;
}

void Point::display()
{
    cout<<"The point is :("<<x<<","<<y<<")"<<endl;
}


void calculateDistance(Point p1,Point p2)
{
    float u;
    u = ((p2.x - p1.x)*(p2.x - p1.x)+(p2.y - p1.y)*(p2.y - p1.y));

    cout<<"The distance between both the point is : "<<sqrt(u)<<endl;
}

int main()
{
    Point p1(5,6);
    p1.display();

    Point p2(7,8);
    p2.display();

    calculateDistance(p1,p2);

    return 0;
}
*/
