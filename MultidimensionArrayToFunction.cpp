#include <iostream>
using namespace std;

void processArray(int arr[3][3], int rows, int cols)
{

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    const int rows = 3;
    const int cols = 3;


    int myArray[rows][cols] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};


    processArray(myArray, rows, cols);

    return 0;
}

