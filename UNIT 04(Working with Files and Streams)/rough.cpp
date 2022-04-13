#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("myfile.txt");
    fout<<"gahahajjajajjja";
    fout.close();
   ifstream fin;

   fin.open("myfile.txt");
   
   int pos1=fin.tellg();
   cout<<"Current position:"<<pos1<<endl;
   fin.seekg(3,ios::cur);
   int pos2=fin.tellg();
   cout<<"Now Current position:"<<pos2<<endl;
   char ch[50];
  while(fin.eof()!=1)
   {
       cout<<"Inside"<<endl;
       fin.getline(ch,50);
       cout<<ch;
   }
   fin.close();
    return 0;
}