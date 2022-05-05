/*3. Create a function that takes in a size and uses pointer 
notation to fill an array that you create in the function 
with random numbers between 1 and 100*/

#include <iostream>

using namespace std;

void fillArray(int size, int* ptr)
{
    int counter = 0;
    while (counter < size)
    {
        ptr[counter] = (rand()%100)+1;
        counter++;
    }
}
int main()
{
    int size;
    cout << "Enter Array size: ";
    cin>> size; 
    int array[size];
    int* parray = &array[0];
    fillArray(size,parray);
    
    for(int i = 0; i<size;i++)
    {
        cout << "Array["<<"]" << array[i]<<endl;
    }
    return 0;
}