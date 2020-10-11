#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{

 cout<< "Welcome, Let's Calculate Area of Cicle. \n" <<endl;

 double pi, radious, area;

 cout<< "Enter Value of Radious: " ;
    cin>>radious;
 cout<< "\n" ;
 cout<< "Enter value of pi: " ;
    cin>>pi;
 cout<< "\n" ;

  area = pi * radious * radious ;

  cout<< "Area of Circle: " <<area;

    getch ();
}
