#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1 ="rashed";
    string s2="zaman";
    string s3;
    s3=s1;

    cout<<s3<<endl;

    s3=s1+s2;
    cout<<"s1+s2= "<<s3<<endl;

    int len=s3.size();
    cout<<"Size of s3= "<<len<<endl;
}