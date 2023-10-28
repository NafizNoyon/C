#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    // Input three integers
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int largest;

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Check if the largest number is odd or even
    if (largest % 2 == 0) {
        cout << "The largest number (" << largest << ") is even." << endl;
    } else {
        cout << "The largest number (" << largest << ") is odd." << endl;
    }

    return 0;
}

