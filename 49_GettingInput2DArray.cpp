#include<iostream>
using namespace std;
int main()
{
    
    //initialization
    int m, n;

    //getting array size input 
    cout<<"Enter row index size= ";
    cin>>m;
    cout<<"Enter column index size= ";
    cin>>n;
    int A[m][n];

    //input 
    // i= row elements
    // j= col elements
    cout<<"Enter elements: "<<endl;
    for( int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
        }
    }

    //output
    // i= row elements
    // j= col elements
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}