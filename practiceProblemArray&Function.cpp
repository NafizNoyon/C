#include <iostream>
using namespace std;

const int MAX_ROWS = 3;
 const int MAX_COLS = 3;

// Function to initialize a 2D array
void initializeMatrix(int matrix[MAX_ROWS][MAX_COLS]) {
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < MAX_ROWS; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
}

// Function to print a 2D array
void printMatrix(const int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
   cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
       cout << endl;
    }
}

// Function to calculate the transpose of a matrix
void calculateTranspose(const int matrix[MAX_ROWS][MAX_COLS], int transposed[MAX_COLS][MAX_ROWS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int originalMatrix[MAX_ROWS][MAX_COLS];
    int transposedMatrix[MAX_COLS][MAX_ROWS];

    // Initialize the original matrix
    initializeMatrix(originalMatrix);

    // Print the original matrix
    printMatrix(originalMatrix, MAX_ROWS, MAX_COLS);

    // Calculate the transpose
    calculateTranspose(originalMatrix, transposedMatrix, MAX_ROWS, MAX_COLS);

    // Print the transposed matrix
    cout << "Transpose:" << endl;
    printMatrix(transposedMatrix, MAX_COLS, MAX_ROWS);

    return 0;
}

