#include<iostream>
#include<conio.h>
using namespace std;

//Declaring class
class employee
{
    public:
        int code,id;
        double salary;
        //declaring function in class section under public
        void setValue(int c, int i, double s)
        {
            code = c;
            id = i;
            salary = s;
        }
        //printing out function
        void display()
        {
        cout<<"Code: "<<code<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
        }

};

int main()
{
    employee person1, person2;

    person1.setValue(555,1234,10000.70);
    person1.display();


    getch();
}
