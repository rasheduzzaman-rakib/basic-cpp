#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number to check: ";
    cin>>num;
    
    if(num>0) cout<<"positive";
    else if(num<0) cout<<"negative";
    else cout<<"zero";
}