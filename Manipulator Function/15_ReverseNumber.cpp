#include <iostream>
using namespace std;

// Function to reverse the number using reference
void reverseNumber(int &n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10); // Add the last digit to reversed
        n /= 10; // Remove the last digit from n
    }
    n = reversed; // Update the original number with the reversed value
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    // Reverse the number
    reverseNumber(N);

    // Display the reversed number
    cout << "Reversed number: " << N << endl;

    return 0;
}
