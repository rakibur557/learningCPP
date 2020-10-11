/*
    Member Initializer List or Constructor Initializer.
    If we use Constant keyword then we have to initialize as soon as possible.
    If we don't use it then our program show us an error.

    If We need to use constant without initializing as soon as that line.
    We have to follow following method.
*/

#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        const int admissionFee;
        const int examFee;

    student(int x, int y)
    : admissionFee(x), examFee(y) //(:) operator must be use.
    {
        cout<<"Amission Fee: "<<admissionFee<<endl;
        cout<<"Exam Fee: "<<examFee<<endl;
    }

};
int main()
{
    student s1(15000,500);


    getch();
}
