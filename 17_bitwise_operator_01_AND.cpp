//bitwise_ope_part_01//
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int  main()
{
    int x=32; //1 0 0 0 0 0
    int y=12; //0 0 1 1 0 0
    int c;
    c=x&y; // binary= 0 0 0 0 0 0 = Decimal 0
    cout<<c;
    getch(); 
}