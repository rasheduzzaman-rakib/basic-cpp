/*39_breakANDcontinue.cpp
Author: Rasheduzzaman
Student ID: CS-D-77-22-120080
Department: Computer Science
Institute: Dhaka International University
Location: Dhaka, Bangladesh
Date: 14th December, 2023*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
    for( int i=1; i<=100; i=i+3)
    {
        if(i==10)
        {
            continue;
        }
        if(i>10)
        {
            break;
        }
    cout<<i<<endl;
    }
    getch();
}