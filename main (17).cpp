/*3. Create an array that is filled with 25 random numbers between 1 and 100.
Sort the array (using sort from algorithm) and check for duplicates.*/
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <time.h>
#include <algorithm>
using namespace std;

void cheeckForDuplicates(int x[], int size);

int main()
{
    srand (time(nullptr));
    const int SIZE = 25;
    int x[SIZE];
    
    cheeckForDuplicates(x,SIZE);
    
    /*for (size_t i = 0; i < SIZE; i++)
    {
        x[i]
    }
    
    //sorting array
    sort(x, x + SIZE);
    
    for (int k : x ) { cout << k << endl; }
    
    
    return 0;
*/
}

void cheeckForDuplicates(int x[], int size)
{
     for (size_t i = 0; i < size; i++)
    {
        x[i] = rand() % 100 + 1;
    }
    
    //sorting array
    sort(x, x + size);
    
    //check fro duplicates 
    int count_duplicates = 0;
    for (size_t i = 1; i < size; i++)
    {
       if(x[i] == x[i - 1]) {
           count_duplicates++;
       }
    }
    
    cout << "The number of duplicates is: " << count_duplicates << endl;
}
