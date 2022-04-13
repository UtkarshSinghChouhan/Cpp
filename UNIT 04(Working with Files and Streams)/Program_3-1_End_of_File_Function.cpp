// NOTE:
//     The eof() stands for the end of the file.
//     eof() is a member function of the istream class.
//     The eof() function returns a non-zero value(i.e, 1) when the end of the file is detected, otherwise zero. 


//Write a program to add data to a file and read the added data using the concept of eof() function.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char c[200];
    
    // string st;
    // char file_name[50];
    // cout<<"Enter the name of the you want to read : "<<endl;
    // cin>>file_name;

    ifstream fin;
    fin.open("Program 1-2 Constructor Method (Reading from the file).txt");

    while(fin.eof()!=1)
    {
        cout<<"Inside the loop"<<endl;
        fin.get(c,200);
        // getline(fin,c);
        cout<<c;
    }
    
    fin.close();

    return 0;
}