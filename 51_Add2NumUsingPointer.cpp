#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter first variable= ";
    cin>>x;
    cout<<"Enter second variable= ";
    cin>>y;

    int *p1, *p2;
    p1=&x;
    p2=&y;
    int sum= *p1+*p2;
    cout<<"Output is= "<< sum;
    return 0;
}