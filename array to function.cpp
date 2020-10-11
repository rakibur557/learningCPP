/*
Passing array to function
*/
#include<iostream>
#include<conio.h>
using namespace std;

void display_Array(int num[], int Array_size) //Array size is not mandatory.
{
    for(int i=0;i<Array_size;i++){
        cout<<num[i]<<" ";
    }
}
int main()
{
    int number[5]={10,20,30,40,50};
    //calling display function here
    display_Array(number,5); // output will be same if don't use array size

    getch();
}
