// NOTE:
//     All objects hold two file pointers associated with file,these file pointers provide integer value which indicate the exact position of the file pointer 
//     in the number of bytes in the file.The read and write operations are carried out at the locations pointed out by these file pointers.

//     These pointers are:
//     1. get pointer(input pointer) helps in reading data from the file from the given location.
//     2. put pointer(output pointer) helps in writing data in the file from the given location.

//     When a file is opened for reading or writing operations, the respective file pointer (input or output) is by default set at the begining of the file.
//     To explicitly set the file pointer at the specified position, the file stream classes provides four functions for setting the position of the cursor.
//         i)    seekg() - member of ifstream class - shifts the input (read) pointer to a given location.
//         ii)   tellg() - member of ifstream class - provides the current position of the input pointer.
//         iii)  seekp() - member of ofstream class - shifts the output (write) pointer to a given location.
//         iv)   tellp() - member of ofstream class - provides the current position of the output pointer. 
    

//Write a program to read the contents of the file.Also display the position of the get(input) pointer.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch[80];
    
    //Opening the file for write in the file
    ofstream fout;
    fout.open("Program 5-1 File Pointer and File Pointer handling Function(Use of tellg() function).txt",ios::out);
    cout<<"Enter the text in the file through the write mode : "<<endl;
    cin.getline(ch,80);
    fout<<ch;
    cout<<"*****Data successfully added to the file*****"<<endl;
    fout.close();

    //Opening the file to read the data and tell the position of the get pointer
    int pointer_position;
    ifstream fin;
    cout<<"\n*****Reading the contents of the file*****"<<endl;
    fin.open("Program 5-1 File Pointer and File Pointer handling Function(Use of tellg() function).txt",ios::in);
    while(fin.eof()==0)
    {
        fin>>ch;   //Here we have used the 'fin' to extract only one word of the file per iteration of the loop
        cout<<ch;
        pointer_position = fin.tellg();
        cout<<"("<<pointer_position<<")";

    }
    fin.close();    

    return 0;
}