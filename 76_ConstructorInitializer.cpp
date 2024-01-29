#include<iostream>
using namespace std;

class student
{
    public:
    const int aF;
    const int eF;
    student (int x, int y)
    : aF(x), eF(y)
    {
        cout<<"Admission Fee: "<<aF<<endl;
        cout<<"Exam Fee: "<<eF<<endl;
    }
};

int main()
{
    student s1(20000, 400);
}