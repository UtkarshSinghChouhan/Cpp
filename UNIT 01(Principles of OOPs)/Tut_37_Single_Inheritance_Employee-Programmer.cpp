/*SYNTAX OF SINGLE INHERITANCE:
   class {{derived-class name}}:{{visibility mode}} {{base-class name}}
   {
      class members/methods/constructors/destructors...
   }


  PROPERTIES:
   1. By default the visibility mode is private.
   2. Whenever we make an object of the derived-class, automatically the default constructor of the base-class is invoked(called).
   3. Private members of the base-class are never inherited
   4. Public visibility mode: Public members of the base-class becomes Public members of the derived-class.
   5. Private visibility mode: Public members of the base-class becomes private members of the derived-class.
*/


//EXAMPLE 01


#include<iostream>
using namespace std;

class Employee
{
public:
    int empId = 2;
    float salary = 54.34;
};

class Programmer:Employee //Here the visibility mode is not specified, it means it is private.
{
public:
    int languageCode;

    Programmer(){};

    Programmer(int x,float y) //Since all the public members of the base-class are
    {                         //inherited privately, hence we need to use Constructor to
        empId=x;              //initialize them.
        salary=y;
    }

    void display()
    {
        cout<<"Employee/Programmer Id is : "<<empId<<endl;
        cout<<"Employee/Programmer salary is : "<<salary<<endl;
    }
};

int main(){
    Employee e1;
    cout<<"The employee Id is : "<<e1.empId<<endl;
    cout<<"The employee salary is : "<<e1.salary<<endl;

    Programmer p1;
    p1 = Programmer(3,344.23);
    p1.display();
    return 0;
}



/*EXAMPLE 02

#include<iostream>
using namespace std;

class Employee
{
public:
    int empId;
    float salary;

    //Employee(){}

    /*Employee(int x,float y) //here I am initializing the public data-members with parameterized constructor
    {
        empId = x;
        salary = y;
    }
};

class Programmer: Employee
{
public:

    Programmer(int a,float b)
    {
        empId = a;
        salary = b;
    }
    void display()
    {
        cout<<"Programmer Id is : "<<empId<<endl;
        cout<<"Programmer salary is : "<<salary<<endl;
    }
};

int main()
{
   Employee e1(2,344.2);  //Even we are calling parameterized constructor of the base-class,
                           //we still need default constructor on the base-class,
                           //Because of the derived-class
    cout<<"The employee Id is : "<<e1.empId<<endl;
    cout<<"The employee Salary is : "<<e1.salary<<endl;

    //Programmer p1(4,35.3);
    //p1.display();

    return 0;
}
*/
