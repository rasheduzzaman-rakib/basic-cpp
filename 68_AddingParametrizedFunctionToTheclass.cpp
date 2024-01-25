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

        void setvalue(int x, double y)
        {
            ID=x;
            CGPA=y;
        }

};

int main()
{
    student rohan, zara;
    //rohan.ID= 120080;
    //rohan.CGPA= 3.90;
    //cout<<"Rohan ID   : "<<rohan.ID<<endl;
    //cout<<"Rohan CGPA : "<<rohan.CGPA<<endl;
    rohan.setvalue(120080,3.90);
    rohan.display();
    cout<<endl;


    //zara.ID= 120097;
    //zara.CGPA= 3.85;
    //cout<<"Zara ID   : "<<zara.ID<<endl;
    //cout<<"Zara CGPA : "<<zara.CGPA<<endl;
    zara.setvalue(120097,3.85);
    zara.display();
    return 0;
}