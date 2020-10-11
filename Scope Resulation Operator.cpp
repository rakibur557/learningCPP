/*
Uses of Scope Resulation Operator (::)


In a scope, local variables has first priority.
But If we change the local variable value to global variable,k
we can use scope resulation operator (::)
*/

#include<iostream>
#include<conio.h>
using namespace std;

int x =10; //Global variable

int main()
{
    int x = 50; //local variable
    cout<<"Value of x: "<<x <<endl; //will print 50 as local variable

    //Again,
    cout<<"Value of x: "<< ::x <<endl;
    //will print global variable.

    /*Changing the value of global variable from main function*/

    ::x = 20;
    cout<<"Value of x: "<< ::x <<endl;
    //Will print 20 now for changing the value of global variable.
    getch();
}


