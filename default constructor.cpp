#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:
       int id, gpa;

        // default constructor has no parameter
       student()
       {
           cout<<"Default Constructor";
       }
};

int main()
{
    // calling default constructor.
    student object;



    getch();
}
