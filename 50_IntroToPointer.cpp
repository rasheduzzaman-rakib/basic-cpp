#include<iostream>
using namespace std;
int main()
{
    int x=6;
    int *p;
    p=&x;

    cout<<x<<endl; //x variable er value 6 print korteche
    cout<<p<<endl; 
    cout<<&x<<endl; //& used to address identyfy
    cout<<*p<<endl; // p=&x; p pointer x variable er value print korteche
}