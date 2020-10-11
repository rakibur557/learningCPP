/*
*******Passing Arguments to a function******
1. Passing by Value: Here a copy of the argument is passed to the function.
2. Passing by reference: Here, copies an arguments address into the formal parameter.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int x=10; //Global variable

/* PASSING BY VALUE*/
void display(int num) //Here (num) is called formal parameter/argument
{
    num = 20;
}

/*PASSING BY ADDRESS*/
void show(int *num)
{
    *num = 20;
}

int main()
{

    /* In Case Of Pass by Value*/

    cout<<"In Case Of Pass by Value:"<<endl;
    cout<<"Before calling the function, X = "<<x<<endl;

    display(x); //Here (X) is called actual parameter/argument
    //Output of x will not change here.
    cout<<"After calling the function, X = "<<x<<endl<<endl;


    /***********************************************/
    /* In Case of pass by reference*/


    cout<<"In Case Of Pass by Address:"<<endl;
    cout<<"Before calling the function, X = "<<x<<endl;

    show(&x); //Here (&Y) is called actual parameter/argument
    //Output of Y will be change here. Because we are passing actual parameter here.
    cout<<"After calling the function, X = "<<x<<endl;




    getch();
}
