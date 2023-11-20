#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 6;
    int numbers[ARRAY_SIZE];

    // Input phase
    cout << "Enter 6 integer numbers, one by one:\n";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Calculation phase
    int oddIndexSum = 0;
    for (int i = 1; i < ARRAY_SIZE; i += 2) {
        oddIndexSum += numbers[i];
    }

    // Output phase
    cout << "Summation of numbers at odd indexes: " << oddIndexSum << std::endl;

    return 0;
}

