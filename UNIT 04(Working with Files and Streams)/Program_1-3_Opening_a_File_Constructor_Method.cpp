// Write a program to read and write the text from the file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st;
    int age;

    //Writing Data to the file
    ofstream fout("Program 1-3 Constructor Method (Adding  and Reeading data from the file).txt");       //Opening the file for writing operation
    cout<<"Enter your name"<<endl;
    cin>>st;

    cout<<"Enter your age"<<endl;
    cin>>age;



    fout<<st<<endl;     //Displaying the data entered by the user inside the file
    fout<<age<<endl;    //Displaying the data entered by the user inside the file

    fout.close();       //Closing the file after performing writing operation.


    //Reading data from the file
    ifstream fin("Program 1-3 Constructor Method (Adding  and Reeading data from the file).txt");      //Opening the file for reading operation
    fin>>st;           //Taking input from the file
    fin>>age;          //Taking input from the file

    cout<<"Name : "<<st<<endl;       //Displaying the Data on command line extracted from the file
    cout<<"Age : "<<age<<endl;       //Displaying the Data on command line extracted from the file

    fin.close();          //Closing the file after performing reading operation.

    return 0;
}

// NOTE:
//    1. Here the use of the function close() is essential to change the mode of the file(i.e., read or write).
//       In case the file is not closed and again an attempt is made to open it in another mode, no compiler error
//       is generated. But the result is not satisfactory.

//    2. The close() function is a member function of the fstream_base class.   