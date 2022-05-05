/*2.) Create a Person class that has variables name, address and height. 
It should have private variables, a public constructor,  methods to get and set the variables,
and a function called info that outputs all the relevant info about the person. 
Show how you create a Person object in main. Output all the info about the person.*/
#include<iostream>

using namespace std;

// Create a Person class

class Person{

    // Declare private variables name, address and height.

    private:

       string name;

       string address;

       float height;

    // public constructor, methods to get and set the variables

    public:

       Person(string n,string a,float h){

           name = n;

           address = a;

           height = h;

       }

       int info(){

           // Display the person name

           cout<<"Person Name : "<<name<<endl;

           // Display the person Address

           cout<<"Person Address : "<<address<<endl;

           // Display the person height

           cout<<"Person height : "<<height<<endl;

       }

};

// main() function

int main(){    

    // Create a Triangle object

    // Pass the parameter

    Person person("Victor","USA",6.0);

    // Display the area of the triangle

    person.info();

    return 0;

}