// Write a real-life program to show the implementation of virtual-functions, using the Hierarical inheritance.

#include <iostream>
using namespace std;

class Parent
{
private:
    int num;

protected:
    string fatherName;
    string name;
    int age;

public:
    Parent(string x, string y, int z, int w)
    {
        fatherName = x;
        name = y;
        age = z;
        num = w;
    }

    virtual void display()
    {
        cout << "the father's name is : " << fatherName << endl;
        cout << "Total number of  childeren of the father are : " << num << endl;
    }
};

class Child1 : public Parent
{
    int height;

public:
    Child1(string a, string b, int c, int d, int e) : Parent(a, b, c, d)
    {
        height = e;
    }

    void display()
    {
        cout << "The name of the child1 is : " << name
             << "\nThe age of this child is : " << age
             << "\nThe height of this chils is : " << height << endl;
    }
};

class Child2 : public Parent
{
    int height;

public:
    Child2(string a, string b, int c, int d, int e) : Parent(a, b, c, d)
    {
        height = e;
    }

    void display()
    {
        cout << "The name of the child2 is : " << name
             << "\nThe age of this child is : " << age
             << "\nThe height of this chils is : " << height << endl;
    }
};

int main()
{
    Parent *base_pointer;

    base_pointer = new Parent("Sunder pal chouhan", "NILL", 0, 2);
    base_pointer->display();

    base_pointer = new Child1("Sunder pal chouhan", "Utkarsh", 21, 2, 153);
    base_pointer->display();

    base_pointer = new Child2("Sunder pal chouhan", "Mayank", 18, 2, 173);
    base_pointer->display();

    return 0;
}