/*5. Create a function that takes in an array and 
changes the order of the numbers so it is backwards. For instance,
if the original array had the numbers 3,4,8,2,11 it should now read 11,2,8,4,3.*/
#include <iostream>

using namespace std;

int main()
{
    int input[100], output[100], count, i;
    
    cout << "Emter number of elements in array\n";
    cin >> count;
    
    cout << "Enter " << count << " numbers \n";
    
    for (i = 0; i < count; i++)
    {
        cin >> input [i];
    }
    
    //Copy numbers from the InputArray to outputArray in rverse order
    for (i=0; i < count; i++)
    {
        output[i] = input [count -i-1];
    }
    
    // Reversed array
    cout << "Reversed Array\n";
    for (i =0; i < count; i++)
    {
       cout << output [i] << " ";
    }
    return 0;
}