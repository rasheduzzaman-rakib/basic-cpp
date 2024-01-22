#include<iostream>
using namespace std;

int addition(int,int);
int main()
{
    int result=addition(10,20);
    cout<<result;
}


int addition(int a, int b)
{
    int sum=a+b;
    return sum;
}

/*
#include<iostream>
using namespace std;

double addition(double,double);
int main()
{
    double result=addition(10,20);
    cout<<result;
}


double addition(double a, double b)
{
    double sum=a+b;
    return sum;
}
*/