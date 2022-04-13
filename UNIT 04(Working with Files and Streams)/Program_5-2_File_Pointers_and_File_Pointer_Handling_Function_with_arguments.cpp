// NOTE:
//     The seekg() and seekp() functions can have two arguments-
//         seekg( bytes, pre_position)
//         seekp( bytes, pre_position)
//     where, the first argument "bytes" specifies the number of bytes the file pointer is to be shifted from the argument "pre_position".

//            The argument "bytes" can be positive and negative. The positive number moves the pointer in the forward direction and the negative
//            number moves the pointer in the backward direction.

//            The argument "pre_position" can have can have following value:
//             -> ios::beg (begnning of the file)
//             -> ios::cur (current position of the file)
//             -> ios::end (end of the file)
        

//Write a program to write text in the file. Read the text from the file in the reverse order and display the contents of the file in the reverse order.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //Opening the file to write in the file
    char ch[80];
    ofstream fout;
    fout.open("Program 5-2 File Pointer and File Pointer Handling Function(with argument).txt",ios::out);
    cout<<"Enter the data to be entered in the file : "<<endl;
    cin.getline(ch,80);
    fout<<ch<<endl;
    cout<<"*****Data successfully added to the file*****"<<endl;
    fout.close();

    //Opening the file to read data from the file.
    ifstream fin;
    fin.open("Program 5-2 File Pointer and File Pointer Handling Function(with argument).txt",ios::in);
    fin.seekg(0,ios::end);      //Setting the input pointer at the end of the file.
    int m = fin.tellg();
    cout<<m<<endl;
    char data[50];

    cout<<"\n*****Reading the contents of the file*****"<<endl;
    // cin.ignore();
    for(int i = 1; i<=m; i++)
    {
        cout<<"Inside"<<endl;
        fin.seekg(-i, ios::end);  //Moving the input pointer backwards by i bytes from the end of the file.
        fin>>data;
        cout<<data;
    }

    fin.close();

    return 0;
}