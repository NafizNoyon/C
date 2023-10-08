#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any letter :"<<endl;
    cin >>ch;
    if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"vowel"<<endl;
    }
    else
    {
        cout<<"consonant"<<endl;
    }
    return 0;
}
