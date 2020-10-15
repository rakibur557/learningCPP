#include<iostream>
#include<conio.h>
#include<cstring> //This is for we used string function
using namespace std;

int main()
{
    char name1[] = "Rakibur";

    int length = strlen(name1); // strleng() - findout int number of char.
    cout<<"Length of string = "<<length<<endl;

    // strcpy(where to store,where to copy);
    char name2[10];
    strcpy(name2,name1);
    cout<<"String copied: "<<name2<<endl;

    //To add string. strcat - string concatanation.
    char name3[]=" Rahman";
    strcat(name1,name3);
    cout<<"String added: "<<name1<<endl;

    //To convert the string char to UPPER/Capital letter.
    strupr(name1);
    cout<<"Converted string to upper: "<<name1<<endl;

    //To convert the string char to Lower/Smaller letter.
    strlwr(name1);
    cout<<"Converted string to lower: "<<name1<<endl;

    //To compare the string. If String match return 0, otherwise return 1.
    int value = strcmp(name1,name2);
    if(value==0){
        cout<<"Strings are equal"<<endl;
    }
    else
        cout<<"Strings are not equal"<<endl;

    getch();
}
