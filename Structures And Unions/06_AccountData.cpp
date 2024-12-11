#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

// Define a union to represent account-related data
union AccountData{
    char name[50];
    int accountNumber;
    double balance;
    double deposit;
    double withdraw;
};

int main(){
    AccountData acc;    // Declare an instance of the AccountData union
    
    cin.getline(acc.name,50);
    char accName[50];
    strcpy(accName,acc.name);
    
    cin >> acc.accountNumber;
    int accNo = acc.accountNumber;
    
    cin >> acc.balance;
    double bal = acc.balance;
    
    cin >> acc.deposit;
    double dep = acc.deposit;
    
    cin >> acc.withdraw;
    double with = acc.withdraw;
    
    // Deposit the specified amount into the account
    bal += dep;
    cout << "Amount deposited successfully." << endl;

    // Check if the withdrawal amount can be processed
    if(bal > with){
        cout << "Amount withdrawn successfully." << endl;
        bal -= with;    // Deduct the withdrawal amount from the balance
    } else {
        cout << "Insufficient balance. Withdrawal failed." << endl;
    }

    // Output: Display the account details
    cout << "Account details: " << endl;
    cout << "Account holder's name:  " << accName << endl;
    cout << "Account number:  " << accNo << endl;
    cout << "Balance:  " << fixed << setprecision(2) << bal << endl;
    return 0;
}