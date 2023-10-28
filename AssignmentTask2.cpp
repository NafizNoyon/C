#include <iostream>
using namespace std;

int main() {
    int start = 5;
    int end = 10;
    int sum = 0;

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    cout << "The sum of natural numbers from " << start << " to " << end << " is: " << sum << endl;

    return 0;
}
