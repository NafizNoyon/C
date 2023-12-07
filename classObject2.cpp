#include<iostream>
using namespace std;


class Room{  //access modifier
private :
    double lenght;// number of method under the private class
    double breadth;//number of method under the private class
    double height;//number of method under the private class
    void show() //create a function in the private class
    {
        cout<<" I am Nafiz:"<<endl;
    } // here i am, going to do encapsulation ,thats mean private to public.
public:
    void initData( double len, double brth,double hgt) // create a function to call all the numbers method from private
    {
        lenght =len; //number of methods
        breadth= brth;//number of methods
        height =hgt; //number of methods
        show();
    }
double calculateArea ()
{
    return lenght*breadth; //method to calculate the area
}
double calculateVoluem ()
{
    return lenght*breadth*height;//method to calculate the volume
}

};
int main()
{

    Room room1; // here is the first object under the main function
    Room room2;//here is the second object under the main function
    Room room3;// here is the third object under the main function

    //pass the values of private variables as arguments
    room1.initData(42.5,30.8,19.2); //data for first room
    room2.initData(40,56.8,90); //data for second room
    room3.initData(56.34,89.67,80);//data for third room

    //display all of result

    cout<<"Area of room="<<room1.calculateArea()<<endl;
   cout<<"Area of room="<<room2.calculateArea()<<endl;
    cout<<"Area of room="<<room3.calculateArea()<<endl;

    cout<<"volume of the room ="<<room1.calculateVoluem()<<endl;
    cout<<"volume of the room ="<<room2.calculateVoluem()<<endl;
    cout<<"volume of the room ="<<room3.calculateVoluem()<<endl;

    return 0;




}
