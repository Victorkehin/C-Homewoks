/*2.Create a function that takes in an array, 
adds 10 random numbers to it and then returns the array.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//main function

int main()
{
    //declare the function
    int *randomArray(int[]);
    
    //variables and array declaration
    int *p,i;
    int a[10];
    
    //call the function
    p = randomArray(a);
    cout << "The array is: ";
    
    for(i-0; i < 10; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}

//function randomArray
int *randomArray(int a[])
{
    int i; 
    srand(time(0));
    
    for(i=0; i< 10; i++)//fill the array
    {
        a[i]= rand(); //generate random numbers
    }
    return a;
}
