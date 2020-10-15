#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    int age,i,num_of_st;
    ofstream file; //ofstream for write file
    file.open("Student_Details.txt", ios::out | ios::app);

    cout<<"Enter number of students: ";
    cin>>num_of_st;

    for(i=0; i<num_of_st; i++)
    {
        cout<<"Enter Name: ";
        getline(cin,name);
        file<<name<<"\t";

        cout<<"Enter age: ";
        cin>>age;
        file<<age<<endl;
        cin.ignore();
    }
    cout<<"Data is stored successfully."<<endl;
    file.close();

    return 0;
}
