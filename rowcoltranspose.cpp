#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // Get the number of rows and columns for the matrix
    cout << "Enter the number of rows and columns : ";
    cin >> rows >> cols;

    // Declare
    int matrix[rows][cols];

    // Input
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i)
        {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    // Print  original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; ++i)
        {
        for (int j = 0; j < cols; ++j)
         {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // transpose of the matrix
    cout << "Transpose of the Matrix:" << endl;
    for (int j = 0; j < cols; ++j)
        {
        for (int i = 0; i < rows; ++i)
        {
            cout << matrix[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}

