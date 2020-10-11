#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=5; // x = normal variable
    int *p; // pointer declaration

    p=&x; // pointing the address of x into p

    cout<<x<<endl; // printing value of x
    cout<<&x<<endl; //printing the address of x
    cout<<p<<endl; //printing the address of x
    cout<<*p<<endl; // printing the value of x

getch();
}
