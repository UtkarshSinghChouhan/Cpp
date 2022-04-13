//Diamond Problem (Student-Example using the Virtual base-Class Concept)

#include<iostream>
using namespace std;


class Student
{
protected:
    int rollNo;
public:
    void setRollNo(int a)
    {
        rollNo = a;
    }

    void displayRollNo()
    {
        cout<<"The roll number of the student is : "<<rollNo<<endl;
    }
};

class Test: public virtual Student
{
protected:
    float maths,physics;
public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void displayMarks()
    {
        cout<<"Marks of the student in different subjects are :\n"
            <<"Maths = "<<maths<<"\n"
            <<"Physics ="<<physics<<endl;
    }
};

class Sports: public virtual Student
{
protected:
    float physicalEducation;
public:
    void setPEmarks(float m3)
    {
        physicalEducation = m3;
    }

    void displayPEmarks()
    {
        cout<<"Physical Education = "<<physicalEducation<<endl;
    }
};

class Result:public Test, public Sports
{
protected:
    float total;
public:
    void display()
    {
     displayRollNo();
     displayMarks();
     displayPEmarks();
     total = maths + physics + physicalEducation;
     cout<<"The total marks of the student is : "<<total<<endl;
    }
};


int main(){
    Result r1;
    r1.setRollNo(23);
    r1.setMarks(45.45,5.45);
    r1.setPEmarks(556.5);
    r1.display();
    return 0;
}
