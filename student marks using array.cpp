#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter Number of students: ";
    cin>>n;
    int student[n];

    //input
    for(i=0; i<n; i++){
            cout<<"Marks for Student "<<i+1 << "=";
        cin>>student[i];
        sum+=student[i];
    }
    cout<<"Total marks: "<<sum<<endl;

    float avg=(float)sum/n;

    cout<<"Average: "<<avg<<endl;

    //finding maximum
    int max= student[0];
    for(i=1; i<n; i++){
        if(max<student[i]){
            max=student[i];
        }
    }

    // Finding minimum
    int min= student[0];
    for(i=1; i<n; i++){
        if(min>student[i]){
            min=student[i];
        }
    }

    cout<<"Maximum Number: "<<max<<endl;
    cout<<"Minimum Number: "<<min;

    getch();
}

