#include<iostream>
using namespace std;
int main()
{
    //getting input 
    int mark[100];
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    for(int i=0;i<=n;i++) //loop 5 bar cholbe 0 theke 4 porzonto 
    {
        cout<<"Marks of student " << i+1<<"= ";
        cin>>mark[i];
    }

    //required mark searching from the list
    int value;
    cout<<"Enter the mark you want to check: ";
    cin>>value;
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(value == mark[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos == -1) cout<<"Not Found";
    else cout<<pos;

    return 0;
}