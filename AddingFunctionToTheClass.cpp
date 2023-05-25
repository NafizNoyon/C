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
};
    int main()
{
    student Nafiz,Junayed;

    Nafiz.id =1101;
    Nafiz.gpa =3.95;
    Nafiz.display();

    Junayed.id =1102;
    Junayed.gpa =4.00;
    Junayed.display();

    getch();


}
