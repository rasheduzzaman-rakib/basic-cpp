/*CODED BY RASHEDUZZAMAN
COMPUTER SCIENCE & ENGINEERING
DHAKA INTERNATIONAL UNIVERSITY*/

#include <bits/stdc++.h>
using namespace std;

//declaring prototype
//function declare age o kora jabe poreo kora jabe 

void addition(int,int); //add prototype
void subtraction(int,int); //sub proto
void multiply(int,int); //multi proto
void division(int,int); //div proto

int main()
{
    int a,b;
    cout<<"Enter value of a: "; cin>>a;
    cout<<"Enter value of b: "; cin>>b;
    cout<<"Value of a & b are: "<<a<<" & "<<b<<endl;

    //calling our user defined functions below

    addition(a,b);
    subtraction(a,b);
    multiply(a,b);
    division(a,b);
    cout<<"|| All functions are called ||";
}

//addition function
void addition(int a, int b)
{
    int sum=a+b;
    cout<<"Addition Output: "<<sum<<endl;
}

//subtraction function
void subtraction(int a, int b)
{
    int result=a-b;
    cout<<"Subtraction Output: "<<result<<endl;
}

//multiply function
void multiply(int a, int b)
{
    int multi=a*b;
    cout<<"Multiply Output: "<<multi<<endl;
}

//division function
void division(int a, int b)
{
    float div=(float)a/b; // foe decimal point output value
    cout<<"Division Output: "<<div<<endl;
}