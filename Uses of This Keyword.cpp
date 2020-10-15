#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class student
{
public:
    string name; //name global variable here.
    student(string name) //Local variable
    {
       this -> name = name; //this-> is mentioned global name variable.
    }
    void display()
    {
        cout<<name<<endl;
    }

};

int main()
{
    student s1 ("Rakibur Rahman");
    s1.display();



    getch();
}
