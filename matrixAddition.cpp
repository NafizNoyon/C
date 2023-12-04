#include <iostream>
using namespace std;
int main() {
    int rows, cols;

    // number of rows and columns
    cout << "Enter the number of rows and columns: ";
   cin >> rows >> cols;

    // Declare
    int matrix1[rows][cols], matrix2[rows][cols], sumMatrix[rows][cols];

    // Input
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows; ++i)
        {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter element at position " << i + 1 << "," << j + 1 << " for matrix 1: ";
            cin >> matrix1[i][j];
        }
    }

    // Input  second matrix
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
            {
           cout << "Enter element at position " << i + 1 << "," << j + 1 << " for matrix 2: ";
          cin >> matrix2[i][j];
        }
    }

    // Add
   cout << "Resultant Matrix (Sum of Matrices):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sumMatrix[i][j] << " ";
        }
       cout << endl;
    }

    return 0;
}
