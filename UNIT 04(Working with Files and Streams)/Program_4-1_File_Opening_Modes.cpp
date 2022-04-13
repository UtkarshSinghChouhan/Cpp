//Write a program to write, append and read data from the file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st;

    //Opening the file to write
    ofstream fout;
    fout.open("Program 4-1 File Opening Modes.txt",ios::out);   //we need not to specifically provide the opening mode of the class, as the default opening mode of the output stream class object is 'write'.
    cout<<"Enter the text U want to write in the file : "<<endl; 
    getline(cin,st);
    fout<<st<<endl;
    cout<<"*****Data successfully added to the file*****"<<endl;
    fout.close();

    //Opening the file to append the data
    fout.open("Program 4-1 File Opening Modes.txt",ios::app);
    cout<<"\nEnter the data U want to append in the file : "<<endl;
    getline(cin,st);
    fout<<st<<endl;
    cout<<"*****Data successfully appended in the file*****"<<endl;
    fout.close();

    //opening the file to read the file
    ifstream fin;
    fin.open("Program 4-1 File Opening Modes.txt",ios::in);
    cout<<"\n*****Reading the contents of the file*****"<<endl;
    while(fin.eof()==0)
    {
        getline(fin,st);
        cout<<st<<endl;
    }
    fin.close();

    return 0;
}