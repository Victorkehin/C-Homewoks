/*6. Create an array of size 10 with the numbers 1-10 in it. 
Output the memory locations of each spot in the array.
*/
#include <iostream>

using namespace std;

int main()
{
    //Create array size of 10 with numbers 1-10 included.
    int arr[10];
    for (int i = 0; i<10; i++)
    {
        arr[i] = i+1;
    }
    
    //Output memory locations of each spots 
    for (int i = 0; i < 10; ++i)
    {
        cout << &arr[i]<<endl;
    }

    return 0;
}