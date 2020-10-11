#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[2][3],row,col;

    cout<<"Enter the matrix element: "<<endl<<endl;
    //getting input
    for(row=0; row<2; row++){
        for(col=0; col<3; col++){
            cout<<"A["<<row<<"]["<<col<<"] = ";
            cin>>a[row][col];
        }
    }

    ///output
    cout<<endl<<"You Entered: "<<endl<<endl;
    for(row=0; row<2; row++){
        for(col=0; col<3; col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }






    getch();
}
