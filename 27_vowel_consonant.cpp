#include<iostream>
using namespace std;

int main()

{
    char ch;
    cout<<"Enter any letter to check: "; 
    cin>>ch;
    ch =tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') cout<<"vowel";
    else cout<<"consonant";

    return 0;

}