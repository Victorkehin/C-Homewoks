/*7. Create an array of size 10 where each
position contains a number with that many decimals.*/
#include <stdio.h>

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
   srand((unsigned int)time(NULL));//Function for decimals.
   double min=0,max=1000000;
   double arr[10];
   double temp;
   double random;
   int i=0;
   for(i=0;i<10;i++)
   {
       random=(max - min) * ( (double)rand() / (double)RAND_MAX ) + min;
       temp=(int)random/pow(10,i); // for getting required number of digits
       arr[i]=temp;
   }
   for(i=0;i<10;i++)
   {
       cout<<arr[i]<<endl;
   }
}
