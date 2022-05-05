/*8.Create an array that contains unique random numbers between 1 and 100. 
The array should be of size 25.  
Output to main every number between 1 and 100 that is NOT in your array.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));

    float arr[25]; // creating an array of size 25 to store the random values

    //Using a for loop which will run from 0 to 25 and assign random values

    for(int i=0;i<25;i++)
        {
            arr[i] = (rand()%100 + 1); //generating a random number between 1 and 100
        }

    // printing the which are not in array
    for(int j=1;j<=100;j++)
    {
        bool flag = true; // flag will check whether there is same element in the array or not
        for(int i=0;i<25;i++)
        {
         if(j==arr[i])
            {
                flag = false;
                break;
            }
        }
            if(flag)
            cout << j << ' ';
        }
        cout << endl;
        return 0;
}