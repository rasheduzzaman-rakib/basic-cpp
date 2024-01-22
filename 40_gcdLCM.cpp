/*40_gcdLCM.cpp
Author: Rasheduzzaman
Student ID: CS-D-77-22-120080
Department: Computer Science
Institute: Dhaka International University
Location: Dhaka, Bangladesh
Date: 16th December, 2023*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
    int num1,num2,n1,n2,rem;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<"GCD: "<<n1<<endl;

    cout<<"LCM: "<<((num1*num2)/n1)<<endl;
    getch();
}