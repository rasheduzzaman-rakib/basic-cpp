#include<iostream>
using namespace std;
int main()
{
    
    //getting input
    int ARRAY[100];
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    for(int i=0;i<=n;i++) //loop 5 bar cholbe 0 theke 4 porzonto 
    {
        cout<<"Marks for student " << i+1<<"= "; //protibar input neyar age ekta kore msg dibe 
        cin>>ARRAY[i];
    }

    // printing output
    cout<<"Marks are: ";
    for(int i=0;i<=n;i++)
    {
        cout<<ARRAY[i]<<" ";
    }
}