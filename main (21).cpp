/*6.) Create a function Bravo that inserts a number into an array at any position. 
(Note, you will need to create a new array that has a size 1 bigger than your given array. 
Arrays cannot change sizes.)*/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <time.h>
#include <algorithm>
using namespace std;



void DoubleFillArray(double x[], int size);
int main()
{
    srand(time(nullptr));
    
    const int SIZE = 50;
    double my_arr[SIZE];
    
    //DoubleFillArray(my_arr, SIZE);
    

    int val = 100;
    int position = 9;
    double* new_array = insert_val(my_arr, SIZE, val, position);
}

double* insert_val(double* x[], int size, int val, int position){
    //Here we create a new array that is bigger than we were given
    //Use pointer notation to create the array because we are inside a function
    double* new_array = new double[size + 1];
    
    for (size_t i=0; i < position; i++)
    {
        new_array[i] = x[i];
        
    }
    new_array[position] = val;
    for (size_t i = position+1; i < size+1; i++)
    {
        new_array[i] = x[i] = x[i - 1];
    }
    return new_array;
}

