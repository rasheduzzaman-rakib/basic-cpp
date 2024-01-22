/*39_break.cpp
Author: Rasheduzzaman
Student ID: CS-D-77-22-120080
Department: Computer Science
Institute: Dhaka International University
Location: Dhaka, Bangladesh
Date: 13th December, 2023*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
    for( int i=1; i<=100; i++)
    {
        if(i==10)
        {
            break;
        }
    cout<<i<<endl;
    }
    getch();
}