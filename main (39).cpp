/*1.) Create a class called Student. 
Each student should have a name and ID number (an int). 
They should also have a ptr to a dynamic array called Grades.  
The public methods for Student should be: getName, setName, getID, setID, setGrades, getGrades. 
In the constructor you should initialize Grades to be an array of size 4 with the values 0 for each position. 
Make sure that you use THIS properly. Create 2 students, 
assign one object to another and show that when you assign grades to one it effects the other equally.*/

#include <iostream>
#include <string>

using namespace std;

class Student{
    private: 
         string name;
         int ID; 
         int * grades; 
    public: 
        Student(string name, int ID): name(name), ID(ID){
            this ->grades = new int[4];
            this ->grades[0] = 0;
            this ->grades[1] = 0;
            this ->grades[2] = 0;
            this ->grades[3] = 0;
        }
        
        string getName() const {
            return name;
        }
        
        void setName(string name){
        this->name = name;
        }
        
        int getID() const{
            return ID;
        }
        
        void setID(int ID){
            this-> ID = ID;
        }
        
        int *getGrades() const{
            return grades;
        }
        
        void setGrades(int*grades){
            this->grades = grades;
        }
        
        
};

int main(){
    int grades[] = {89, 23, 89, 78, 90};
    Student s1("Kali", 8);
    Student s2("Riri", 11);
    s1.setGrades(grades);
    s2.setGrades(grades);
    s1.getGrades()[3] = 0;
    cout << s2.getGrades()[3] << endl; //prints 0
    return 0;
}