#include<iostream>
#include<iomanip>
using namespace std;

// Function to calculate simple interest for a single year
void calculateInterest(double amount, double rate){
    double interest = amount * rate / 100;
    cout << fixed << setprecision(2) << interest << endl;
}

// Overloaded function to calculate simple interest for multiple years
void calculateInterest(double amount, double rate, int years){
    double interest = amount * rate / 100 * years;
    cout << fixed << setprecision(2) << interest << endl;
}

int main(){
    double amount, rate;
    int years;
    
    cin >> amount;
    cin >> rate;
    cin >> years;
    
    calculateInterest(amount,rate);
    calculateInterest(amount,rate,years);
    return 0;
}