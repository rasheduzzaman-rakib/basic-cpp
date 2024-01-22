//multiple case//
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
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"vowel";
            break;
        default:
            cout<<"consonant";
    }
}