#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

// Define a union with a structure for account data
union AccountData {
    struct {
        char name[51];       // Account holder's name (max 50 characters + null terminator)
        int accountNumber;   // Account number
        double balance;      // Account balance
    };
};

void deposit(AccountData &account, double amount) {
    account.balance += amount;
    cout << "Amount deposited successfully." << endl;
}

void withdraw(AccountData &account, double amount) {
    if (account.balance >= amount) {
        account.balance -= amount;
        cout << "Amount withdrawn successfully." << endl;
    } else {
        cout << "Insufficient balance. Withdrawal failed." << endl;
    }
}

void displayAccountDetails(const AccountData &account) {
    cout << "Account details:" << endl;
    cout << "Account holder's name: " << account.name << endl;
    cout << "Account number: " << account.accountNumber << endl;
    cout << fixed << setprecision(2);
    cout << "Balance: " << account.balance << endl;
}

int main() {
    AccountData account;

    // Read account holder's name
    cin.getline(account.name, 51);

    // Read account number
    cin >> account.accountNumber;

    // Read initial balance
    cin >> account.balance;

    // Read deposit amount and deposit it
    double depositAmount;
    cin >> depositAmount;
    deposit(account, depositAmount);

    // Read withdrawal amount and attempt withdrawal
    double withdrawalAmount;
    cin >> withdrawalAmount;
    withdraw(account, withdrawalAmount);

    // Display account details
    displayAccountDetails(account);

    return 0;
}
