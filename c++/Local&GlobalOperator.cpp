#include<iostream>
#include<conio.h>
using namespace std;

int x=10;//global operator

int main()
{
    int x =50;//local operator
    cout<< :: x <<endl; // :: scope resolution operator
    getch();
}
