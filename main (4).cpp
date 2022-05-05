//Program that outputs 10 strings to a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream myfile;
   myfile.open("file.txt",ios::out);
   string input;
   if (myfile.is_open()){
       for(int i=0;i<10; i++){
           cout<< "Enter the strings "<<i+1<<":";
           cin>>input;
       }
   }

    return 0;
}