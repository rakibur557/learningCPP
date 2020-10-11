#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{

float num1,num2;

cout<<showpoint;
cout<<fixed;
cout<<setprecision(10);
cout<< "Enter 2 numbers: " ;
cin>>num1 >> num2;


float sum = num1+num2;
 cout<<setw(15)<< "sum is: " <<sum;
 cout<<endl;

 cout<<noshowpoint;
 float sub = num1 - num2;
 cout<<setw(15)<< "Subtraction is: " <<sub;
 cout<<endl;

cout<<showpoint;
 float mul = num1 * num2;
 cout<<setw(15)<< "Multiplication is: " <<mul;
 cout<<endl;

 float div= num1 / num2;
 cout<<setw(15)<< "Divition is: " <<div;






    getch();
}
