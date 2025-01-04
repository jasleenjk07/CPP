#include <iostream>
using namespace std;

// Function to calculate power using call by reference
void power(int& base, int& exponent) {
    int result = 1; // Initialize result to 1
    for (int i = 0; i < exponent; ++i) {
        result *= base; // Multiply result by base, exponent times
    }
    base = result; // Store the result back in base (call by reference)
}

int main() {
    int b, e;

    // Read the base and exponent values
    cin >> b >> e;

    // Call the power function
    power(b, e);

    // Display the result
    cout << b << endl;

    return 0;
}
