#include<iostream>
using namespace std;

// Define a union to store customer data
union Customers{
    char name[50];
    int accountNumber;
    int balance;
};

// Function to increment balances greater than 1000
void increment_balance(Customers* customers, int N){
    for(int i = 0; i < N; i++){
        // Access the balance directly since union fields share memory
        if(customers[i].balance > 1000){
            customers[i].balance += 100;    // Increment balance by 100
            cout << customers[i].balance << " ";
        }
    }
    cout << endl;
}

int main(){
    int N;
    cin >> N;   // Read number of customers
    
    Customers customers[20];    // Array of customers, max size 20 as per constraints
    
    for(int i = 0; i < N; i++){
        cin >> customers[i].name;
        cin >> customers[i].accountNumber;
        cin >> customers[i].balance;
    }
    
    // Call function to increment and print balances
    increment_balance(customers,N);
    
    return 0;
}