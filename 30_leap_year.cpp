#include<iostream>
using namespace std;
int main()

{
    int y;
    cout<<"Enter the year: ";
    cin>>y;


    if(y%4==0 && y%100!=0) cout<<"leap year";
    else if(y%400==0) cout<<"leap year";
    else cout<<"not leap year";

    return 0;

}