/*13_area_of_triangle.cpp
Author: Rasheduzzaman
Student ID: CS-D-77-22-120080
Department: Computer Science
Institute: Dhaka International University
Location: Dhaka, Bangladesh
Date: 10th December, 2023*/


#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int  main()
{
    double base,height,area=0;
    cout<<"Enter value of base: ";
    cin>>base;
    cout<<"Enter value of height: ";
    cin>>height;
    area=0.5*(base*height); 
    cout<<area;
    getch();
}