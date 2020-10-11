/*
    CONSTRUCTOR is a special type of function that is used to initialize object

    Properties of constructor:
    1. constructor is a special type of function
    2. Constructor has the same name as that of the class it belong to.
    3. It has no return type not even void
    4.It is called automatically.

    TYPES of Constructor:
    There are two kinds of constructors.
    1. Default constructor
    2. parametrized constructor  //in this program we used it.
*/

#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        int id;
        double gpa;

        void display(){
            cout<<"ID: "<<id<<" "<<endl<<"GPA: "<<gpa<<endl;
        }
        //constructor name should class name
        student(int x, double y) // no data type here.
        {
            id = x;
            gpa = y;
        }


} ;
int main()
{
    // initializing constructor when declaring variables.
    // no need to call constructor individually
    student rakib(1234,3.98);

    rakib.display();
    getch();
}
