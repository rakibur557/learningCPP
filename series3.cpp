 #include<iostream>
 #include<conio.h>
 using namespace std;

 int main()
 {
     int sum=0,i,n;

     cout<<"Enter the last number: ";
     cin>>n;

     for(i=1; i<=n; i++){
        sum=sum+i*i; //I square
     }
     cout<<sum;
     getch();
 }
