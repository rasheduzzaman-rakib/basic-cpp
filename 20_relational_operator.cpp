//special_operator//
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int  main()
{
    int a=20, b=90, c=20;

    int d = a==b; //false=0
    cout<<d<<endl;

    int d1 = a>c; //false=0 but equal
    cout<<d1<<endl;

    int d2 = a<b; //true=1
    cout<<d2<<endl;

    int d3 = a!=c; //false=0
    cout<<d3<<endl;

    int d4 = a<=b; //true=1
    cout<<d4<<endl;
    
    getch();
}