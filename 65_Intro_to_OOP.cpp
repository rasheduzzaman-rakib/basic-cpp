#include <iostream>
#include <string>
using namespace std;

class student 
{       				
  	public:
    int rollNum;
    string name;
};

int main() 
{
  student ID;
  int x;
  cout<<"Enter your roll: ";
  cin>>x;
  ID.rollNum = x;
  ID.name = "anisul islam";

  cout<<"Your Name Is: "<<ID.name<< endl;
  cout<<"Your Roll No: "<<ID.rollNum; 
  return 0;
}