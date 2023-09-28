#include<iostream>
using namespace std;
int main()
{
    int number_to_test, remainder;
    cout<<"Enter your number to be tested :"<<endl;
    cin>>number_to_test;

    remainder =number_to_test % 2;

    if (remainder ==0)

        cout<<"the number is even"<<endl;
    else
        cout<<"the number is odd "<<endl;
    return 0;


}
