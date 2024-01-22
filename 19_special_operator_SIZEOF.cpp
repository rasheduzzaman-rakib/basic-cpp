//special_operator//
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int  main()
{
    int a;
    float f;
    double d;
    char ch;
    char name[20];
    
    int c = sizeof(a);
    cout<<c<<endl;

    int c1 = sizeof(f);
    cout<<c1<<endl;

    int c2 = sizeof(d);
    cout<<c2<<endl;

    int c3 = sizeof(ch);
    cout<<c3<<endl;

    int c4 = sizeof(name);
    cout<<c4<<endl;
    
    getch();
}