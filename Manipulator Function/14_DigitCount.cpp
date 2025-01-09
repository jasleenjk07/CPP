#include <iostream>
#include <iomanip> // For setw manipulator
#include <string>  // For converting number to string
using namespace std;

void analyzeDigitFrequency(int number) {
    // Array to store the count of each digit (0-9)
    int digitCount[10] = {0};

    // Convert the number to a string for digit traversal
    string numStr = to_string(number);

    // Count the frequency of each digit
    for (char digit : numStr) {
        digitCount[digit - '0']++;
    }

    // Output the frequency of each digit
    for (int i = 0; i < 10; ++i) {
        if (digitCount[i] > 0) {
            cout << "Digit " << i << ": " << setw(2) << digitCount[i] << " times" << endl;
        }
    }
}

int main() {
    // Input the identification number
    int N;
    cin >> N;

    // Analyze the frequency of digits
    analyzeDigitFrequency(N);

    return 0;
}
