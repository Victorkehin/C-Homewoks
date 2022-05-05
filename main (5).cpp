//Create a function that asks the user for 5 integers and outputs them to a file.
#include <iostream>
#include <fstream>

using namespace std;

void write_to_file(string filename){
    ofstream myfile;
    myfile.open(filename.c_str(),ios::out);
    int input;
    if(myfile.is_open()){ //Create if statement that asks for 5 numbers.
        for(int i = 0; i <5; i++){
            cout<<"Enter NUmber "<<i+1<<":";
            cin>>input;
            
            myfile<<input;
            myfile<<"\n";
        }
    }
    myfile.close();
    
}
int main(){
    write_to_file("put.txt");
}