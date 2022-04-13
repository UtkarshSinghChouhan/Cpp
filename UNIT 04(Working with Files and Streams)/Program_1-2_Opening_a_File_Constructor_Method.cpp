// Write a program to open a file and Read data from the file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st,st2;
    ifstream fin("Program 1-2 Constructor method (Reading from the file).txt");

    fin>>st;            //Extracting data(single word) from the file or Taking input from the file
    cout<<st<<endl;    //Displaying the data extracted from the file on the command line

    getline(fin,st2);   //Extracting the entire line from the file or ((Taking input of the entire line from the file))
    cout<<st2<<endl;   //Display the data extracted from the file on the command line
    
    return 0;
}


// NOTE:
//   1. In this case we need not to close the file associated with the object explicitly, it will close
//      automatically when the stream goes out of the scope.

