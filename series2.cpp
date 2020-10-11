///even number series print

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,sum=0,n;

    cout<<"Enter the last number: ";
    cin>>n;
    for(i=2; i<=n; i=i+2){
        sum=sum+i;
    }
    cout<<sum;

getch();
}
