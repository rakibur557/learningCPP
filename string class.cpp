#include<iostream>
#include<conio.h>
#include<string>  // This is because we used string class
using namespace std;

int main()
{
    string str1 = "Anisul";
    string str2 = "Islam";
    string str3;

    str3=str1; //copying str1 to str3
    cout<<"Str3: "<<str3<<endl;

    str3= str1+str2; //adding str1 to str2
    cout<<"Adding String: "<<str3<<endl;

    int len=str1.size(); //To find out length size.
    cout<<"Length of str1: "<<len;


    getch();
}
