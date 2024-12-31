#include <iostream>
using namespace std;

// Function to calculate the sum of revenues between two days
int calculateSum(int lower, int upper) {
    int totalRevenue = 0;  // Initialize the total revenue to 0

    // Loop from the lower limit to the upper limit
    for (int day = lower; day <= upper; day++) {
        totalRevenue += day;  // Add the revenue for the current day
    }

    return totalRevenue;  // Return the total revenue
}

int main() {
    int lowerLimit, upperLimit;

    // Read the range of days from the user
    cin >> lowerLimit >> upperLimit;

    // Call the calculateSum function and print the result
    cout << calculateSum(lowerLimit, upperLimit) << endl;

    return 0;
}
