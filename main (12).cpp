/*6. Create an array of size 10 of booleans.
Fill it with all true except for the last position
which will be false.*/

#include<iostream>
using namespace std;

int main() {
   bool arr[10];//Creating an array the size 10
  
   for(int i = 0; i < 9; i++){
       arr[i] = true;
   }
   arr[9] = false;  
   
   for(int i = 0; i<10;i++)
    cout << arr[i] << " ";
    cout << endl;

  
   return 0;
}
