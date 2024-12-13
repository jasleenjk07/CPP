#include <iostream>
using namespace std;

// Function to swap rows in the 2D array
void swapRows(int** arr, int row1, int row2, int cols) {
    for (int j = 0; j < cols; j++) {
        // Swap the elements of the specified rows
        int temp = arr[row1][j];
        arr[row1][j] = arr[row2][j];
        arr[row2][j] = temp;
    }
}

// Function to print the 2D array
void printArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t"; // Display elements in tab format
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    // Input for the size of the array
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Dynamically allocate a 2D array
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Input the elements into the array
    cout << "Enter the elements for the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element for position (" << i << "," << j << "): ";
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal array:" << endl;
    printArray(arr, rows, cols);

    // Input row positions to swap
    int row1, row2;
    cout << "Enter the rows to swap (0 to " << rows-1 << "): ";
    cin >> row1 >> row2;

    // Swap the rows
    swapRows(arr, row1, row2, cols);

    cout << "\nArray after swapping rows " << row1 << " and " << row2 << ":" << endl;
    printArray(arr, rows, cols);

    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
