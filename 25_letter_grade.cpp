#include<iostream>
using namespace std;
int main()

{
    int mark;
    cout<<"Enter your CSE-201 mark: ";
    cin>>mark;

    if(mark>100) cout<<"Obtained mark cann't be more than 100";
    
    else if (mark<0) cout<<"Obtained mark cann't be less than 0";
    
    else if (mark>80) cout<<"A+";
    
    else if (mark>70) cout<<"A";
    
    else if (mark>60) cout<<"A-";
    
    else if (mark>50) cout<<"B";
    
    else if (mark>40) cout<<"C";
    
    else if (mark>33) cout<<"D";
    
    else cout<<"F";

    return 0;
}