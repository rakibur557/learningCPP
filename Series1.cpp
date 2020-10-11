// 1+2+3+4+5+.....+n

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int sum=0, n;

    cout<<"Enter the last number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<sum;

    getch();
}
