/*Create a function Bravo that inserts a number into an array at any position.  
(Note, you will need to create a new array that has a size 1 bigger than your given array.  
Arrays cannot change sizes.)*/
#include <iostream> 

using namespace std; 
// Bravo function

int* Bravo(int n, int arr[], int num, 
             int pos) 
{ 

    int i;
    n++;


    for (i = n; i >= pos; i--) 

        arr[i] = arr[i - 1]; 



    arr[pos - 1] = num; 

  

    return arr; 
} 

  


int main() 
{ 

    int arr[50] = { 0 }; 

    int i, num, pos, n = 6; 

  
//Our first array
    for (i = 0; i < 6; i++) 

        arr[i] = i + 1; 

    
//printing first array
    
    for (i = 0; i < n; i++) 

        cout << arr[i] << " "; 

    cout << endl; 

    num = 27; 

    pos = 4; 


    Bravo(n, arr, num, pos); 

 //printing array after inserting element

    for (i = 0; i < n + 1; i++) 

        cout << arr[i] << " "; 

    cout << endl; 

  

    return 0; 
} 