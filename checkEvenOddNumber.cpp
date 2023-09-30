#include <iostream>
using namespace std;
int main()
 {
     int n,remainder;
     cout<<"Enter your number to be tested :";
     cin>>n;
     if (n>0)
     {
        if (n%2 ==0)
        {
            cout<<"inside if's body "<<endl;
            cout <<"it is an even number "<<endl;
        }
        else
        {
            cout<<"inside if's body "<<endl;
            cout<<"it is an odd number "<<endl;
        }

     }
     else
     {
         cout<<"You have entered a negative number "<<endl;
     }
     return 0;
 }




