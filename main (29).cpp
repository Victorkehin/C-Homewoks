/*Create an array in main of size 100. 
Fill it with random odd numbers.  
Find the max number in the array.*/

#include <iostream>


using namespace std;

int main()
{
    int arr[100]={0}; //Initialize array of 100 int wityh 0
    int max = 0;//The max number
    int randNum; 
    for (int i = 0; i < 100;) //for loop
    {
        randNum = rand(); //To get random nunmber 
        if((randNum % 2)==0){
            continue;
        }
        arr[i]= randNum; //Assign random number to array
        i++;
    }
    
    max = arr[0]; //Intilaize max with the first number in array
    for(int i = 0; i < 100; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    cout << "The maximum of the number is: " << max;
    getchar();
    
    return 0;
}