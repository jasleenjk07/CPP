#include <iostream>
#include <cmath> // Use cmath for mathematical operations
using namespace std;

// Inline function to check if a number is an Armstrong number
inline bool isArmstrong(int n) {
    int originalNum = n, sum = 0;

    // Handle edge case where n = 0
    if (n == 0) {
        return true; // 0 is considered an Armstrong number
    }

    // Calculate the number of digits
    int digits = 0, temp = n;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of the power of digits
    while (n > 0) {
        int rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }

    // Return whether the sum equals the original number
    return sum == originalNum;
}

// Inline function to print all factors of a number
inline void printfactors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number" << endl;
        printfactors(n);
    } else {
        cout << n << " is not an Armstrong number";
    }

    return 0;
}
