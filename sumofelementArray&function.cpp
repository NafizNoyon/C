#include <iostream>
using namespace std;

const int MAX_ROWS = 3;
const int MAX_COLS = 3;

// Function to initialize a 2D array
void initializeMatrix(int matrix[MAX_ROWS][MAX_COLS])
 {
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < MAX_ROWS; ++i)
    {
        for (int j = 0; j < MAX_COLS; ++j)
        {
            cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
}

// Function to print a 2D array
void printMatrix(const int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
           cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to calculate the sum of elements in a specific row
int calculateRowSum(const int matrix[MAX_ROWS][MAX_COLS], int row)
{
    int sum = 0;
    for (int j = 0; j < MAX_COLS; ++j)
    {
        sum += matrix[row][j];
    }
    return sum;
}

int main()
{
    int myMatrix[MAX_ROWS][MAX_COLS];
    int selectedRow;

    // Initialize the matrix
    initializeMatrix(myMatrix);

    // Print the matrix
    printMatrix(myMatrix, MAX_ROWS, MAX_COLS);

    // Get user input for the row to calculate the sum
    cout << "Enter the row number to calculate the sum: ";
    cin >> selectedRow;

    // Check if the selected row is valid
    if (selectedRow >= 0 && selectedRow < MAX_ROWS)
    {
        // Calculate and print the sum of elements in the selected row
        int rowSum = calculateRowSum(myMatrix, selectedRow);
        cout << "Sum of elements in row " << selectedRow + 1 << ": " << rowSum << endl;
    } else
    {
      cout << "Invalid row number." << endl;
    }

    return 0;
}

