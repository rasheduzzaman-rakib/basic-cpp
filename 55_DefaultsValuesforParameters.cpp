#include<iostream>
using namespace std;

void display (int a=10, int b=20)
{
    cout<<a<<endl;
    cout<<b<<endl;
}

int main()
{
    display(); //value pass hobe na tao a& b er default value pritn korbe 
    display(30,40); //a & b er value update hobe 
}
