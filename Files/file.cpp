#include<iostream>
#include<fstream>
//for using file this header must include.
using namespace std;

int main()
{
    //file variable name should be ofstream data type.
    ofstream file;

    file.open("student.txt");

    file<<"I am Rakibur Rahman. I am 22 years old. I am from Dhaka.\n";

    cout<<"File succesfully created."<<endl;

    file.close();

    return 0;
}
