#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    while(1)
    {
        int guessNum, randomNum;
        cout<<"Enter your guess between 1 to 5 : ";
        cin>>guessNum;

        randomNum=rand()%5+1;

        if(guessNum==randomNum) cout<<"You Win"<<endl;
        else cout<<"Oh sorry"<<endl;
        cout<<"Random number was: "<<randomNum<<endl;
    }
}