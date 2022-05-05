/*Create a function that takes in an array and outputs the min, max and average of the array to main.*/
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
    

    /*int val = 100;
    int position = 9;
    double* my_stats = insert_val(my_arr, SIZE, val, position);*/
}

double* my_stats(double* x, int size){
    double* statistics = new double[3];
    
    //find min
    double min = x[0];
    for (size_t i = 1; i < size; i++)
    {
        if (x[i] < min){
            min = x[i];
        }
    }


//Max
double max = x[0];
    for (size_t i = 1; i < size; i++)
    {
        if (x[i] < max){
            max = x[i];
        }
    }


//average
    double avg = 0; 
    for(size_t i = 0; i < size; i++)
    {
        avg += x[i];
    }
    avg = avg / size;
    
    statistics[0] = min;
    statistics[1] = max;
    statistics[2] = avg;
 
    return statistics;
}


