// NOTE:

// __LINE__
// This contains the current line number of the program when it is being compiled.

// __FILE__
// This contains the current file name of the program when it is being compiled.

// __DATE__
// This contains a string of the form month/day/year that is the date of the translation of the source file into object code.

// __TIME__
// This contains a string of the form hour: minute: second that is the time at which the program was compiled.


#include <iostream>
    using namespace std;
    int main ()
    {
        cout << "Value of __LINE__ : " << __LINE__ << endl;
        cout << "Value of __FILE__ : " << __FILE__ << endl;
        cout << "Value of __DATE__ : " << __DATE__ << endl;
        cout << "Value of __TIME__ : " << __TIME__ << endl;
        return 0;
    }
