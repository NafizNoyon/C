#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"Enter the number of age :"<<endl;
    cin>>age;
    {

    if(age < 18)
    {
        cout<<"He or she can not be eligible to give his or her vote  " <<endl;
    }
    else if(age>=18)
    {
        cout<<"He or she can be eligible to give his or her vote  "<<endl;
    }
    else
    {
        cout<<"Invalid voter,age can not be negative:"<<endl;
    }
    }
    return 0;
}
