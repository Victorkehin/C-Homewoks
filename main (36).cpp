/*Create a Triangle class that has variables base and height. 
It should have private variables, a public constructor, 
methods to get and set the variables, and a function that returns the area. 
Show how you create a Triangle object in main.  Output the area of the triangle.*/
#include<iostream>

using namespace std;

// Create a Triangle class

class Triangle{

    // Declare private variables base and height

    private:

       int base;

       int height;

    // public constructor, methods to get and set the variables

    public:

       Triangle(int b,int h){

           base = b;

           height = h;

       }

       // returns the area

       int getArea(){

           return (base * height)/2;

       }

};

// main() function

int main(){    

    // Create a Triangle object

    // Pass the parameter

    Triangle triangle(8,9);

    // Display the area of the triangle

    cout<<"Area of the triangle : "<< triangle.getArea();

    return 0;

}

