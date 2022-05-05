/*3.) Create a Book class that has variables name, production_cost, edition and sale_price. 
It should have private variables, a public constructor, methods to get and set the variables, 
and a function that returns the price with a 5% tax.  Show how you create two Book object in main.  
Output the price with tax of the two Books.*/

#include <iostream>

#include<string>

using namespace std;

class Book{

string name;

double cost;

string edition;

double price;

public:

Book(string n,double c,string e,double p){name=n;

cost=c;

edition=e;

price=p;

}

void set_name(string n){

name=n;

}

void set_cost(double c){

cost=c;

}

void set_edition(string e){

edition=e;

}

void set_price(double p){

price=p;

}

string get_name(){

return name;

}

double get_cost(){

return cost;

}

string get_edition(){

return edition;

}

double get_price(){

return price;

}

double taxed_price(){

return price+(price*0.70);

}

};

int main() {

Book b1("Legend of the seeker",50.5,"I",56.5);

Book b2("Legend of the seeker: Thje confessor",40.9,"II",67.5);

cout<<"B1 cost: "<<b1.get_cost()<<endl;

cout<<"B2 cost: "<<b2.get_cost()<<endl;

}
