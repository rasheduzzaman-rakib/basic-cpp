/*40_LoopMultiplicationTable.cpp
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
    int num;
    cout<<"Enter the number you wants it's multiplication Table: ";
    cin>>num;

    for( int i=1; i<=10; i++)
    {
        cout<<num<<" x "<<i<<" = "<<(num*i)<<endl;
    }
    getch();
}