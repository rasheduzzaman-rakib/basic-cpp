/*40_primeNumber.cpp
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
    int n,count=0;
    cout<<"Enter the number to check it's prime number or not: ";
    cin>>n;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        } 
    }
    if(count==0)
        cout<<"Prime";
    else 
        cout<<"Not Prime";
    getch();
}