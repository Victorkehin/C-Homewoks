/*Create an array that is of size 10. 
It should be filled with the number 1. 
Output your array to the console.
*/
#include<iostream>
using namespace std;
int main()
{

//First part
   
    int a[10];
   
/* first we store 1 at every index of 
the array which is accessed by i*/

    for(int i=0;i<10;i++)
        a[i]=1;
  
//then we outout.

for(int i=0;i<10;i++)
cout<<a[i]<<' ';
cout<<endl;

// ques 2

int b[25];
int n=25; //this is used for storing the numbers in reversed order
for(int i=0;i<25;i++,n--) 
   b[i]=n;
// output part
for(int i=0;i<25;i++)
cout<<b[i]<<' ';
}
