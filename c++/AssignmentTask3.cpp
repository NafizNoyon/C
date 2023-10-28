#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;
    int temp;

    cout << "Before swapping: a=" << a << ", b=" << b << ", c=" << c << endl;

    // Swap the values of a, b, and c
    temp = a;
    a = b;
    b = c;
    c = temp;

    cout << "After swapping: a=" << a << ", b=" << b << ", c=" << c << endl;

    return 0;
}

