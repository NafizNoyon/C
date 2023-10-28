#include <iostream>
using namespace std;

int main() {
    int n; // Number of terms
    cout << "Enter the number of Fibonacci terms to generate: ";
    cin >> n;

    int first = 0, second = 1;
    cout << "Fibonacci Series: " << first << " " << second << " ";

    for (int i = 2; i < n; i++) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}

