//Create a function that checks to see if a file exists

#include <iostream>
#include <fstream>

using namespace std;

bool isexists(string filename){
    ifstream myfile;
    myfile.open(filename.c_str());
    if(myfile){
        cout<<"file exists"<<endl;
    }
    else {
        cout << "file doesn't exist"<< endl;
    }
}

int main()
{
    isexists("put.txt");
    isexists("not.txt");
}
