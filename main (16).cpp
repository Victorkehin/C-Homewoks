/*2. Create an array that is filled with the numbers 100 
to 1 (as 100,99,98,...1). Output the contents of the array.*/
#include <iostream>
using namespace std;
void number(int arr[100])
{
    int a=100;
    for(int i=1;i<=100;i++)
    {
        arr[i]=a;
        a--;
    }
}

int main()
{
    
    int arr[100];
    number(arr);
    for(int j=1;j<=100;j++)
    {
        cout<<arr[j]<<" " ;
    }

    return 0;
}