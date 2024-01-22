#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{   
    int n;
    cout<<"Enter nth Random number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int randomNum=rand()%90+1;
        cout<<"Random number = "<<randomNum<<endl;
    }
    
}