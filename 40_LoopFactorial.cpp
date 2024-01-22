/*40_LoopFactorial.cpp
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
    int n, fact=1;
    cout<<"Enter any positive number: ";
    cin>>n;

    for( int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    getch();
}