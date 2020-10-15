#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string linebyline;
    ifstream file("readThisFile.txt"); //ifstream for reading file.

    //while for, read the line untill end.
    //getline read line by line.
    //getline work with string header file.
    while (getline(file,linebyline))
    {
        cout<<linebyline<<endl;
    }

    file.close();
    return 0;
}
