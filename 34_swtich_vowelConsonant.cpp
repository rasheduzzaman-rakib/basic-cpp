#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter any letter: ";
    cin>>x;
    x=tolower(x);
    switch(x)
    {
        
        case 'a':
            cout<<"vowel";
            break;
        case 'e':
            cout<<"vowel";
            break;
        case 'i':
            cout<<"vowel";
            break;
        case 'o':
            cout<<"vowel";
            break;
        case 'u':
            cout<<"vowel";
            break;
        default:
            cout<<"consonant";
    }
}