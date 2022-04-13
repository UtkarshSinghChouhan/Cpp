#include <iostream>
#include <fstream>

using namespace std;

int num;


class StudentDetails
{
public:
    int byteSize;
    string studentName;
    int studentId;
    float studentcgpa;

    //Member function to Write contents inside the file.
    int outputData(string name, int id, float cgpa)
    {
        ofstream fout;
        fout.open("Student Details.txt", ios::app);
        fout << "Name of the student : " << name << endl;
        fout << "Student id : " << id << endl;
        fout << "Student cgpa : " << cgpa << endl;
        fout << "------------------------------------------------" << endl;
        cout << "*****Details of " << name << " is successfully added to the file*****" << endl;
        int a = fout.tellp();

        fout.close();
        return a;
    }

    StudentDetails()
    {
        cin.ignore();
        cout << "\nEnter the name of the student : " << endl;
        getline(cin, studentName);

        cout << "Enter the id of the student : " << endl;
        cin >> studentId;

        cout << "Enter the cgpa of the student : " << endl;
        cin >> studentcgpa;

        byteSize = outputData(studentName, studentId, studentcgpa);
    }
};

//Not a Member function, to display the Student details on the command line.
void inputData(StudentDetails *student)
{
    int choice;
    cout << "\nEnter the student id whose details U want to see : " << endl;
    cin >> choice;

    string st;
    ifstream fin;
    fin.open("Student Details.txt");

    if (choice > 1)
    {
        fin.seekg(student[choice - 2].byteSize, ios::beg);
    }

    for (int i = 0; i < 4; i++)
    {
        getline(fin, st);
        cout << st << endl;
    }
    fin.close();
}

int main()
{
    cout << "Enter the total number of students whose details U want to add in file : " << endl;
    cin >> num;

    ofstream fout;
    fout.open("Student Details.txt", ios::out);
    fout << "******************STUDENT DETAILS******************" << endl;
    fout.close();

    //Creating object array.
    StudentDetails student[num];

    //Mechanism to display the student details of your choice.
    int choose;
    cout << "\n Select an appropritate option : "
         << "\n 1. To display student data : "
         << "\n 2. EXIT" << endl;
    cin >> choose;
    switch (choose)
    {
    case 1:
        inputData(student);
        break;

    case 2:
       break;

    default:
        cout<<"******INVALID RESPONSE******"<<endl;
        break;
    }

    return 0;
}