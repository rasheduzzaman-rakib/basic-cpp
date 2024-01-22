#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Eenter number of students: ";
    cin>>n;

    // getting input
    int students[n];
    for( int i=0; i<n; i++)
    {
        cout<<"Enter marks of student "<<i+1<<"= ";
        cin>>students[i];
        sum=sum+students[i];
    }

    // print output
    cout<<"Total Marks = "<<sum<<endl;
    float avg=(float) sum/n;
    cout<<"Average = "<<avg<<endl;

    //maximum & minimum
    int max=students[0];
    int min=students[0];
    for(int i=1; i<n; i++)
    {
        if(max<students[i])
        {
            max=students[i];
        }
        if(min>students[i])
        {
            min=students[i];
        }
    }
    cout<<"Highest score is = "<<max<<endl;
    cout<<"Lowest score is = "<<min<<endl;
    return 0;
}