#include<iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"Enter row size= ";
    cin>>row;
    cout<<"Enter col size= ";
    cin>>col;
    int A[3][4]={{5,6,7,8},{10,11,12,13},{15,16,17,18}};
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}


//lab code smaple below

/* #include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter row size: ";
    cin>>r;
    
    cout<<"Enter column size: ";
    cin>>c;

    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}*/