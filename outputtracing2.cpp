#include<iostream>
using namespace std;
int main()
{
 char p='A';
 float q =5.55;
 char r=p++;
 int s=q;

 cout<<"stored in p:"<<p<<endl;
 cout<<"stored in q:"<<q<<endl;
 cout<<"stored in r:"<<r<<endl;
 cout<<"stored in s:"<<s<<endl;
 cout<<"stored in p:"<<++p<<endl;
 cout<<"stored in q:"<<q--<<endl;
 cout<<"stored in q:"<<(int)q<<endl;
 ++r;
 s++;

 cout<<"stored in r:"<<r<<endl;
 cout<<"stored in s:"<<s<<endl;
 cout<<"Te End!"<<endl;

 return 11;
}
