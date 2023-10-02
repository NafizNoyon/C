#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any letter :"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 'a':
        cout<<"the letter is vowel " <<endl;
        break;
    case 'e':
        cout<<"the letter is vowel" <<endl;
        break;
    case 'i':
        cout<<"the letter is vowel" <<endl;
        break;
    case 'o':
        cout<<"the letter is vowel " <<endl;
    case 'u':
        cout<<"the letter is vowel " <<endl;
    default :

        cout<<" the letter will be consonant:"<< endl;
    }
    return 0;
}
