/*
NOTES: If B is inherited from A and C is inherited from B. [ A --> B --> C ]
        1. A is the Base-class of B and B is the Base-class of C.
        2. A-->B-->c is called the Inheritance Path.
*/


#include<iostream>
using namespace std;

class Student
{
protected:
    int rollNo;
public:
    void setRollNo(int);
    void getRollNo();
};

void Student::setRollNo(int x)
{
    rollNo = x;
}

void Student::getRollNo()
{
    cout<<"The student roll no is : "<<rollNo<<endl;
}

class Exam:public Student
{
protected:
    float mathMarks;
    float physicsMarks;
    float chemistryMarks;
public:
    void setMarks(float,float,float);
    void getMarks();
};

void Exam::setMarks(float a,float b,float c)
{
    mathMarks = a;
    physicsMarks = b;
    chemistryMarks = c;
}

void Exam::getMarks()
{
    cout<<"The marks of the students in mathematics is : "<<mathMarks<<endl;
    cout<<"The marks of the students in physics is : "<<physicsMarks<<endl;
    cout<<"The marks of the students in chemistry is : "<<chemistryMarks<<endl;
}

class Result:public Exam
{
private:
    float percentage ;
public:
    void displayResult()
    {
        getRollNo();
        getMarks();
        percentage = (mathMarks + physicsMarks + chemistryMarks)/3;
        cout<<"The student result is : "<<percentage<<"%"<<endl;
    }
};



int main()
{
    Result r1;
    r1.setRollNo(23);
    r1.setMarks(93.824,87.55,95.00);
    r1.displayResult();

    return 0;
}

