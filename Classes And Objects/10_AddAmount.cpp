#include <iostream>
using namespace std;

class AddAmount {
private:
    int balance;

public:
    // Constructor to initialize the balance
    AddAmount(int deposit) {
        balance = 50;  // Initial balance
        balance += deposit;  // Add the deposit amount to the balance
    }

    // Function to display the total amount
    void displayBalance() {
        cout << balance << endl;
    }
};

int main() {
    int deposit;

    // Read the deposit amount
    cin >> deposit;

    // Create an AddAmount object and pass the deposit amount
    AddAmount transaction(deposit);

    // Display the total balance
    transaction.displayBalance();

    return 0;
}
