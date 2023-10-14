#include<iostream>
using namespace std;
int main()
{
    float value1,value2;
    char op;
    cout<<"type in your expression ";
    cin>>value1>>op>>value2;
    cout<<"result=";
    switch(op)
    {
        case '+':
        cout<<value1<<"+"<<value2<<"="<<(value1+value2)<<endl;
        break;

        case '-':
        cout<<value1<<"-"<<value2<<"="<<(value1-value2)<<endl;
        break;

        case '*':
        cout<<value1<<"*"<<value2<<"="<<(value1*value2)<<endl;
        break;
        case '/':
        cout<<value1<<"/"<<value2<<"="<<(value1/value2)<<endl;
        break;


        default:
            cout<<"INVALID";
    }
    return 0;
}
