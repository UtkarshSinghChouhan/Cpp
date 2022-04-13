// NOTE:
//     1. The open() function and close() function are the member of the stream classes whose objects we are creating.

//     2. The open() function has two arguments as show in syntax below;
//         Syntax-
//         object.open("file_name",mode);

//         Here, object is a stream object.
//               The first parameter is the file name and the second parameter is the mode in which the file is to be opened.
    
//     3. In the absence of the mode parameter, default parameter is considered.
//        The default mode for ifstream is (ios::in) reading or input only and the default mode for ofstream is (ios::out) writing or output only.

//Write a program to add contents to a file and read that content from the file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("Program 2 Open() function (Adding and Reading Data to the file).txt");
    fout<<"This is the data added to the file by opening the file using the open() function."<<endl;
    cout<<"*****Data successfully added to the file*****"<<endl;
    fout.close();

    ifstream fin;
    string st;
    cout<<"\n*****Reading data from the file*****"<<endl;
    fin.open("Program 2 Open() function (Adding and Reading Data to the file).txt");
    getline(fin,st);
    cout<<st;

    // while(fin.eof()==0)  //Using this mechanism we cannot print the space between the words
    // {
    //    fin>>st;
    //    cout<<st<<endl;
    // }

    fin.close();
    
    return 0;
}
