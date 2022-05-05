/*Create an array of size 25 
that contains the numbers listed backwards. i.e. 25,24,23,22,..*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int arr[25]; // creating an array of size 25

        /*
        Using a for loop which will run from 0 to 24 and 
        fill all the indexes
        starting from 25 and decremeted by 1
        */

        for(int i=0;i<25;i++)
        {
                arr[i] = 25 - i; // assigning the values starting from 25
                /* arr[0] = 25 - 0 = 25
                arr[1] = 25 - 1 = 24....
                .
                .
                arr[24] = 25 - 24 = 1
                */
        }

        // printing the array elements
        for(int i=0;i<25;i++)
                cout << arr[i] << ' ';
        cout << endl;
        return 0;
}