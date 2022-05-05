/*4. Create a function that creates an array,
fills it with 10 numbers of the users choice and then returns the array.*/

#include <iostream>

using namespace std;

int* createArray()
{
    int *arr = new int[10];
    cout<<"Enter 10 numbers: "<< endl;
    for (int i= 0; i < 10; i++)
    {
        cin>> arr[i];
    }
    return arr;
}

int main()
{
    int *a = createArray();
    cout << "Array elements are: "<< endl;
    for(int i=0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
