#include<iostream>
using namespace std;

class student
{
    public:
        int ID;
        double CGPA;
        void display()
        {
            cout<<ID<<" "<<CGPA<<endl;
        }

        student(int x, double y)
        {
            ID=x;
            CGPA=y;
        }
};

int main()
{
    
    student Alim(101,3.50);
    Alim.display();
    student Rohan(102,4.00);
    Rohan.display();
    return 0;
}