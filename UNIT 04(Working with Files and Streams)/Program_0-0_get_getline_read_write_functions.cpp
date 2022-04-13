// NOTE:
//     1. get(), getline() and read() are all member-functions of the istream-class and hence can be accessed by the predefined istream-class object(i.e., cin).
//     2. Similarly put() and write() are member-functions of the ostream-class and hence can be accessed by the predefined ostream-class object(i.e., cout).
    
//              ->  stream_class_object.get('character')
//                   e.g.  cin.get('A')

//                 Above syntax only prints a single character that is specified as an argument.

//                  stream_class_object.get(variable, size)
//                  e.g.   char ch[20]
//                         cin.get(ch,20)

//                  Here in this case, it is not necessary to enter the characters equal to the number of size specified,
//                  the total number of characters entered can be smaller than or equal to the size specified.
//                  In case the number of the characters entered is greater than the size specified,
//                  then apart of the string will not be printed.
//              ---------------------------------------------------------------------------------------------------------------
//              ->  stream_class_object.getline(variable, size)
//                  e.g.   char ch[20]
//                         cin.getline(ch,20)
//              In case we have created a charater array, then in that case we need to use the above syntax.
                         
//                          or

//                  getline(stream_class_object, string_name)
//                  e.g.   string str
//                         getline(cin, str)
//             ---------------------------------------------------------------------------------------------------------------
//              ->  stream_class_object.read(variable, size)
//                  e.g.   char ch[40]
//                         cin.read(ch, 40)

//              In case of read() function it is necessary to enter characters equal to the number of size specified,
//              otherwise it will misbehave.
//             ---------------------------------------------------------------------------------------------------------------
//             ---------------------------------------------------------------------------------------------------------------
//              ->  stream_class_object.put('character')
//                  e.g.   cin.put('A')

//              In case of put() function we can only display one character(including the white space character) at a time,
//              hence in order to display an entire string using the put() function we need to use loop.
//             ---------------------------------------------------------------------------------------------------------------
//              ->  stream_class_object.write(variable, size)
//                  e.g.   char ch[40]
//                         cin.write(ch,40)
               
//              In case of write() function it is necessary to enter characters equal to the number of size specified,
//              otherwise it will misbehave.

//     3.  read() and write functions only read the specific number of bytes. This is due to the fact that they both are 
//         developed to be used in binary file (although can be used for text files also) and hence reads only specified number of bytes.  



//Write a program to show the implementation of the get(), getline(), read(), put() and write() functions.

#include <iostream>
#include <string.h> //Since we are using strelen() function.
using namespace std;

int main()
{
    //Taking input from the user using get() function.
    char ch[50];
    cout << "Enter your name : ";
    cin.get(ch, 50);
    cout <<"The name that u have entered is : " <<ch << endl;

    cout << "-----------------------------------------------------------------------------\n";

    //Taking input from the user using the getline() function.

    char name1[30];
    cout << "Enter your name : " << endl;
    cin.ignore(); //To clear the input buffer, since we are using getline() function just after the get() function.
    cin.getline(name1, 30);
    cout << "The name that you have entered is : " << name1 << endl;

    string name2;
    cout << "\nEnter your name again : " << endl;
    getline(cin, name2);
    cout << "The name that you have entered is : " << name2 << endl;

    cout << "-----------------------------------------------------------------------------\n";

    //Taking input from the user using the read() function.
    char arr[21];
    cout << "Enter your name : " << endl;
    cin.read(arr, 21);
    cout << "The name that you have entered is : " << arr << endl;

    cout << "-----------------------------------------------------------------------------\n";

    //Displaying the output using the put() function.
    char arr2[22];
    cout << "Enter your name : " << endl;
    cin.ignore(); //To clear the input buffer, since we are using the get() function just after the read() function.
    cin.get(arr2, 22);
    

    cout << "Name that you have entered is : ";
    for (int i = 0; i < strlen(arr2); i++)
    {
        cout.put(arr2[i]);
    }

    //We can also use the while loop as below:
    // int i = 0;
    // while(arr2[i] != '\0')
    // {
    //     cout.put(arr2[i]);
    //     i++;
    // }

    cout << "\n-----------------------------------------------------------------------------";

    //Displaying the output using the write() function.
    char arr3[22];
    cout << "\nEnter your name : ";
    cin.ignore();
    cin.get(arr3, 22);

    cout << "The name that U have entered is : ";
    cout.write(arr3, 22);

    return 0;
}