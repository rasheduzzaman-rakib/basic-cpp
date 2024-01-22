/*39_continueQuiz1.cpp
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
    for( int i=1; i<=100; i+=2)
    {
        if(i==10)
        {
            continue;
        }
    cout<<i<<endl;
    }
    getch();
}