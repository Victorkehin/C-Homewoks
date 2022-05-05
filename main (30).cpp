/*1. Create a function that takes in a vector and adds 10 random numbers to it.
Have the function return the vector*/
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

//Define a function which accepts vector as a parameter and returns a vector
vector<int> RandomNumberfunction(vector<int> vect)
{
srand((unsigned)time(NULL)); //Generating random numbers using srand()
  
//Using for loop, we are adding 10 random numbers to the vector
for (int i =0; i < 10; i++)
{
//Generating random numbers from 1 to 100 and storing it in vect
vect[i] = rand()%100+1;
}
return vect; //Returning the vector back to main
}


int main()
{
vector<int> input(10);
  
//Calling the function RandomNumberfunction
vector<int> result=RandomNumberfunction(input);
  
//Printing the vector elements
for (int i =0; i < 10; i++)
cout << result[i] << endl;

return 0;
}