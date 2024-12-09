#include<iostream>
using namespace std;

class AddAmount{
    int amount;                  // Stores the deposit amount entered by the user
    int balance = 50;            // Initial balance set to 50 rupees
public:
    AddAmount(){                 // Constructor to read the deposit amount from user input
        cin >> amount;
    }
    
    void TotalAmount(){          // Function to calculate and display the total amount after deposit
        cout << amount + balance;
    }
};

int main(){
    AddAmount amt;              // Create an object of AddAmount class
    amt.TotalAmount();          // Call the method to display the total amount
    return 0;
}