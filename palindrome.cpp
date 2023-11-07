#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Reverse the number
    while (num > 0)
        {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder; //First iteration:

//reversedNum is multiplied by 10, so it remains 0.
//The remainder is 3 (the last digit of 123), so it's added to reversedNum.
//After the first iteration, reversedNum becomes 3.
//Second iteration:

//reversedNum (which is now 3) is multiplied by 10, becoming 30.
//The remainder is 2 (the last digit of 12), so it's added to reversedNum.
//After the second iteration, reversedNum becomes 32.
//Third iteration:

//reversedNum (which is now 32) is multiplied by 10, becoming 320.
//The remainder is 1 (the last digit of 1), so it's added to reversedNum.
//After the third iteration, reversedNum becomes 321.
        num /= 10;
        }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum)
        {
        cout << originalNum << " is a palindrome." << endl;
        } else
    {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}
