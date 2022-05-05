/*Create a function that takes in an int array and its size.  
Change every odd number in the array to 7 and every even number to 8.*/

#include<iostream>
using namespace std;

void change(int arr[], int size); //function to take in int array and size

int main()
{
int size;
cout<<"Enter the size of an array: ";
cin>>size;
int arr[size];
cout<<"\nEnter "<<size<<" numbers in the array: \n";

    for(int i=0;i<size;i++)
    {   
        cin>>arr[i];
    }
    
change(arr,size);
return 0;
}

void change(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
    {
        arr[i]=8;   
    }
    else
    {
        arr[i]=7;
    }
}
cout<<"\nThe array elements after updation:\n";
  
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<endl;
}
  
}