//c to f//
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int  main()
{
    double celcious,farenheit;
    cout<<"Enter farenheit: ";
    cin>>farenheit;
    celcious=(farenheit-32)/1.8;
    cout<<"C= "<<celcious<<" Celcious";
    getch();
}