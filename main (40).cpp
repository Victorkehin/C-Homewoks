/*Using composition: 
Create a class called Pencil. 
Pencil has a type. C
reate another class called Customer.  
The customer class should have a ID number, array (using pointers) called purchases, and a Pencil variable.  
Make sure to create the purchases array in the constructor. 
Create a function to fill in purchase amount.
Create a way to output all the information about a customer,
including all the details about their type of pencil.  
*/

#include <iostream>
#include <string>
#define MAX 1000

using namespace std;

class Pencil {
    public: 
        string type; 
};

class Customer{
    public:
    int id;
    int*purchases;
    int numOfPurchases;
    Pencil p;
    Customer()
{
    id = 0;
    purchases = new int[1000];
    p.type = "normal";
}

void input(){
    cout<<"Enter id: ";
    cin>>id;
    cout<<"No. of purchases: ";
    cin>>numOfPurchases;
    for(int i=0;i<numOfPurchases;++i)
    {
        cout<<"Enter: ";
        cin>>purchases[i];
    }
    
    cout<<"Enter pencil type: ";
    cin>>p.type;
}

void output(){
    cout<<"id: "<< id << endl;
    cout<<"Pencil Type: "<<p.type<<endl;
    cout<<"Number of Purchases: "<<numOfPurchases<<endl;
    for(int i=0;i<numOfPurchases;++i)
    {
        cout<<"Purchase "<<i+1<<": "<< purchases[i]<<endl;
    }
    
}
};

int main()
{
    Customer c;
    c.input();
    cout<<"\nDATA IS\n";
    c.output();
    return 0;
}

