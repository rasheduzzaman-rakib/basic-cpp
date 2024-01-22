#include<iostream>
using namespace std;

int main()

{
    char ch;
    cout<<"Enter any letter to check: "; 
    cin>>ch;
    ch =toupper(ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') cout<<"vowel";
    else cout<<"consonant";
    return 0;

}