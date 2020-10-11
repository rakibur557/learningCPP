/*
there can many functions with same name, but parameter or datatype
should be different that is called function overloading
*/
#include<iostream>
#include<conio.h>
using namespace std;

//same as function 2 , but parameter 2
void sum(int a,int b)
{
    int add=a+b;
    cout<<add<<endl;
}
//same as function 1 , but parameter 3
void sum(int a,int b,int c)
{
    int add=a+b+c;
    cout<<add<<endl;
}
int main()
{
    //calling 2 parameter function.
    sum(20,30);

    //calling 3 parameter function.
    sum(30,30,30);

    getch();
}
