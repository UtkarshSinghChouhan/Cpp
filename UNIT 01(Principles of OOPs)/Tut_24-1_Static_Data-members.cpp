/* Points To Remember :-

   1. Static data-members are associated with class and not with object.
      It means the memory of static data-member is  allocated with class and not with an object.

   2. Only one copy of static data-member is created for the whole class for any number of
      objects. All the objects have common static-member variable.

   3. If a local variable is declared static,then it preserves the last value of the variable
      e.g. It means when one of the object changes the value of the data-member,the effect is visible to
           all the objects of the class.

   4. The static data-members must be declared inside the class and defined outside the class as shown below,
      this is the correct syntax.

   5. Static variables can be accessed by the object in main if they are public, just like a normal variable.
*/

//Write a program to show the difference between static and non-static data-member.

#include<iostream>
using namespace std;

class Number
{
    int a;
public:
    static int b;         //Static- variable is a local variable of a class and must be declared inside a class.
    void setNormalInt()
    {
        a = 0;
    }

    void compare()
    {
        a+++
        b++;
        cout<<"\n\nThe value of normal int a is : "<<a<<" and its address is "<<&a<<endl;
        cout<<"The value of static int b is : "<<b<<" and its address is "<<&b<<endl;
    }
};

int Number :: b = 0;    //The definition of a static variable must always be outside the class like this

int main(){

    Number A, B, C;

    A.setNormalInt();
    A.compare();

    B.setNormalInt();
    B.compare();

    C.setNormalInt();
    C.compare();

    return 0;
}


/*
NOTE: Understanding the above program
    1. In the above program upon execution we can see that the address of the normal variable keeps on
       changing for different object whereas the address of the static variable remains the same for
       all the objects.

    2. Further note that in case of normal variable since initially the value is 0, hence upon increment
       using the object A the value becomes 1. But this incremented value doesn't remain when the variable is
       accessed using the other object B. And similarly the changes made by B doesn't remain for object C.
             The verifies the fact that every object has its own copy of normal data-member.

    3. In case of static variable initially the value is 0, upon increment using the object A the value become 1.
       And when this variable is again accessed by the object B upon increment it becomes 2 and further when it
       is accessed using the object C it gets incremented and becomes 3.
            This verifies that fact that changes made by one object in static variable is visible to all the
            objects of the class, since static variable has only one memory address.
*/
