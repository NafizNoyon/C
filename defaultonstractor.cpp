
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
     student (int x,double y)
 {
     id =x;
     gpa =y;
 }
     student ()//default constructor
     {
         cout<< "Default constructor " << endl;
     }

};

    int main()
{

    student ob;

    student Nafiz(101,3.95);

    Nafiz.display();

    student Junayed (102,3.65);

    Junayed.display();

    getch();


}
