#include <iostream>
using namespace std;

// Function to swap columns in the 2D array
void swapColumns(int** arr, int rows, int col1, int col2) {
    for (int i = 0; i < rows; i++) {
        // Swap the elements of the specified columns
        int temp = arr[i][col1];
        arr[i][col1] = arr[i][col2];
        arr[i][col2] = temp;
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

    // Input column positions to swap
    int col1, col2;
    cout << "Enter the columns to swap (0 to " << cols-1 << "): ";
    cin >> col1 >> col2;

    // Swap the columns
    swapColumns(arr, rows, col1, col2);

    cout << "\nArray after swapping columns " << col1 << " and " << col2 << ":" << endl;
    printArray(arr, rows, cols);

    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
