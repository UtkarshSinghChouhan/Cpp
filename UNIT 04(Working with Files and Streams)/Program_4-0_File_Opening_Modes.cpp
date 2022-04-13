// SOME IMPORTANT FILE OPENING MODES:

// ios::in - This is the default mode of the open() function of the ifstream class object,
//           used to open the file in the reading mode.

// ios::out - This is the default mode of the open() function of the ofstream class object,
//            used to open the file in the writing mode.
//            In case the specified file already exists then its contents will be deleted.

// ios::app - This mode is used to append data to the end of the file.
//            It means that, when a file is opened using the ios::app mode then the character
//            pointer is set to the end of the file and let the user to add data at the end of the file.

//            If the given file does not exists, then a new file is created.

// ios::trunc - This mode is same as ios::out. 
//              When ios::trunc is used then the contents of the specified file will be deleted(truncated).
//              The file is treated as new file.
 
// Write a program to append data to the file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("Program 1-1 Constructor Method (Adding data to the file 2).txt",ios::app);
    fout<<"This is new data added through the append opening mode."<<endl;
    cout<<"Data added successfully"<<endl;
    fout.close();

    return 0;
}