#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public :
    int id;
    double gpa;
};


int main()
{
  student Nafiz,Junayed;

  Nafiz.id =1011;
  Nafiz.gpa = 3.95;
  Junayed.id =1012;
  Junayed.gpa=3.90;

  cout<<Nafiz.id<<"  "<<Nafiz.gpa<<endl;

  cout<<Junayed.id<<"  "<<Junayed.gpa<<endl;





    getch();
}
