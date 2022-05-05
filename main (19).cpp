/*5.) Create function called DoubleFillArray 
that takes in an array and its size and fills it with doubles between 0 and 1 
(3 digits each)..*/
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
    
    DoubleFillArray(my_arr, SIZE);
    
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << my_arr[i] << endl;
    }
    
    
    
    
}



void DoubleFillArray(double x[], int size){
    for (size_t i = 0; i < size; i++)
    {
        x[i] = (rand() % 1000) / 1000.0;
    }
}