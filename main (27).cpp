/*Create a function that takes in an array and its size 
and puts the first 10 numbers in the array into a new array and returns the new array. 
Make sure to deal with the case when the array you took in is not of size 10,
by returning an empty array of size 10.*/

#include <iostream>

using namespace std;

// This is function that takes an array and its size
int * copyArray(int oldArray[],int size)
{
  // declare empty array of size 10
  static int newArray[10]={};
  /*  when size greater than or equal to 10 ,
  copy elements of oldArray to newArray*/
  if(size>=10)
  {
    for (int i=0;i<10;i++)
    {
      newArray[i]=oldArray[i];
    }
  }
  // retun array
  return newArray;
}
// driver code
int main()
{
  //declare a pointer that will store value returned by copyArray()
  int *p;
  int arr[]={1,2,3,4,5,6,7,8,9,0,1};
  p=copyArray(arr, 11);
  // print contents  of array
  for ( int i = 0; i < 10; i++ ) 
  {
    cout << *(p + i) << endl;
  }
  return 0;
}