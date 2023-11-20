#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable and assign a value
    int number = 42;

    // Create a pointer to the integer variable
    int *ptr = &number;

    // Print the value and address
    cout << "Value: " << number << endl;
    cout << "Address: " << ptr << endl;

    return 0;
}

