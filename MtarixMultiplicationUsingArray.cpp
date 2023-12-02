#include <iostream>
using namespace std;

void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; ++k)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix1[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int matrix2[3][3] = {{10, 11, 12},
                        {13, 14, 15},
                        {16, 17, 18}};
    int resultMatrix[3][3];

    multiplyMatrices(matrix1, matrix2, resultMatrix);

    cout << "Matrix 1:" <<endl;
    displayMatrix(matrix1);

    cout << "Matrix 2:" <<endl;
    displayMatrix(matrix2);

    cout << "Resultant Matrix:" << endl;
    displayMatrix(resultMatrix);

    return 0;
}

