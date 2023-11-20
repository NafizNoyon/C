#include<iostream>
using namespace std;
int main()
{
    float x=4.5;
    x=++x;
    for(int i =0; i<(int)x;i++)
    {
        for(int j=x;j>i; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
