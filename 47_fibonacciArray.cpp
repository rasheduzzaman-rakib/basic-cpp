#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int j;
    int a[j];
    cout<<"How many fibonacci: ";
    cin>>n;
    cin>>j;
    a[0]=0;
    a[1]=1;

    for(int i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

return 0;
}