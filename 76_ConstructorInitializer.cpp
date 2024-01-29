#include<iostream>
using namespace std;

class student
{
    public:
    const int aF;
    student (int x)
    : aF(x)
    {
        cout<<aF<<endl;
    }
};

int main()
{
    student s1(20000);
}