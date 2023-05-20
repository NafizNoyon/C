#include<iostream>
#include<conio.h>
using namespace std;

double addition (double,double); //prototype

int main()
{ //main function

  cout<<addition(10.5,20.3);

    getch();

} //secondary function
double addition (double a, double b)
{
    double sum=a+b;
    return sum;
}
