//Here I'm including the header files that is required
#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>

using namespace std;

//Lucas sequence Function.
void LucasSequence(long long int s){
//if number is greater than 1 we print 2
    if(s >=1)
    {
        //Output number 2 
        cout << 2 << "";
    
    }
    //if the number greater than 2 then we print 1 
    if(s>=2)
    {
        //Print 1 in the if
        cout << 1 <<" ";
    }
    //if the number is greater than 2
    if(s > 2)
    {
    // declare variables and storing the values 
    long long int prev = 2; 
    long long int current = 1; 
    long long int ans = 0; 
    
        //the looop from 2 to the lucas numbers 
    for(long long int i = 2; i < s ; i++)
    {
        //Getting current value
        ans = prev + current;
        //print output 
        cout << ans <<" ";
        //Update the values
        prev = current;
        current = ans;
    }
    
    }
        cout<<"\n";
}

/*Create a function called QuadraticFormula 
that takes in a,b, and c and does the quadratic*/
//Function to find the roots of quadraticequatoin
void QuadraticFormula(double a, double b , double c)
{
    //calculate the discriminant
    double discriminant = b*b - 4*a*c;
//if the discriminant is negative there are no real roots
    if(discriminant < 0)
    {
    cout<<"roots are imaginary";
    }
    else
    {
    //calculating the rooots
    double root1 = (-b + sqrt(discriminant)) / (2*a);
    double root2 = (-b - sqrt(discriminant)) / (2*a);
    //printing the roots
    cout<<"The roots are : "<<root1<<" "<<root2<<"\n";
    }
}

//Create a function called DieRoll.
//function to return the random dieroll
int DieRoll()
{
//setting the srand to time 0
srand(time(0));
//returning the random number using rand , computing to it between 1 and 6
return (rand() % 6) + 1 ;
}

//function for multydieroll
void MultyDieRoll(int n)
{
//setting the srand to time 0
srand(time(0));
//iterating through n times
for(int i = 0 ;i < n ; i++)
{
//printing a random value
cout<<(rand() % 6) + 1<<" ";
}
cout<<"\n";
}

//function to find the perfect square between bottom and top
void checkSquares(long long int bottom , long long int top )
{
//iterating from bottom to top
for(long long int i = bottom ; i<=top ; i++)
{
//checking whether the number is perfect square or not
if(ceil((double)sqrt(i)) == floor((double)sqrt(i)))
{
//printing if it is a perfect square
cout <<i<<" ";
}
}
cout<<"\n";
}

//driver code
int main()
{
cout<<"The lucasSequence is : ";
LucasSequence(5);
QuadraticFormula(4,5,1);
cout<<"Random die roll is :";
cout<<DieRoll()<<"\n";
cout<<"Multydieroll is :";
MultyDieRoll(7);
cout<<"perfect squares are :";
checkSquares(5,20);
return 0;
}



