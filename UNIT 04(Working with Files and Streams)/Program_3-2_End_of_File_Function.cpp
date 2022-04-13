//Write a program to read data from the file using the eof() function.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char c;
    ifstream fin("Program 1-2 Constructor Method (Reading from the file).txt");

    while(fin.eof()!=1)
    {
        fin.get(c);
        cout<<fin.eof();
    }
    return 0;
}