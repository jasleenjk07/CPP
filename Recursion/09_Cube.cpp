#include <iostream>
using namespace std;

// Function to compute the cube of an integer using reference parameter
int cube(int& n) {
    n = n * n * n; // Calculate the cube of the number
    return n;      // Return the cubed value
}

int main() {
    int n;

    // Read the input integer
    cin >> n;

    // Call the cube function and print the result
    cout << cube(n) << endl;

    return 0;
}
