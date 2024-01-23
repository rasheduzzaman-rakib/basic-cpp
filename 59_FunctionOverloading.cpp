#include<iostream>
using namespace std;

void sum (int x, int y)
{
    int add=x+y;
    cout<<add<<endl;
}

void sum (int x, int y, int z)
{
    int add=x+y+z;
    cout<<add<<endl;
}


int main()
{
    sum(10,20);
    sum(10,20,30);
    return 0;
}


/* 
#include<iostream>
using namespace std;

void sum (int x, int y)
{
    int add=x+y;
    cout<<add<<endl;
}

void sum (double x, double y, double z)
{
    double add=x+y+z;
    cout<<add<<endl;
}


int main()
{
    sum(10,20);
    sum(10.3,20.2,30.1);
    return 0;
}
*/
