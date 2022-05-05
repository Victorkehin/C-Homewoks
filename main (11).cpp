/*Create an array of size 4. Fill it with names. 
Output the array to main.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
        string arr[4]; // creating an array of size 4 to store the names

        /*
        Using a for loop which will run from 0 to 3 and assign the names
        */

        for(int i=0;i<4;i++)
        {
                cin >> arr[i]; // assigning the names
        }

        // printing the names
        for(int i=0;i<4;i++)
                cout << arr[i] << ' ';
        cout << endl;
        return 0;
}