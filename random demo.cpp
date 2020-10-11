/*What is Random Number??*/
/*What is Random Number??*/
/*What is Random Number??*/

#include<iostream>
#include<cstdlib> //for random function
#include<conio.h>
using namespace std;

int main()
{
    //for random number
    for(int i=1; i<=5; i++){
    int randomNumber = rand();
    cout<<" Random Number: "<<randomNumber<<endl;
    }
    cout<<endl;

    //printing short random number
    for(int i=1; i<=5; i++){
    int randomNumber = rand()%5;
    cout<<" Random Number: "<<randomNumber<<endl;
    }
    cout<<endl;

    // for serial
    for(int i=1; i<=5; i++){
    int randomNumber = rand()%5 + 1;
    cout<<" Random Number: "<<randomNumber<<endl;
    }
    getch();
}
