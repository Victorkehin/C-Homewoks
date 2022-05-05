/*4.) Create a function called fillArray that accepts "size" as a parameter. 
It should create an array inside the function of size "size" and fill it with random numbers.  
Make sure to return the array to main.*/

#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <time.h>
#include <algorithm>
using namespace std;

int* fillArray(int size);

int main()
{
    srand (time(nullptr));
    
    int* vals = fillArray(10);

}

int* fillArray(int size){
    //creating an array in function must use (*) notation
    //cant change size but crates an array dynamically
    int* myArray = new int [size];
    
    for( size_t i = 0; i < size; i++)
    {
        myArray[i] = rand();
    }
    return myArray;
    
}
    
