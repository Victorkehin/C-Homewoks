/*1. Create an array that is filled with the numbers 1 to 50. Output the array's contents to main.*/
#include<iostream>
using namespace std;
int main() 
{
    int array[50];
    
    for(int i = 0;i<50;i++){
        array[i] = i+1;
    }
    
    for(int i = 0;i<50;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    /*for(int i = 0;i<50;i++){
        array[i] = 0;
    }
    
    for(int i = 0;i<50;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;*/
    
    return 0;
    
}