#include <iostream>
using namespace std;

double performAddition(int a, int b, double c, double d)
{
    double sum = a + b + c + d;
    double percentage = (sum / 400) * 100;  // Assuming the total is 400
    return percentage;
}

// Function to display each element based on their place
void displayElements(int x, double y, int z, double w)
 {
    cout << "First Element : " << x << endl;
    cout << "Second Element : " << y << endl;
    cout << "Third Element : " << z << endl;
    cout << "Fourth Element : " << w << endl;
}

int main()
{
    int value1 = 10, value2 = 20;
    double value3 = 25.5, value4 = 35.5;

    double percentageResult = performAddition(value1, value2, value3, value4);
    cout << "Percentage Rate after Addition: " << percentageResult << "%" << endl;

    int element1 = 100, element3 = 222;
    double element2 = 101.5, element4 = 203.5;

    displayElements(element1, element2, element3, element4);

    return 0;
}

