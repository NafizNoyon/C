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
    void setValue(int x,double y)
    {
        id =x;
        gpa= y;
    }
};

    int main()
{
    student Nafiz,Junayed;
    Nafiz.setValue(101,3.95);
    Nafiz.display();
    Junayed.setValue(102,3.98);
    Junayed.display();
    getch();

}

