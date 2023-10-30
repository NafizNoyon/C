#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    // Print the upper part of the pattern
    for (int i = 1; i <= rows; i++)
   {
        // Print spaces for the left part of the pattern
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        // Print asterisks for the left part of the pattern
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Print the lower part of the pattern
    for (int i = 1; i <= rows; i++)
    {
        // Print asterisks for the right part of the pattern
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


