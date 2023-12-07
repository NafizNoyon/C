#include<iostream>
using namespace std;

class Room {  // access modifier
public :
    double lenght ;
    double breadth ;
    double height;
 double calculateArea()
 {
  return lenght * breadth;
 };
 double calculateVolume()
 {
     return lenght* height*breadth;
 }

};
int main()
{
    // create  object of  room class

    Room room1;
    room1.lenght= 10;
    room1.height=43.45;
    room1.breadth=45.67;
    // calculate the and display the value

    cout<<"area of room =:"<<room1.calculateArea()<<endl;
    cout<<"volume of room=:"<<room1.calculateVolume()<<endl;
    return 0;
}
