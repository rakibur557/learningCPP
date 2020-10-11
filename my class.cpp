#include<iostream>
#include<conio.h>
using namespace std;

//class should be declare in global section
class student
{
    public: ///for access this from anywhere.
        int id;
        double gpa;
};

int main()
{
    //Object declaration
    student Rakib; //Rakib is a variable of student class type

    Rakib.id = 72557; //To access class use (.) dot operator.
    Rakib.gpa = 3.98;

    //Printing objects
    cout<<"Id: "<<Rakib.id<<endl;
    cout<<"GPA: "<<Rakib.gpa<<endl<<endl;


    //we can declare more variable in one line.
    student Rahat, Robin, Sourav;
    cout<<"Enter Id of Rahat: ";
    cin>>Rahat.id;
    cout<<"Enter GPA of Rahat: ";
    cin>>Rahat.gpa;

    cout<<endl<<"Enter Id of Robin: ";
    cin>>Robin.id;
    cout<<endl<<"Enter GPA of Saurav: ";
    cin>>Robin.gpa;

    cout<<endl<<"Enter Id of Sourav: ";
    cin>>Sourav.id;
    cout<<endl<<"Enter GPA of Sourav: ";
    cin>>Sourav.gpa;


    //Printing out
    cout<<endl<<"You Entered: "<<endl;
    cout<<"Id of Rahat: "<<Rahat.id<<endl;
    cout<<"GPA of Rahat: "<<Rahat.gpa<<endl;

    cout<<endl<<"You Entered: "<<endl;
    cout<<"Id of Robin: "<<Robin.id<<endl;
    cout<<"GPA of Robin: "<<Robin.gpa<<endl;

    cout<<endl<<"You Entered: "<<endl;
    cout<<"Id of Sourav: "<<Sourav.id<<endl;
    cout<<"GPA of Sourav: "<<Sourav.gpa<<endl;


    getch();
}
