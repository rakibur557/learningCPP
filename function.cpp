#include<iostream>
#include<conio.h>
using namespace std;

void addition(int,int); // function prototype

int main()
{
    int x,y;
    cout<<"Enter value of X: ";
    cin>>x;
    cout<<"Enter value of Y: ";
    cin>>y;

    addition(x,y);

    getch();
}

void addition(int a,int b)
{
    int sum =a+b;
    cout<<"Summation: "<<sum;
}
