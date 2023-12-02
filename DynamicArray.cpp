#include <iostream>
using namespace std;

int* create2DArray(int rows, int cols)
{
    int* array2D = new int[rows * cols];

    int count = 1;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            array2D[i * cols + j] = count++;
        }
    }

    return array2D;
}

void display2DArray(int* array2D, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << array2D[i * cols + j] << " ";
        }
            cout << endl;
    }
}

void delete2DArray(int* array2D)
{
    delete[] array2D;
}

int main()
{
    const int rows = 3;
    const int cols = 3;

    int* myArray = create2DArray(rows, cols);

    cout << "2D Array:" << endl;

    display2DArray(myArray, rows, cols);

    delete2DArray(myArray);

    return 0;
}
