#include<iostream>
using namespace std;
int main()
{
    char gender ;
    cout<<"The character id z:";
    cin>>gender;
    if (gender =='m' || 'M')
    {
        cout<<"the  is male "<<endl;
    }
    else if(gender =='f'|| 'F')
    {
        cout<<"the gender is female "<<endl;
    }
    else
    {
        cout<<"undefined "<<endl;
    }
    return 0;
}
