/*What is the largest prime factor of the number 9003? Create a function called Nevada where you pass in the
number as an argument and return the largest factor.*/

#include<iostream>
#include<math.h>
using namespace std;

int PrimeFactor(int n) { // function to calculate prime factors and find maximum
int i, largest=-1;
while(n % 2 == 0) { // cheching for divisibilty by 2
largest = 2;
n = n/2;
cout<<2;
}
for(i = 3; i <= sqrt(n); i=i+2){ // for loops begins at 3 and runs till sqrt of n as factors are less than the square root of the number


while(n % i == 0) { // condition to check for remainder
cout<<i<<" ";
largest = i;
n = n/i;

}
  
}
if(n > 2) {
largest = n;
cout <<n;
  
}
return i, largest;
}
int main() {
int num;
cout<<"Enter a number: ";
cin>>num;
cout<<"Prime factors of "<<num<<" are:"<<endl;
cout<<"\nLargest prime factor: "<<PrimeFactor(num); // calling function
}

