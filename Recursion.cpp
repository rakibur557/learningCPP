/*
***RECURSION is a process where a function can call itself.
To Stop calling we need a base case of RECURSION.
*** Important points in case of Recursion:
1.Recursive call
2. Base Case.
*/

//factorial calculator using RECURSION
#include<iostream>
#include<conio.h>
using namespace std;

//Declaring function
int fact(int n)
{
    if(n==1){
        return 1;
    }
    else    //here fact function calling itself until the condition is false.
        return n*fact(n-1); //law of factorial

}

int main()
{
    while(1) //using while to conitune infinite time of calculation
    {
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<": "<<fact(num)<<endl;

    getch();
}
    }
