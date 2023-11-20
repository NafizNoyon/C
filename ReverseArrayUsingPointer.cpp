#include <iostream>
using namespace std;

void reverseArray(int *arr, int size)
{
    // Reverse the elements of the array using pointers
    for (int i = 0; i < size / 2; ++i) {
        // Swap the elements at the ith and (size - 1 - i) positions
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Reverse the array using a pointer
    reverseArray(numbers, size);

    // Print the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < size; ++i)
        {
        cout << numbers[i] << " ";
        }
    cout << std::endl;

    return 0;
}


