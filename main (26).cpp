/*Create a function that takes in an int array and a size. Create a new array in the function that is double the size of the array passed in. Fill the new array with two copies of the original's data. For instance, if we pass in x and it has 
{1,2,3} the new array should have {1,1,2,2,3,3,}. Return the new array.*/
#include <iostream>

using namespace std;

int* doubleSize(int arr[], int size){
        
        // declaring variables
        int* newarr = new int[size+size];
        int k = 0;
        
        // looping through each valid index of arr
        for(int i = 0;i<size;i++){
                
                // updating newArr
                newarr[k++] = arr[i];
                newarr[k++] = arr[i];
        }
        
        // returning new arr
        return newarr;
}

// testing
int main() {
        
        int arr[] = {1,2,3};
        int size = 3;
        
        int* result = doubleSize(arr, size);
        
        for(int i = 0;i<2*size;i++){
                cout<<result[i]<<" ";
        }
        cout<<endl;
        
        return 0;
}