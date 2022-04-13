// CONSTRUCTOR METHOD-
//     When file stream object is created the constructor gets called automatically. The constructor uses the file name 
//     as the argument and opens the file.

//     The ofstream class creates the output stream object for storing output inside the file (to add/write inside the file).
//     The ifstreamm class creates the input stream object for taking input from the file (to read from the file).

//     ifstream class is derived from istream and fstream_base class by multiple inheritance.
//     ofstream class is derived from the ostream and fstream_base class by multiple inheritance.
     

// Write a program to open a file and add (write) data to the file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st = "This is a program to open a file using the Constructor Method.";
    ofstream fout("Program 1-1 Constructor Method (Adding data to the file 1).txt");      //Call to the constructor of the class ofstream using the object 'fout'.
    fout<<st<<endl;                                                       //Adding data to the file or ((Displaying data inside the file))
    fout<<"This is new line added without using any variable."<<endl;     //Another way to display data inside the file, just like 'cout' in command-line.
    cout<<"Data Successfully added to the file1"<<endl;                   //Displaying a message on the command line
    fout.close();

    fout = ofstream("Program 1-1 Constructor Method (Adding data to the file 2).txt");        //Explicit call to the constructor and passing argument explicitly.
    fout<<"This is the data added to the file 2 using the same object 'fout' of the ofstream class."<<endl;
    cout<<"Data Successfully added to the file2"<<endl;                   //Displaying a message on the command line
    fout.close();


    return 0;
}


// NOTE:
//    1. In opening a file using the constructor method, File must be already exists.
//       And we need not to provide the complete location of the file when calling the constructor.

//    2. The constructor resides inside the class whose object we are creating.