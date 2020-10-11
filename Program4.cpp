#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;


int main ()
 {

 char name[20];
  cout<< "Enter your name: " ;
  gets (name);
  cout<<endl;
  cout<< "WELCOME " <<name <<endl;

 int num1, num2;
  cout<< "Enter value of A: ";
  cin>>num1;
  cout<<endl;
  cout<< "Enter value of B: ";
  cin>>num2;
  cout<<endl << "Resuls:" <<endl;

  int sum = num1 + num2;
  cout<< "Sum is: " <<sum;
  cout<<endl;

    int sub = num1 - num2;
  cout<< "Sub is: " <<sub;
  cout<<endl;

    int mul = num1 * num2;
  cout<< "Multiplication is: " <<mul;
  cout<<endl;

    double dev = (float) num1 / num2;
  cout<< "Devision is: " <<dev;
  cout<<endl;

  int rem = num1 % num2;
  cout<< "Remainder is: " <<rem;
  cout<<endl;









     getch();
 }
