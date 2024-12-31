#include <iostream>
using namespace std;

// Function to calculate the total revenue from transactions
int sum(int n) {
    int totalRevenue = 0;  // Initialize total revenue to 0
    int transaction;       // Variable to store each transaction amount

    // Loop to read each transaction and add to totalRevenue
    for (int i = 0; i < n; i++) {
        cin >> transaction;  // Read transaction amount
        totalRevenue += transaction;  // Add transaction amount to totalRevenue
    }

    return totalRevenue;  // Return the total revenue
}

int main() {
    int n;  // Number of transactions

    // Read the number of transactions
    cin >> n;

    // Call the sum function and print the total revenue
    cout << sum(n) << endl;

    return 0;
}
