/*40_sumOfDigits.cpp
Author: Rasheduzzaman
Student ID: CS-D-77-22-120080
Department: Computer Science
Institute: Dhaka International University
Location: Dhaka, Bangladesh
Date: 16th December, 2023*/

#include<iostream>
using namespace std;

int main()
{
    int num,n,sum=0,rem;
    cout<<"Enter integer: ";
    cin>>num;
    n=num;
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    cout<<"Reverse digits is: "<<sum;
}