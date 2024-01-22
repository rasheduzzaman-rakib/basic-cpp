//assignment operator//
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int  main()
{
    int x=3;
    int y=2;
    x+=y; //x=x+y
    cout<<"x+=y: "<<x<<endl;

    x-=y; //x=x-y
    cout<<"x-=y: "<<x<<endl;

    x*=y; //x=x*y
    cout<<"x*=y: "<<x<<endl;

    x/=y; //x=x/y
    cout<<"x/=y: "<<x<<endl;

    x%=y; //x=x%y
    cout<<"x%=y: "<<x<<endl; //can't take double data type for %

    getch(); 
}