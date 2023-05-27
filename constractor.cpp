#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public :
    int id;
    double gpa;

    void display()
    {
        cout<< id <<"  "<<gpa<<endl;
    }
  student (int x,double y) //constractor
  {
      id =x;
      gpa =y;
  }
};

    int main()
{
    student Nafiz(101,3.95);

    Nafiz.display();

    student Junayed (102,3.65);

    Junayed.display();

    getch();


}
